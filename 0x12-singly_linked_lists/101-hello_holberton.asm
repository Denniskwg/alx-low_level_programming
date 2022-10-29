section .text
	global main
main:
mov rdi,msg
mov al,0

extern printf
call printf
ret
leave

section .data
msg db 'Hello, Holberton', 0xa
len equ $ - msg
