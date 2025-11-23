#Checkpoint 1 - Automated Test Cases

## Feature Tested: Add Flashcards

###Environment 
- C++17 (CMake project in CLion)
- Test executable: `test_feature`
- Run command: `./test_feature.exe`

---

## Test 1 - testAddFlashcard()

**What it tests**
- Adding a flashcard to `FlashcardManager`
- Manager size updates correctly
- Manager is no longer empty

**Expected result**
- Size becoms 1
- `isEmpty()` returns false

## Test 2 - testEmptyFlashcard()

**What it tests**
- Manager starts empty before adding anything

**Expected result**
- `size() == 0`
- `isEmpty() == true`

**Actual result:** PASSED

---

## Test 3 - testFlashcardEditing()

**What it tests**
- Editing flashcard content
- Setting question and answer
- Marking correct state

**Expected result**
- Question becomes `"Q"`
- Answer becomes `"A"`
- `isMarkedCorrect()` returns true

**Actual result:** PASSED

---

## Full Test Output