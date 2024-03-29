#!/bin/bash

echo "Expected value:"
echo "==3643== Memcheck, a memory error detector
==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3643== Command: ./e
==3643== 
0
1
2
3
4
98
402
1024
==3643== 
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3643== 
==3643== All heap blocks were freed -- no leaks are possible
==3643== 
==3643== For counts of detected and suppressed errors, rerun with: -v
==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)"

if   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e; then
    echo -e "\n"
    echo "Your output: "
    valgrind ./e 
else
    echo "Compilation failed"
fi