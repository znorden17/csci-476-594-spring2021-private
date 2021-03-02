
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

## Task 3
