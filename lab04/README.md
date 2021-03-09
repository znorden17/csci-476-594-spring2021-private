
<div align="center">Lab 02 | CSCI 476
  
Zoe Norden | s68k193() 
</div>

## Task 1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task1.png)

Ta-da! I am mildly curious though - the container built and showed me two different containers. I wasn't able to use mysql on one of them but I was able to on the other one. Is there a reason there's the two different containers? 


## Task 2


#### Task 2.1

I honestly didn't think it would be this simple of a command. I thought it would be more indepth like the curl commands. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task2.1.1.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task2.1.2.png)

#### Task 2.2

I refuse to tell you how long this took me. I didn't notice the $ in the code snippet provided in the lab example so I kept trying my curls from within the container and I was so close to bashing my head into a wall. Especially since my curl command looked beautiful to me, spoiler alert: it was not beautiful. I am curious why we didn't have to mention the password part. If you look at the url provided when you log via Admin, you see it mention &password. All I had to do was mention the username=Admin '#. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task2.2.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task2.2.2.png)

#### Task 2.3

I wasn't sure what to do for my command and looking at my screenshots I do wonder if it doesn't work because I didn't have a space between ; and D. I mean, it wasn't going to work anyway anyway, but that little lack of space does make me wonder if it's a contributing feature. I also mentioned someone named Fred, who flat out doesn't exist. I don't think the lab said to use someone who did exist, but regardless: there is a security measure against using multiple commands at once, so it wouldn't work regardless. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task2.3.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task2.3.2.png)


## Task 3

#### Task 3.1

Well, I've officially made Alice rich. I'm pretty sure this would also be a suspicious amount of money suddenly going to one person and if Aice was smart, she would slowly raise her salary once every 3 months or so but maybe a thousand, two thousand at a time. Not just jump it up to whatever she wanted at once. Not smart. 

I thought this command was interesting because of how... plain it was. Again, I expected SQL to be more head-bashing against the wall inducing. I thought the commands would be clear than they are now. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.1.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.1.2.png)


#### Task 3.2

And that's just cold-hearted and mean and lady, you are definitely getting fired. I used the same command as before but modified slightly to target the person named Samy (which is spelled wrong, should be Sammy). 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.2.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.2.2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.2.3.png)

I wonder if there's a way to narrow things down further? I suppose I could directly target the employee ID of Samy. The only reason I bring it up is because it would be unfortunate if there was this receptionist or something also named Samy who also got their salary dropped to 1. Unless SQL has a priority thing? Like the first Samy we find we're going to change the password of?


#### Task 3.3

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.3.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.3.2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task3.3.3.png)

Hopefully you can see the changes that we made, I tried to get the ending screenshot thing but as you can see there is a before and after for the password. I also really hope you never ask me to login because I have no idea what I set it to. I suppose I could just reset it. 

It was interesting to have to use the sha command. It makes sense that you would have to encrypt it, but it's interesting that you can't just enter a raw password change. 


## Task 4

#### Task 4.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task4.1.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab04/screenshots/task4.1.2.png)

There we go, that's the code. I tried logging in with Admin '# which is what I used last time and it wasn't super happy about that, as you can see. It was kind of interesting that there wasn't all that much code needed to actually prevent an SQL injection. So that was kind of neat. 


