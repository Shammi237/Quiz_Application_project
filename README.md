# Quiz_Application_project
This C++ code defines a simple quiz game program. Here's a description of its main components:

1. Main Function:
   - Declares variables finalresult and playAgain.
   - Calls the playQuiz function and stores the result in finalresult.
   - Displays the total score and determines if the player passed or failed.
   - Asks if the player wants to play again and repeats the quiz if the score is passing.

   2.playQuiz Function:
   - Initializes variables c and option for user input and score to keep track of the quiz score.
   - Guides the user through the quiz with a set of questions and multiple-choice options.
   - Validates user input and updates the score accordingly.
   - If the user enters an incorrect character at the beginning, prompts them to enter 's' to start the quiz.
   - Returns the final score.

3. Quiz Questions:
   - The quiz contains 10 multiple-choice questions related to C++ concepts.
   - Each question has four options (a, b, c, d), and the user inputs their choice.

4. Conditional Statements:
   - Checks if the total score is greater than or equal to 6 to determine if the player passed or failed.
   - If passed, asks if the player wants to play again and repeats the quiz if they choose 'yes'.
   - Uses goto to loop back to the quiz start if the player wants to play again after failing.

5. User Interaction:
   - Uses standard input/output to interact with the user, displaying instructions and receiving input.

6. Note:
   - The use of goto for looping is generally discouraged in modern C++ programming. It's preferable to use loops like while or for.
   - The code might benefit from breaking down the functionality into more functions, improving readability and maintainability.


     Name: Shammi Akter.
     
     ID: 222-115-237.
