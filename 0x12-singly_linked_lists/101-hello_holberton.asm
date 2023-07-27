global    main
extern    printf
main:
mov   edi, format
xor   eax
call  print
mov         eax, 0
ret
format: db `Hello, Holberton\n`,0
