
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

#### 4.2
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task4.2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task4.3.png)

## Task 5


#### 5.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task5.1.png)

Well, it segfaulted. Which was not at all surprising since I think that
`sudo/sbin/sysctl -w kernel.randomize_va_space=2`
is basically just turning ASLR on again. And because we don't know where the memory is... things freak out. 

#### 5.2

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task5.2.png)

Alright. I admit this one was super fun. You were able to brute force your way around life and get into root this way. I actually really like this. I know it won't work like this in the real world, but my nice simulated one makes this super fun. 

I was able to figure out that this was the root because I ran whoami and id and ta-da low and behold. I do really like that he defaulted to running this on L1, at first it made me panic that I was going to have to do this again until I saw the ./stack-L1 so it's nice that it picked the right thing to run. 

I also didn't quite understand how to get out of root, my usual go to of either ^C, quit, and exit didn't work. 


## Task 6

#### 6.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task2.2.0.png)
Ta-da it still works!
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task6.1.png)
And now it doesn't, all this one does just give me a SEED shell. Which is interesting. I'm 95% positive that it's just supposed to give me an error of some sort. 
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task6.2.png)
Plus, look! It's a normal executable program. And if I try to run it, it has a heart attack and refuses to work. 


#### 6.2
So it looks like everything is back to normal. Of course, if I try to call  call_shellcode.c it does say that permission is denied so I think that's interesting. I think that was something I used to be able to call and reference. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task6.3.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab03/screenshots/task6.4.png)


I do not need to do the rest of the assignment as I am not a grad student and can thus skip the rest of this. 



