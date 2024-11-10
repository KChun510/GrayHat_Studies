section	.data			; Section declaration
msg	db "Hello, Haxor!", 0xa ; Our string with a carriage return
len	equ	$ - msg		; length of our string, $ means here
section	.text		; mandatory section declaration
			; export the entry point the ELF linker or
	global _start	; loaders conventionally recognize
			; _start as their entry point
_start:
			; now, write our string to stdour
			; notice how arguments are loaded in reverse
	mov	edx,len	; third arg (msg len)
	mov	ecx,msg	; second arg (pointer to message to write)
	mov	ebx,1	; load first arg (file handle (stdout))
	mov	eax,4	; system call number (4=sys_write)
	int 	0x80	; call the kernal to interrupt and exit
	mov	ebx,0	; load first syscall arg (exit code)
	mov 	eax,1	; system call number (1=sys_exit)
	int	0x80	; call kernal interrupt and exit

