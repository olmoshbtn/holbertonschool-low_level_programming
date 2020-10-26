	section .data
msg:		db "Hello, Holberton", 10
msglen:		equ $-msg

	section	.txt

	global	main

main:
	mov     eax, 4
	mov     ebx, 1
	mov     ecx, msg
	mov     edx, msglen
	int	80h
	
	syscall		 		; invoke operating system to do the write
	mov       rax, 60		; system call for exit
	xor       rdi, rdi		; exit code 0
	syscall		 		; invoke operating system to exit
