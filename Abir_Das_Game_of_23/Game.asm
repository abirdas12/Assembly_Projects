.model tiny
.data
.code
org 100h

start:
	mov dx, offset msg1
	mov ah, 9
	int 21h
	
	mov dx, offset msg2
	mov ah, 9
	int 21h
	
	mov dx, offset msg3
	mov ah, 9
	int 21h
	
	mov dx, offset msg4
	mov ah, 9
	int 21h
	
	mov dx, offset msg5
	mov ah, 9
	int 21h
	
	mov dx, offset msg6
	mov ah, 9
	int 21h
	
	mov dx, offset msg7
	mov ah, 9
	int 21h
	
	mov dx, offset msg24
	mov ah, 9
	int 21h
	
	mov ah, 1h  ;This is to take the input
	int 21h
	
	mov dx, offset msg8
	mov ah, 9
	int 21h
	
	mov dx, offset msg9
	mov ah, 9
	int 21h
	
	mov dx, offset msg10
	mov ah, 9
	int 21h
	
	mov dx, offset msg11
	mov ah, 9
	int 21h
	
	mov dx, offset msg12
	mov ah, 9
	int 21h
	
	mov dx, offset msg13
	mov ah, 9
	int 21h
	
	mov dx, offset msg14
	mov ah, 9
	int 21h
	
	mov dx, offset msg15
	mov ah, 9
	int 21h
	
	mov dx, offset msg25
	mov ah, 9
	int 21h
	
	mov ah, 1h
	int 21h
	
	mov dx, offset msg16
	mov ah, 9
	int 21h
	
	mov dx, offset msg17
	mov ah, 9
	int 21h
	
	mov dx, offset msg18
	mov ah, 9
	int 21h
	
	mov dx, offset msg19
	mov ah, 9
	int 21h
	
	mov dx, offset msg20
	mov ah, 9
	int 21h
	
	mov dx, offset msg21
	mov ah, 9
	int 21h
	
	mov dx, offset msg22
	mov ah, 9
	int 21h
	
	mov dx, offset msg23
	mov ah, 9
	int 21h
	
	mov dx, offset msg26
	mov ah, 9
	int 21h
	
	mov ah, 4ch
	int 21h

msg1 db 'WECOME TO GAME OF 23. Follow the instuction to complete the game.', 13, 10, '  +====+====+====+====+ $'
msg2 db 13, 10, '  | 1  | 2  | 3  | 4  |', 13, 10, '  +====+====+====+====+ $'
msg3 db 13, 10, '  | 5  | 6  | 7  | 8  |', 13, 10, '  +====+====+====+====+ $' 
msg4 db 13, 10, '  | 9  | 10 | 11 | 12 |', 13, 10, '  +====+====+====+====+ $'
msg5 db 13, 10, '  | 13 | 14 | 15 | 16 |', 13, 10, '  +====+====+====+====+ $'
msg6 db 13, 10, '  | 17 | 18 |    | 19 |', 13, 10, '  +====+====+====+====+ $' 
msg7 db 13, 10, '  | 21 | 22 | 23 | 20 |', 13, 10, '  +====+====+====+====+ $'

msg24 db 13, 10, ' Enter 1 to move 19: $'


msg8 db 13, 10, ' Moving number 19... $'

msg9 db 13, 10, '  +====+====+====+====+ $'
msg10 db 13, 10, '  | 1  | 2  | 3  | 4  |', 13, 10, '  +====+====+====+====+ $'
msg11 db 13, 10, '  | 5  | 6  | 7  | 8  |', 13, 10, '  +====+====+====+====+ $' 
msg12 db 13, 10, '  | 9  | 10 | 11 | 12 |', 13, 10, '  +====+====+====+====+ $'
msg13 db 13, 10, '  | 13 | 14 | 15 | 16 |', 13, 10, '  +====+====+====+====+ $'
msg14 db 13, 10, '  | 17 | 18 | 19 |    |', 13, 10, '  +====+====+====+====+ $' 
msg15 db 13, 10, '  | 21 | 22 | 23 | 20 |', 13, 10, '  +====+====+====+====+ $'

msg25 db 13, 10, ' Enter 2 to move 20: $'

msg16 db 13, 10, ' Moving number 20... $'

msg17 db 13, 10, '  +====+====+====+====+ $'
msg18 db 13, 10, '  | 1  | 2  | 3  | 4  |', 13, 10, '  +====+====+====+====+ $'
msg19 db 13, 10, '  | 5  | 6  | 7  | 8  |', 13, 10, '  +====+====+====+====+ $' 
msg20 db 13, 10, '  | 9  | 10 | 11 | 12 |', 13, 10, '  +====+====+====+====+ $'
msg21 db 13, 10, '  | 13 | 14 | 15 | 16 |', 13, 10, '  +====+====+====+====+ $'
msg22 db 13, 10, '  | 17 | 18 | 19 | 20 |', 13, 10, '  +====+====+====+====+ $' 
msg23 db 13, 10, '  | 21 | 22 | 23 |    |', 13, 10, '  +====+====+====+====+ $'

msg26 db 13, 10, '!!!Congrats on finishing the game in 2 moves!!! $'

end start
