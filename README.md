# Simple-Login-System
The code below is my latest attempt to solve a practice question from the book.

Code Description:
-This program asks the user to enter a user name and password (which I have already pre-defined in the code).
-It then checks the user's input in the if-else-if statements.
-If the login condition is true, it will print a welcome message to the user.
-Otherwise it will tell the user the entry is invalid and allows them to try 4 more times. (5 in total)
-Also, the loginAttempt loop counter is incremented up by 1.
-All of these if-else-if statements are nested in a while loop which checks the loginAttempt condition.

-When the loop breaks, the program will check to see if the variable loginAttempt == 5, if its true it will tell the user they have tried to login too many times and the program will terminate.

-If the login was successful the loop will break and ignore the the previous condition I just mentioned and print a thank you message for logging in.
