section .data
    hello_msg db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global main

main:
    mov rdi, format
    mov rsi, hello_msg
    xor rax, rax       ; Clear rax to indicate no floating-point arguments
    call printf

    ; Exit the program
    mov eax, 60         ; System call number for exit
    xor edi, edi        ; Return status 0
    syscall
