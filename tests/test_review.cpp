#include "../include/flashcard.h"
#include "../include/flashcard_manager.h"
#include <cassert>
#include <iostream>

//Test 1: Review with one card (marked correct)
void testReviewOneCard() {
    FlashcardManager m;
    Flashcard c("2+2?", "4");
    m.addFlashcard(c);

    //Simulate marking as correct
    assert(m.size() == 1);
    assert(!m.isEmpty());

    Flashcard temp = c;
    temp.markCorrect(true);

    assert(temp.isMarkedCorrect() == true);

    std::cout << "testReviewOneCard PASSED\n";
}

//Test 2: Review multiple cards
void testReviewMultipleCards() {
    FlashcardManager m;

    Flashcard c1("Capital of France?", "Paris");
    Flashcard c2("5*6?", "30");
    m.addFlashcard(c1);
    m.addFlashcard(c2);

    assert(m.size() == 2);

    //Simulate marking
    Flashcard t1 = c1;
    Flashcard t2 = c2;

    t1.markCorrect(true);
    t2.markCorrect(false);

    assert(t1.isMarkedCorrect() == true);
    assert(t2.isMarkedCorrect() == false);
    std::cout << "testReviewEmptyDeck PASSED\n";
}

//Test 3: Marking incorrect
void testReviewEmpty() {
    FlashcardManager m;

    assert(m.isEmpty());
    assert(m.size() == 0);
    std::cout << "testReviewEmptyDeck PASSED\n";
}

int main() {
    std::cout << "Running Review Feature Test...\n\n";

    testReviewOneCard();
    testReviewMultipleCards();
    testReviewEmpty();

    std::cout << "\nAll Tests Passed!\n";
    return 0;
}