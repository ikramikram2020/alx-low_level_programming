extern printf
extern fflush
section .data
	fmt: db "%s", 10, 0
	sentence0: db "Hello, Holberton", 0
segment .text
	global  main
main:
	push rbp

	mov rdi,fmt
	mov rsi,sentence0
	mov rax,0
	call printf
	pop rbp
	mov rax,0
	ret
