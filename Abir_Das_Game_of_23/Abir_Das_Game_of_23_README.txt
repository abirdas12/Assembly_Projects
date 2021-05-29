
Name: Abir Das
Assembly Language (CSC 21000) Second Project
Game_of_23
Section: G
Date: 12/13/2020

The following program that I have created allows the user to play a puzzle, which is a game of 23 that uses different instructions as they play the game. The process of building the program was first to declare variables like “msg” as strings that will form each line of the box having the numbers 1,2,3,4,5...23. I was able to do that using the following code in assembly language: 

Mov dx, offset msg1
Mov ah, 9
int  21h

Mov dx, offset msg2
Mov ah, 9
int  21h
.
.
.
.
.
Mov dx, offset msg25
Mov ah, 9
int  21h

Mov dx, offset msg26
Mov ah, 9
int  21h

These lines of code in the .asm file that is attached in the folder help to create variables that will later be set to lines of strings in the code. 

The program also uses user input for the user to move the numbers based on the instruction provided. To allow user input, in the .asm file I had to code the following, 

Mov ah, 1h → allows the user to input whatever the program asked for. 
int 21h

After these methods in the code, it is highly required in the assembly program to end the code, so that you do not have a repeating program. Therefore, to end the program the following lines of code were done in the .asm file. 

Mov ah, 4ch
int 21h

After exiting the code, the .asm file also has the following lines that print out the string to create the box in the program. The lines include the following: 

msg2 db 13, 10, '  | 1  | 2  | 3  | 4  |', 13, 10, '  +====+====+====+====+ $'
msg3 db 13, 10, '  | 5  | 6  | 7  | 8  |', 13, 10, '  +====+====+====+====+ $'
.
.
.
msg15 db 13, 10, '  | 21 | 22 | 23 | 20 |', 13, 10, '  +====+====+====+====+ $'

All the variables that are declared at the beginning of the code are now stored into dp to form the lines of strings shown above to be displayed by the program when it is run. 

This project has given me a new experience in programming. I have never coded in assembly language in a .asm file. The outcome produced by the program was very satisfying. My thought about creating this program was to display a box with 23 keys and ask the user to move key numbers 19 and 20 in the box to complete the game, and I was able to accomplish that in two moves in the program. The program gives the user a welcome and congratulation message when it starts and completes the game. The file I am attaching will contain the Game.asm file, GAME (COM) file, Game.Map file, GAME (Object) file, and some images of the output the program produces.  

Therefore, that is what this program does and I hope you enjoy it when you run it on your machine. Thank You.


============References===========

1) https://www.youtube.com/watch?v=A6QI8aW71MQ&t=293s&ab_channel=GoodToGo <--------- Watched a video on how to get user input on x86 assembly language. 

2) https://en.wikipedia.org/wiki/15_puzzle <---------- Read about game of 15 to get the idea of how it generally works. 

3) Course lecture PDF <--------- To get the general knowledge of how to code in assembly language in terms of declaring variables, strings etc.  
