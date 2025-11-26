# Checkpoint 2 Test Case

## Project: SmartFlashcards
## Feature: Review Flashcards (Second Feature)

This document summarizes the automated tests I ran for my second feature, **Review Flashcards**, and how they relate to the behavior of my program.

---

## Overview of Review Feature

The Review Flashcards feature allows the user to:

1. Add one or more flashcards.
2. Choose the "Review flashcards" option from the main menu.
3. See each question one by one.
4. Press Enter to reveal each answer.
5. Mark each card as correct or incorrect using 'y' or 'n' .

The feature relies on:
- `Flashcard` (for question, answer, and correctness state)
- `FlashcardManager` (for sorting the deck and checking empty/size)
- `Flashcard::markCorrect(bool)` and `Flashcard::isMarkedCorrect()`

---

## Test File and Executable

- Test source file: `tests/test_review.cpp`
- Test executable: `test_review.exe`

I ran it from:

```bash
cmake --build
./test_review.exe
