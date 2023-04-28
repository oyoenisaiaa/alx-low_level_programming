global main
extern printf

section .data
    hello db "Hello, Holberton", 0
    fmt db "%s\n", 0

section .text
main:
    push rbp
    mov rbp, rsp

    mov rdi, fmt
    mov rsi, hello
    mov eax, 0
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
