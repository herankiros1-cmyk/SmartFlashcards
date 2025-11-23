#include "../include/flashcard.h"
#include "../include/flashcard_manager.h"
#include <iostream>
#include <cassert>

void testAddFlashcard() {
    FlashcardManager m;
    Flashcard card("2+2?", "4");
    m.addFlashcard(card);
    assert(!m.isEmpty());
    assert(m.size() == 1);
    std::cout << "testAddFlashcard PASSED\n";
}

void testEmptyFlashcard() {
    FlashcardManager m;
    assert(m.isEmpty());
    assert(m.size() == 0);
    std::cout << "testEmptyFlashcard PASSED\n";
}

void testFlashcardEditing() {
   Flashcard card("", "");
    assert(card.getQuestion() =="");
    assert(card.getAnswer() == "");

    card.setQuestion("Q");
    card.setAnswer("A");

    assert(card.getQuestion() == "Q");
    assert(card.getAnswer() == "A");

    card.markCorrect(true);
    assert(card.isMarkedCorrect() == true);

    std::cout << "testFlashcardEditing PASSED\n";
}

int main() {
    std::cout << "Running SmartFlashcards tests...\n\n";


    testAddFlashcard();
    testEmptyFlashcard();
    testFlashcardEditing();
    std::cout << "\nAll tests passed!\n";
    return 0;
}