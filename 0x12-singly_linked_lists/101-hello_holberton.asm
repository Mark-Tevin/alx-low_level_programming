extern printf

section .text
   global main

main:
   push rbp

   move rdi,fmt
   move rsi,msg
   mov,rax,0
   call printf

   pop rbp


   move rax,0
   ret

section .data
   msg: db "Hello, Horlberton"
   fmt: db "%s", 10, 0
