# Systems & Software

- Zoe Norden (s68k193)
- CSCI 476
- znorden17@outlook.com
- February 1st 2021


1.	So, fork() is duplicating an existing process and run the original process and the new process at the same time. exec() is when you replace an old process with something new.
2. 
![systems](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/system/Screenshot_8.png)

**Kernal space** is where the user cannot read/write to addresses. i.e: A device driver
**Memory mapping segment:** file mappings (dynamic libraries and anonymous mappings. i.e: RAM
**BSS segment:** uninitialized variables. i.e static char *penguins;
**Data segment:** variables that have initialized by the programmer. i.e: static char *penguins = “penguins are fluffy”
**Text segment:** stores binary images of a process, i.e bin/gonzo
**Stack:** function call to a program, penguins(arefluffy);
**Heap:** all objects that are created, char *penguins = malloc(17);

