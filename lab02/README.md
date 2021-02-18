
<div align="center">Lab 02 | CSCI 476
  
Zoe Norden | s68k193() 
</div>


## Task 1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task1.1.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task1.2.png)

According to the book, if I run bash it shouldn't print something out unless I declare it. So we should be good here. 

## Task 2


#### 2.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task2.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task2.2.png)

This was interesting because it doesn't consider the foo command thingy that I did in task 1 as an environment variable with the website and the HTTP viewing thing. 

#### 2.2.1
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task2.2.1.png)

basically allows us to view things. 

#### 2.2.2
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task2.2.2.png)

Allows us to change the user-agent.

#### 2.2.3
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task2.2.3.png)

So it does the exact same thing it looks like as -v but adds a refer to a url.

#### 2.2.4
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task2.2.4.png)

Adds a header of some kind
#### 2.2.5

So I think the only that can inject is technically -e because it refers you to a url or something. I think -H also adds something and so -A.

## Task 3

#### 3.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task3.1.png)

#### 3.2

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task3.2.png)


#### 3.3

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task3.3.png) 


#### 3.4

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task3.4.png) 


#### 3.5

Assuming that "steal" means to view them or maybe export them to a different file (which you can do by adding a > test.txt at the end and then going to cat test.txt), you should not be able to do this. I think it's because that we aren't the root ID. If we were root, we probably could do this. The 2>&1 allows us to actually view the assignment. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task3.5.png) 

#### 3.6

Skip! Not a grad student


## Task 4

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task4.png)

I think I did this correct but I can't accesss things like /etc/passwd because access is denied so I don't see how I got all this access to things. 

## Task 5

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab02/screenshots/2_task5.png)

So I used nano to edit and change from /bin/bash_shellshock to bin/bash. And these were the results that I got. ALL NEGATIVES! Which I think it what I want. Hopefully. It was honestly kind of neat to see it not work on this sort of thing so it does show that curl doesn't work (or at least how we used it in this lab). 

## Task 6

Skip! Not a grad student







