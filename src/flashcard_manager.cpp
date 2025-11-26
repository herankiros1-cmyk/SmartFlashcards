#include "../include/flashcard_manager.h"
#include <iostream>
#include <algorithm>
#include <limits>

FlashcardManager::FlashcardManager() : filename("flashcard.txt"){}
FlashcardManager::FlashcardManager(const std::string& dataFile) : filename(dataFile){}
FlashcardManager::~FlashcardManager() = default;

int FlashcardManager::findCardIndex(const std::string& question) const {
    for (size_t i = 0; i < deck.size(); ++i) {
        if (deck[i].getQuestion() == question) return static_cast<int>(i);
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

    std::cout << "\n--- Reviewing Flashcards ---\n";

    for (size_t i = 0; i < deck.size(); ++i) {
        Flashcard &card = deck[i];

        std::cout << "\nCard " << (i + 1) << " of " << deck.size() << "\n";
        std::cout << "Q: " << card.getQuestion() << "\n";

        //Wait for Enter ti show the answer
        std::cout << "(Press Enter to see the answer)";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "A: " << card.getAnswer() << "\n";

        //Ask if they got it right, and keep asking until they type y or n
        char choice = 'n';
        while (true) {
            std::cout << "Did you get it correct? (y/n): ";
            std::cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                card.markCorrect(true);
                std::cout << "Marked as correct.\n";
                break;
            } else if (choice == 'n' || choice == 'N') {
                card.markCorrect(false);
                std::cout << "Marked as incorrect.\n";
                break;
            } else {
                std::cout << "Please type y or n.\n";
            }
        }

        //Clear leftover newline before next loop
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "\n--- End of Review ---\n";
}


void FlashcardManager::quizMode() {
    std::cout << "[TODO] quizMode(); randomize and score answers\n";
}

bool FlashcardManager::saveToFile(const std::string& path) {
    std::cout << "[TODO] saveToFile(" << path << ")\n";
    return true;
}

bool FlashcardManager::loadFromFile(const std::string& path) {
    std::cout << "[TODO] loadFromFile(" << path << ")\n";
    return true;
}

bool FlashcardManager::isEmpty() const {return deck.empty();}
int FlashcardManager::size() const { return static_cast<int>(deck.size()); }