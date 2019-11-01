global main

extern printf

message: db "Hello, Holberton", 10, 0

section .text
main:
mov 	rdi, message
mov	rax, 0
call	printf
mov	rax, 0
ret

