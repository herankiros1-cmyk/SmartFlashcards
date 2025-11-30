# Checkpoint 3 Reflection

## What I Implemented
For Checkpoint 3, I implemented the Save and Load Flashcards feature using file I/O. The program can now save all flashcards to a text file and load them automatically when it starts. This means my flashcards are not lost when I close the program.

## Integration With Previous Features
This feature works together with my first two features:
- Feature 1 (Add Flashcard): New flashcards that I add can now be saved and reloaded in future sessions.
- Feature 2 (Review Flashcards): When I start the program again, I can review flashcards that were created earlier because they are loaded from the file.

All three features now make the app feel more like a real study tool: I can add cards, review them, and keep them for later.

## Challenges I Faced
Some challenges I had:
- Making sure the saving and loading used a consistent file format.
- Getting the program to load data at the right time (at startup) and save at the end.
- Making sure the program did not crash when there were no flashcards or when the file was empty.
- Setting up and running the automated tests for save/load.

## What I Learned
From this checkpoint, I learned:
- How to use file streams in C++ (`ofstream` and `ifstream`).
- How to design and use a simple file format for saving objects.
- How to connect multiple features together (Add + Review + Save/Load).
- How important testing is when you are working with files and persistent data.

## Testing Results
I created three automated tests in `tests/test_save_load.cpp`:
- Test 1: Save and load a single flashcard → Passed
- Test 2: Save and load an empty deck → Passed
- Test 3: Save and load multiple flashcards → Passed

All tests passed successfully, which gave me confidence that the save/load behavior works for normal usage and edge cases.

## Overall Project Completion Progress
Right now, I would estimate my project is about 65% complete. I have three major features working (Add, Review, Save/Load). I still need to finish Quiz Mode and possibly the Delete Flashcard feature. I feel on track to finish everything.

**Completed features:**
- Add new flashcards
- Review flashcards
- Save and load flashcards (file I/O)

**Planned / remaining features:**
- Quiz mode
- Possibly delete flashcard
- Any extra polish or improvements (better messages, more options)

I feel [on track / a little behind but manageable] for the final submission. The biggest remaining challenge will be implementing quiz mode and making sure the user experience feels smooth.

## Time Spent
I spent approximately 5 hours on this checkpoint (feature, tests, and documentation).
