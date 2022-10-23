global _start
section .text

_start:
	mov	rax, 1		;system call for write
	mov	rdi, 1		;file handle standard output
	mov	rsi, msg	;address of message to print
	mov	rdx, 17		;length of bytes
	syscall			;call to operating to write to stdout
	mov	rax, 60		;system exit call
	xor	rdi, rdi	;exit code 0
	syscall			;call OS to exit

section .data

	msg: db	"Hello, Holberton", 10	; end with new line

