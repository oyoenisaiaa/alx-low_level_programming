section .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

global main
extern printf

section .text
main:
    push rbp
    mov rbp, rsp

    mov rdi, fmt
    mov rsi, msg
    xor eax, 0
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
