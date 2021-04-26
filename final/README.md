<div align="center">Final Lab | CSCI 476
  
Zoe Norden | s68k193() 
</div>


# Statement of Academic Hoensty

I Zoe Norden (s68k193) agree that the solutions presented below are entirely my own. If I have used resources that are not my own, I have included appropriate citations.

Those citations will be listed below the entire task itself via a link and in a seperate [INSERT REFERENCE LINK HERE] page located in this directory. 


# Task 1

### Task 1.1

> Both system() and execve() can be used to execute external programs. Why is system() considered to be unsafe while execve() is considered to be safe?

`system()` is considered unsafe because it does not support code isolation. This means that an attacker could insert a new command or something malicious into the a a command input which could lead to some unwanted effects.

`execve()` is considered safe because it makes developers break down their inputs into three different arguments so there is no grey area, which means there's no room to insert something malicious. 

### Task 1.2

> For the Shellshock vulnerability to be exploitable, two conditions need to be satisfied. What are these two conditions?

1) you should be able to run bash 2) must be able to obtain an enviornmental variable from the outside. 

### Task 1.3

```
Suppose we run
$ nc -l 7070
on Machine 1 (IP address is 10.0.2.6), and we then type the following command on Machine 2 (IP address is 10.0.2.7).

$ /bin/cat < /dev/tcp/10.0.2.6/7070 >&0
Describe what is going to happen.
```

Machine 1 is going to open up a port and start listening for an incoming connection on port 7070.
Machine 2 wil connect to Machine 1 using the `/dev/tcp/10.0.2.6/7070` part of the command. `/bin/cat` & `>&0` and anything that Machine 1 types out will be reflected on Machine 2. So Machine 2 will be able to know whatever Machine 1 types out.


### Task 1.4
> What is ASLR and why does ASLR make buffer-overflow attacks more difficult?

ASLR stands for Address Space Layout Randomization. ASLR randomies the memory addresses of both an executable and the positions of a stack/heap/libraries. This makes it hard for attackers to guess the location of maliciously injected code. 

### Task 1.5

> What is the underlying cause for XSS vulnerabilities?

The underlying cause for XSS vulnerabilities is that HTML allows JS code to be mixed with data. According to the book, when the code & data show up, the HTML parser in the browser separates the code from the data but it doesn't understand what came from where - so it just executes the code. 


### Task 1.6

> What is the difference between reflected XSS and stored XSS?

A reflected or non-persistent XSS is like when the user inputs "cute penguin photos" into Google and then Google spits out something that might say "No results for cute penguin photos". However, if the query is not reflected correctly, then it may have an XSS vulnerability. Attacks can then put JS code into the user input so when you reflect the user input back, the JS code will also be run and attach itself to the user's browser and infect the computer. 

A stored XSS or persistant XSS attack is when attackers can send their data directly to a target website. That website then stores the data in a storage area. Then, if a user needs that stored data, the website sends the data and the malicious infection to the user, thus infecting the user. This creates a channel between the attacker and the users. 

Chapter 11 in Computer and Internet Security was a big help in finding this answer. 

### Task 1.7

> In the Diffie-Hellman key exchange, Alice sends g^x mod p to Bob, and Bob sends g^y mod to p to Alice. How do they get a common secret?

So, Alice and Bob both pick random positive integers less than p. Alice picks x < p and bob picks y < p. And then Alice sends `A = g^x mod p` to Bob. Bob sends `B =  g^y mod p` to Alice. Alice then computes `K = B^x mod p` which is just `(g^y mod p)^x mod p`. Bob computes `B^1 = A^y mod p` which is just (g^x mod p)^y mod p. Now after doing this, they get the same secret using the rules of math - `g^(xy) mod p`. An on-looker might be able to get all the pieces but because an on-looker will never known the numbers that Bob/Alice picked (x/y) an onlooker wouldn't be able to compute g^xy.

Page 532 of the Computer and Internet Security book was a major help in finding this answer. 

### Task 1.8

> Why do we use hybrid encryption? Why don’t we simply use public key cryptography to encrypt everything?

We use hybrid encryption because public key cryptography has a high computation cost. We don't always know how large the file that we're encrypting is going to be, so if we have a lot of data, we could have this ridiculously hard public-key computation cost that we need to make. 

### Task 1.9

> (Part 1) When you run programs at the command line (e.g., ls, cat, top) or link to libraries (e.g., libc), 
> How are these programs/libraries found?


The programs/libraries are found because they're connected to a public network (bin) that holds all the files that are associated with that command. 

> (Part 2) What is a potential risk of using this approach to find programs/libraries?


These are some very public files that can be seen and edited by anyone. As a result, if someone wanted to, you could easily inject something malicious into those files that would be run every time you typed in `ls`. As someone who never remembers what they name anything or where anything's stored, this would be very dangerous for me. 


### Task 1.10

> Identify at least three countermeasures to buffer-overflow attacks and briefly describe how they work.

I used the book for this one. 

1) Programming language: If the language has some sort of built in check against buffer overflow, like a  boundary checking, then the developers don't have to worry about making sure their program isn't vulernable to buffer-overflow attacks. Two examples of a language with a built in check against buffer-overflows is Java and Python. 

2) Operating system: The operating system is ultimately responsible for loading and executing up programs. ASLR which is Address Space Layout Randomization, is one way for the OS to help you defend against buffer overflow attacks because ASLR randomizes the memory.

3) Hardware architecture: Modern CPUs have this thing called NX bit. NX bit has the ability to separate code from dat. An OS can also make pieces of memory non-executable whic hmeans it literally can't execute code using that piece of memory. This means you could technically defeat a buffer overflow by making your memory non-executable. 

# Task 2

### Task 2.1

> Please recall our class on 4/20 with a guest visit from Ryan Darnell. During this class we discussed a real-world scenario where you needed to design a feature that used an 
> assortment of ideas we’ve learned about from cryptography to protect project files. Your primary objectives were to (1) securely store sensitive project data, while (2) trying > to minimize overhead and data loss (e.g., due to partial file corruption).```

> Please write a brief summary of the approach you settled on, the pros/cons, and any potential challenges or issues with your approach.

CBC - No, because of the block chaining and because we might access this a lot - we have a decent chunk get corrupted. 

CTR - Lacks authentication, uses the same key/iv,. HOWEVER - it is fast and secure. pro/con - does not include padding which could be concerning. 

GCM - does have authentication. slightly slower. 

RSA - asymmetric - so it's slow. and if we're accessing it every day... not a good fit. Also - if you lose the private key - you lose everything.

256-Hash - SHA-2 it's fast, resistant to preimage/second preimage attacks, collision resistant. this wouldn't be bad - but you need something on top of it. 

So, given what we know, we need something that's going to be fast, reliable, and if I recall correctly from lecture, we don't want someting that requires authentication. 

I ruled out CBC because it's block chaining, so if it does get corrupted in between encrypting and decrypting, you could lose a great deal of information. GCM is slower than CTR (even though they're virtually the same) but it GCM has authentication, which we don't want. RSA is asymmetric so while it's probably pretty secure, the information is being accessed on a daily basis (or more often). Since RSA is pretty darn slow, we cannot pick it. I decided not to go with CTR because while it does lack authentication and is fast and secure, there isn't any padding and you always use the same key/iv. I figure using the same key/iv for everything isn't a great plan. 

Which is why, I decided to go with 256-Hash because it's fast and resistent to many different types of attacks. It's also used as a common password authentication encryption. I figure if it works for that, I don't see why it wouldn't work well for encrypting data like this. It's also a very fast and reliable way of encryption. However this also seems a little like overkill. If this is deemed as overkill, then my second choice will absolutely be CTR because it meets the most requirements after the SHA-2. 


Resources: 
[RSA](https://www.quora.com/What-were-the-drawbacks-of-RSA-cryptosystem)
[GCM](https://crypto.stackexchange.com/questions/18420/aes-gcm-disadvantage)
[CTR](https://crypto.stackexchange.com/questions/85571/disadvantages-of-aes-ctr)
[SHA-256](https://crypto.stackexchange.com/questions/43990/what-are-advantages-and-disadvantages-of-sha-256)

I don't know why the formatting for the opening quesiton is so off, my bad. I tried to get it in one code block and I promise that I'm doing this correctly it just hates me. 

### Task 2.2

> In your own words, what is compliance and why is compliance important?

Compliance is making sure that existing policies are being followed and companies are meeting whatever security guidelines that are applicable to them. 


> What is a compliance framework?

Compliance framework is a bunch of rules and set structures of guidelines/rules that a company needs to follow to ensure they're meeting the regulartory requirements. 

> Thank you Reese's slides


> Please provide three (3) examples of a compliance rule/test, and briefly explain why this check could be helpful towards ensuring compliance?


1) STIG-16811: The designer will ensure the application does not have cross site scripting (XSS) vulnerabilities.

This check will be helpful towards ensuring compliance because it prevents the customer from having their data stored or their cookies exposed or anything else that can be maliciously injected into a website.

2) STIG-217976: The Ubuntu operating system must implement address space layout randomization toprotect its memory from unauthorized code execution.

This check will be helpful towards ensuring compliance because it helps prevent buffer-overflow vulnerabilities that would give the attacker root access which would be incredibly dangerous to a system. 

3) STIG-217976: The audit system must be configured to audit all use of setuid and setgid programs.

This check will be helpful towards ensuring compliance because it helps prevent attackers from hiding what they are doing. Logging all types of setuid and setgid programs will help monitor the system for suspicious activity. 


# Task 3

### Task 3.1

> Please read the source code for audit.c and, at a high level, describe what this program does and how it works.


This program asks the the user to enter a file name in the command line and then it will run the `bin/cat` command to display the contents of whatever file name was entered. However, using `system(command)` the user can delete any file that they want. 

### Task 3.2

> With our understanding of audit.c from the previous task, please demonstrate how it can be exploited to run an arbitrary command with elevated privileges.
> For your demonstration, you’ll need to compile audit.c and make the resulting executable a privileged Set-UID program.

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/final/screenshots/task3.2.png)


Right - so using the `system()` I was able to gain access to root by adding that tiny extra command `;/bin/sh` While not demonstrated, you could also use `system()` to delete a file of your choice using tha a similar command. While this would not grant you root access, you could delete any file that you wanted. 

### Task 3.3

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/final/screenshots/task3.3.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/final/screenshots/task3.3.1.png)


Right, as you can see, it echo'd things, but it didn't actually do anything extra. And then if we follow the same idea that we did before and try the same idea - it says that whatever file didn't exist, thus circumvented. 

# Task 4

### Task 4.1

> To defeat SQL injection attacks, a web application has implemented a filtering scheme on the client side: basically, on the page where users type their data, a filter is implemented using JavaScript. It removes any special character found in the data, such as apostrophes, characters for comments, and keywords reserved for SQL statements. Assume that the filtering logic does it job, and can escape/remove all the code from the data.

>Is this solution able to defeat SQL injection attacks? Explain.

No I don't think so. I think you could probably get like 90% of any and all SQL injection but I think a carefully crafted SQL statement could still get around the apostrophes/characters for comments/keywords. I noticed that this method doesn't get rid of any of periods. And, dependong on what you consider a special character, this might not get rid of brackets. For that reason, I think that a carefully crafted SQL statement could get around things. 

### Task 4.2

> The following SQL statement is sent to the database to add a new user to the database, where the content of the $name and $passwd variables are provided by the user, but the EID and Salary field are set by the system. How can a malicious employee set his/her salary to a value higher than 80000? Please demonstrate and explain your approach.

```$sql = "INSERT INTO employee (Name, EID, Password, Salary)
        VALUES ('$name', 'EID6000', '$passwd', 80000)";```
