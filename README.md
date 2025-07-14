# FILE-HANDLING-PROGRAM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ATHARVA GULHANE

*INTERN ID*: CT04DF2093

*DOMAIN*: C Programming

*DURATION*: 4 WEEEKS

*MENTOR*: NEELA SANTOSH

## DESCRIPTION OF TASK

The task involved designing, implementing, and testing a C program that performs basic file handling operations: creating and writing to a file, reading its contents, appending new data, and finally displaying the updated file content. The aim was to understand and demonstrate practical usage of standard file operations in the C programming language, along with using modern tools like Visual Studio Code (VS Code) and GCC compiler to build and run the program.

The project began by writing a C program using VS Code, a popular, lightweight code editor that supports many languages and offers excellent features like syntax highlighting, auto-completion, integrated terminal, and debugging tools. The program itself was written in the C programming language, known for its efficiency and close-to-system programming capabilities.

In the first part of the program, the task was to create a new file and write user-provided data into it. This was done by opening the file in "w" mode using the fopen function from the standard library. The program then used fgets to safely read a line of input from the user and fprintf to write this data into the file. Proper error handling was added by checking if fopen returned NULL, and perror was used to display the exact system-level reason if the file could not be opened.

In the second part, the program read the file content and displayed it on the screen. The file was opened in "r" mode, and a loop with fgets was used to read and print each line until the end of the file was reached. Again, error checking ensured that the program would not crash if the file could not be opened.

The third part of the program added the append functionality. The file was opened in "a" mode, which keeps the existing content intact and allows new data to be added at the end. The program asked the user for another line of input, which was then added to the file using fprintf. Finally, the file was closed properly to ensure the changes were saved.

To verify the changes, the last part of the program reopened the file in "r" mode and printed its final contents, showing both the original data and the newly appended data together.

##OUTPUT

<img width="1095" height="611" alt="Image" src="https://github.com/user-attachments/assets/44af7432-67e3-48ef-85c9-68282e365471" />

