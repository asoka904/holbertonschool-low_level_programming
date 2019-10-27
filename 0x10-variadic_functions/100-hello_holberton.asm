section .text
	global	main

main:
	mov	rax, 0x01
	mov rdi, 0x01
	mov rsi, txt
	mov rdx, 0x11
	syscall
	mov rax, 0x3C
	mov rdi, 0x00
	syscall

section .data
	txt db "Hello, Holberton", 0x0A
