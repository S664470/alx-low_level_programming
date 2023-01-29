section.data
str db "Hello, Holberton", 10
section.next
global_start
_start;
mov rax, 0x2000004;
mov rdi, 1;
mov rsi, str;
mov rdx, 14;
syscall;

mov rax, 0x2000001;
mov rdi, 0;
syscall
