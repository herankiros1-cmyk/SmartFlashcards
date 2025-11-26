# Checkpoint 2: Second Feature Plan

## Feature Name
Review Flashcards

## Description 
This feature lets the user review all saved flashcards one by one. For each card, the program shows the question first, waits for the user to press Enter, then shows the answer. The user can also indicate whether they got the question correct, and the flashcard can store that result.

## Why This Feature?
This feature builds directly on my first feature (Add Flashcard) by letting the user actually study the cards they created. It uses the existing Flashcard and FlashcardManager classes and gives the project real study functionality instead of just storage. It is more complex than just adding cards because it involves looping through the deck, user interaction, and updating flashcard state.

## Classes Involved
- `Flashcard`
    - Uses `getQuestion()`, `getAnswer()`, and `markCorrect(bool)`
- `FlashcardManager`
    - Implements `reviewAll()` to control the review flow
- `main.cpp`
    - Adds/uses a menu option for "Review flashcards" that calls `manager.reviewAll()`

## Expected User Workflow
1. User adds one or more flashcards using the "Add new flashcard" menu option.
2. User choose the "Review flashcards" menu option.
3. The program goes through each flashcard in the deck:
    - Shows the question
    - Waits for the user to press Enter
    - Shows the answer
    - Asks if they got it correct (for example: y/n)
    - Optionally updates the flashcard's `markCorrrect` field
4. After the last flashcard, the program returns to the main menu.

## Estimated Time
About 3-4 hours, including coding, testing, and documentation.