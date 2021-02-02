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

3. If data is the input/output of a program/application and code are instructions of what to do with an input, I’d say the distinction exists to keep the two things somewhat separate and referenceable in conversation even though they are ultimately the same thing. 

4.	I think that malware would be something that we need to be concerned about. Just because with malware, you might be able to target libraries of a program. 

5.	A trust boundary might be where you need a certain amount of privilege to access a higher level of data in a program. For example, if you’re going to the White House, you might need a certain level of clearance to actually visit the President. You can’t just invite some random person that you picked up from downtown and get them into the Oval Office, there’s a certain amount of security clearance that you need. 

6.	Hex addresses, permissions, and the mapping of libraries (and other things) so that we can find them.  

7.


