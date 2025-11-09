#ifndef FLASHCARD_MANAGER_H
#define FLASHCARD_MANAGER_H
#include <vector>
#include <string>
#include "flashcard.h"

/**
 *FlashcardManager handles creating, reviewing, and saving flashcards.
 */
class FlashcardManager {
private:
    std::vector<Flashcard> deck;
    std::string filename;

    int findCardIndex(const std::string& question) const;

public:
    FlashcardManager();
    explicit FlashcardManager (const std::string& dataFile);
    ~FlashcardManager();

    //Curd
    void addFlashcard(const Flashcard& card);
    bool removeFlashcard(const std::string& question);

    //Study flows
    void reviewAll(); //iterate through deck
    void quizMode(); // random or scored session

    //File I/O
    bool saveToFile(const std::string& path);
    bool loadFromFile(const std::string& path);

    //Info
    bool isEmpty() const;
    int size() const;
};
endif //FLASHCARD_MANAGER_H