section .text
	global main
main:
mov rdi,msg
mov al,0

extern printf
call printf

mov eax,1
int 0x80

section .data
msg db 'Hello, Holberton', 0xa
len equ $ - msg
