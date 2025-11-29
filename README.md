# Smart Flashcards
A command-line study tool that helps users create, review, and track flashcards for any subject.

## Features
- Add and review flashcards
- Track user performance (correct/incorrect)
- Save and load flashcards from a file
- (Planned) Quiz mode with scoring 
- (Planned) Delete flashcards
- (Planned) Statistics and progress tracking

---

# Project Status (Up to Checkpoint 3)

## Feature 1 - Add Flashcard
- Fully working "Add new flashcard"
- Stores a new Flashcard(question, answer)
- Uses FlashcardManager::addFlashcard
- Tested in `test_feature.cpp`
- All tests passed

---

## Feature 3 - Save & Load Flashcards (File I/O)
- Save flashcards to `flashcards.txt`
- Loads flashcards at program start
- Correctly loads:
  - Empty decks
  - One card
  - Multiple cards
- Fully tested in `test_save_load.cpp`
- All 3 tests passed

---

# Automated Testing Summary

### Test Suite 1 - Add Flashcard
File: **tests/test_feature.cpp**
Tests: 
- testAddFlashcard
- testEmptyFlashcard
- testFlashcardEditing
**All passed**

### Test Suite 2 - Review Flashcards
File: **tests/test_review.cpp**
Tests:
- testReviewOneCard
- testReviewMultipleCards
- testReviewEmpty
**All passed**

### Test Suite 3 - Save/Load
File: **tests/test_save_load.cpp**
Tests:
- testSaveLoadSingleCard
- testSaveLoadEmptyDeck
- testSaveLoadMultipleCards
**All passed**

---

# In Progress
- Quiz mode (Feature 4)
- Flashcard removal option

---

# Planned Features
- Delete a flashcard by question
- Quiz scoring system
- Shuffle/random review
- Statistics page
- Data validation improvements

---

# Known Issues / Limitations
- Quiz mode not implemented
- Removal option not available yet
- No summary results in review mode

---

## Building
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Usage
./SmartFlashcards

## Author
Heran Kiros-CIS 25 Final Project

