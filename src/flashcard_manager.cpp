#include "../include/flashcard_manager.h"
#include <iostream>
#include <algorithm>
#include <fstream>

// Default file if none provided
FlashcardManager::FlashcardManager() : filename("flashcards.txt") {}

FlashcardManager::FlashcardManager(const std::string& dataFile)
    : filename(dataFile) {}

FlashcardManager::~FlashcardManager() = default;

int FlashcardManager::findCardIndex(const std::string& question) const {
    for (size_t i = 0; i < deck.size(); ++i) {
        if (deck[i].getQuestion() == question) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

void FlashcardManager::addFlashcard(const Flashcard& card) {
    deck.push_back(card);
}

bool FlashcardManager::removeFlashcard(const std::string& question) {
    int idx = findCardIndex(question);
    if (idx >= 0) {
        deck.erase(deck.begin() + idx);
        return true;
    }
    return false;
}

void FlashcardManager::reviewAll() {
    if (deck.empty()) {
        std::cout << "No flashcards to review.\n";
        return;
    }

    std::cout << "\n--- Reviewing Flashcards ---\n\n";

    for (size_t i = 0; i < deck.size(); ++i) {
        std::cout << "Card " << (i + 1) << " of " << deck.size() << "\n";
        std::cout << "Q: " << deck[i].getQuestion() << "\n";
        std::cout << "(Press Enter to see the answer)\n";

        std::string dummy;
        std::getline(std::cin, dummy);

        std::cout << "\nA: " << deck[i].getAnswer() << "\n";
        std::cout << "Did you get it correct? (y/n): ";

        std::string response;
        std::getline(std::cin, response);

        if (!response.empty() && (response[0] == 'y' || response[0] == 'Y')) {
            deck[i].markCorrect(true);
            std::cout << "\nMarked as correct.\n\n";
        } else {
            deck[i].markCorrect(false);
            std::cout << "\nMarked as incorrect.\n\n";
        }
    }

    std::cout << "--- End of Review ---\n";
}

void FlashcardManager::quizMode() {
    if (deck.empty()) {
        std::cout << "No flashcards available for quiz.\n";
        return;
    }

    std::cout << "\n=== Quiz Mode ===\n";
    int total = static_cast<int>(deck.size());
    int correctCount = 0;

    // Simple quiz in the same order (not shuffled)
    for (size_t i = 0; i < deck.size(); ++i) {
        const Flashcard& card = deck[i];

        std::cout << "\nQuestion " << (i + 1) << " of " << total << ":\n";
        std::cout << card.getQuestion() << "\n";
        std::cout << "Your answer: ";

        std::string userAnswer;
        std::getline(std::cin, userAnswer);

        // If userAnswer is empty because of leftover newline, read again once
        if (userAnswer.empty()) {
            std::getline(std::cin, userAnswer);
        }

        if (userAnswer == card.getAnswer()) {
            std::cout << "Correct!\n";
            // we can mark a temporary correct if we want, but not required:
            // deck[i].markCorrect(true);  // not allowed because card is const
            ++correctCount;
        } else {
            std::cout << "Incorrect. Correct answer: " << card.getAnswer() << "\n";
            // deck[i].markCorrect(false); // same reason as above
        }
    }

    std::cout << "\nQuiz finished! You got "
              << correctCount << " out of " << total << " correct.\n";
}


bool FlashcardManager::saveToFile(const std::string& path) {
    std::ofstream out(path);
    if (!out) {
        std::cerr << "Error: Could not open file for writing: " << path << "\n";
        return false;
    }

    // Simple format: each card = 3 lines: question, answer, correctness(0/1)
    for (const auto& card : deck) {
        out << card.getQuestion() << "\n";
        out << card.getAnswer() << "\n";
        out << (card.isMarkedCorrect() ? 1 : 0) << "\n";
    }

    return true;
}

bool FlashcardManager::loadFromFile(const std::string& path) {
    std::ifstream in(path);
    if (!in) {
        // No file yet is not a hard error: just start with an empty deck
        return false;
    }

    deck.clear();

    std::string question;
    std::string answer;
    int correctFlag = 0;

    while (true) {
        if (!std::getline(in, question)) {
            break;
        }
        if (!std::getline(in, answer)) {
            break;
        }
        if (!(in >> correctFlag)) {
            break;
        }
        std::string dummy;
        std::getline(in, dummy); // consume leftover newline

        Flashcard card(question, answer);
        card.markCorrect(correctFlag != 0);
        deck.push_back(card);
    }

    return true;
}

bool FlashcardManager::isEmpty() const {
    return deck.empty();
}

int FlashcardManager::size() const {
    return static_cast<int>(deck.size());
}
