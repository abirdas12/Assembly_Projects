.model tiny
.code
	org 100h
start:
	; BEGIN BODY
	
	MOV AL, 1
	ADD AL, AL
	ADD AL, AL
	MOV BL, 2
	ADD BL, BL
	ADD BL, BL
	MOV CL, 4
	ADD CL, CL
	ADD CL, CL
	MOV DL, 6
	ADD DL, DL
	ADD DL, DL
	
	MOV AX, 1
	ADD AX, AX
	ADD AX, AX
	MOV BX, 2
	ADD BX, BX
	ADD BX, BX 
	MOV CX, 4
	ADD CX, CX
	ADD CX, CX
	MOV DX, 6
	ADD DX, DX
	ADD DX, DX
	
	MOV AH, 1
	ADD AH, AH
	ADD AH, AH
	MOV BH, 2
	ADD BH, BH
	ADD BH, BH 
	MOV CH, 4
	ADD CH, CH
	ADD CH, CH
	MOV DH, 6
	ADD DH, DH
	ADD DH, DH
	
	MOV SI, 1
	ADD SI, SI
	ADD SI, SI
	MOV DI, 2
	ADD DI, DI
	ADD DI, DI
	MOV BP, 4
	ADD BP, BP
	ADD BP, BP
	MOV SP, 6
	ADD SP, SP
	ADD SP, SP
	
	SUB AL, 6
	SUB BL, 10
	SUB CL, 8
	SUB DL, 12
	
	SUB AX, 6
	SUB BX, 10
	SUB CX, 8
	SUB DX, 12
	
	SUB AH, 6
	SUB BH, 10
	SUB CH, 8
	SUB DH, 12
	
	SUB SI, 6
	SUB DI, 10
	SUB BP, 8
	SUB SP, 12
	
	int 20h
	; END BODY
end start
