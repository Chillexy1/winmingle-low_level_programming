;Author: Chillexy Steven
;Program: WinMingle Community C Training
;Description: this a NASM 64-bit code that prints out
;"Hello WINMMINGLE" to the terminal using printf

section .data
        message db "Hello, WINMMINGLE", 10, 0

section .text
        global main
        extern printf

main:
    mov rdi, message

    xor eax,eax
    call printf

    xor eax, eax
    ret

