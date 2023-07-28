section .data
    format db 'Hello, Holberton', 0x0A, 0

section .text
    global main
    extern printf

main:
    mov rdi, format
    xor rax, rax
    call printf

    xor rax, rax   ; Set return value to 0 (optional)
    ret
