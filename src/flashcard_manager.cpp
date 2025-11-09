#include "../include/flashcard_manager.h"
#include <iostream>
#include <algorithm>

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
    std::cout << "[TODO] reviewAll(); iterate over deck and show Q/A\n";
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