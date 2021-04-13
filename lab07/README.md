
<div align="center">Lab 07 | CSCI 476
  
Zoe Norden | s68k193() 
</div>


# Task 1

## Task 1.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab07/screenshots/task1.1.png)

Okay so the last line has one small difference. He stops being the same after EE - that's where it splits. 

## Task 1.2

If the message if not in a multiple of 64, it pads things out because I'm betting that MD5 only takes things in chunks of 64.

## Task 1.3

The message removes padding - 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab07/screenshots/task1.3.png)

## Task 1.4

So looking at 1.1/1.2 and 1.3 in comparison, it's very different. We went from a 15 byte prefix file to one that was 64 bytes. Because MD5 takes things in groups of 64, it had to pad out the shorter 15 byte thing. 

Essentially, everything was completely different as you can see from the below screenshots. The first screenshot is with the changed prefix (64 byte) and the second is with the original one (15 byte)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab07/screenshots/task1.4.1.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab07/screenshots/task1.4.2.png)


# Task 2

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab07/screenshots/task2.png)

So I couldn't get it to print out the differences and if I use `cmp newOut1.bin newOut2.bin` and it just shows me that they differ at `byte 84, line 3` however, because it does say that it does differ in some way - I will say that I did task 2 successfully. 

# Task 3

 
 So it's interesting to me when they have the same hash but the files differ. 
 
 ![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab07/screenshots/task3.png)

# Task 4

As you can see - that the hashes are the same but the executable does differ. In the malicious code, I changed one of the arrays from A's to B's. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab07/screenshots/task4.png)
