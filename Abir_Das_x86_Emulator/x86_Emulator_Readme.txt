Name: Abir Das
Empl ID: 23775688
Subject: Assembly Language (CSC 21000)
Section: G
Instructor: Michael Vulis
Date: 11/21/2020
	
	The following program in the file uses assembly language to write an emulator for x86, that is capable of running an assembler code in binary format. Assembly Language is a low-level language that allows the programmer to talk directly with the computer. It was my first time experience when I went on coding this program with zero knowledge of how it would work. However, using the PDF lecture from the course, I was able to come up with an idea of using 16 registers like, |AL, BL, CL, DL|, |AH, BH, CH, DH|, |AX, BX, CX, DX|, and |SI, DI, BP, SP|, and update their values from the .asm file. The .asm file is the heart of this program which holds the instruction for the registers that will carry over to the C++ code. Using a text editor file, I have codded the 16 registers with instructions such as MOV AL, 1, ADD AL, AL, SUB AL, 6, MOV BL, 2, ADD BL, BL, SUB BL, 10, etc... As instructed by the assignment that the program must use a .COM file, which is a binary file of the .asm file that is hard for a human to read. I went on creating .COM file using DOSBox. To see what the .COM file does I had to look up a binary file to hex converter and load the file in a website. In that way, I was able to figure out at what conditions each of the instructions is performed, and I applied those conditions in the actual C++ code. Doing so, I was able to update each register by their condition via addition, and subtraction within themselves. All these were possible by using switch statement cases and the counter IP, which increments per case in the if conditions in the C++ code. The counter makes sures that the each registers are getting updated when their cases are met. 

	In conclusion, this program can be more enhanced if this assignment was done for another trial. For the time being, this would be the final production for this assignment. Coding in such a low level 
language is never easy. However, what I acomplished really satifies me including more improvements near future. I hope you enjoy the program as it runs on your machine. Thank You.  

*** The file includes the following: .asm file, .COM file, x86_Emulator_CPP file, x86_Emulator_Exe file, and images of the ouputs. *** 


============================================ Reference ======================================================

1) https://courses.cs.vt.edu/~cs2604/fall00/binio.html --------------> Used it to learn how to load binary files like .COM in a C++ code

2) http://tomeko.net/online_tools/file_to_hex.php?lang=en -----------> Used it for converting the binary file (.COM) into hex values. 

3) https://www.teach-ict.com/as_as_computing/ocr/H447/F453/3_3_8/features/miniweb/pg4.htm -----> learned about opcode and operands.

4) Class PDF lectures ---------> Used the color coded diagram for instructions. 
