
<div align="center">Lab 02 | CSCI 476
  
Zoe Norden | s68k193() 
</div>


## Task 1


#### 1.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task1.1.png)

#### 1.2

The code creates a new shell that we can run commands from as if we were running them from seed@VM. What was interesting is that it looks like the id/whoami commands read the same as if we were seed@VM.

## Task 2


#### 2.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task2.1.png)

#### 2.2

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task2.2.0.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task2.2.2.png)


So I got it to work, after many hours of pain and suffering. How this works is that I gain access to root because we overwrite the memory of the program. Which leads to a change of execution of path, which damages files and would give us access to private info. 

Interestingly, using the following code, I just get the thing to infinitely loop. I'm not sure why that is. But here's the code thaat I used. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task2.2.1.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task2.2.3.png)

## Task 3

I figured the easiest way to do this would be to use a for loop that went in range for the buffer from 100 to 201 (which is in essence 200) and then if it matches, then we stop and move on. What I thought was weird for this one was the incrementation of 0x## was sort of off. In Task 2.2, I used 0x80 and in this one I had to use 100. Interestingly, if I used 0x80 I got a seg fault. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task3.1.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task3.2.png)

## Task 4

#### 4.1
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task4.1.png)


I think the only thing I observed was that instead of things being zsh before it's now /bin//sh. And that's true for both of a32 and a64. 

