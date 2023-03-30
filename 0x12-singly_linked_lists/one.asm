section .data
	message db "Hello, Holberton", 0Ah ; the string to print, terminated with a new line character (0Ah)

section .text
	global _start

_start:	; prepare the arguments for the write system call
	mov eax, 1 ; the system call number for write
	mov edi, 1 ; the file descriptor for stdout
	mov rsi, message ; the pointer to the message to print
	mov edx, 16 ; the length of the message (including the new line character)

	; invoke the write system call
	syscall

	; exit the program
	mov eax, 60 ; the system call number for exit
	xor edi, edi ; the exit status (0 for success)
	syscall

