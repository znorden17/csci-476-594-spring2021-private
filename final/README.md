<div align="center">Final Lab | CSCI 476
  
Zoe Norden | s68k193() 
</div>


# Statement of Academic Hoensty

I Zoe Norden (s68k193) agree that the solutions presented below are entirely my own. If I have used resources that are not my own, I have included appropriate citations.

Those citations will be listed below the entire task itself via a link and in a seperate [INSERT REFERENCE LINK HERE] page located in this directory. 


# Task 1

### Task 1.1

```Both system() and execve() can be used to execute external programs. Why is system() considered to be unsafe while execve() is considered to be safe?```

`system()` is considered unsafe because it does not support code isolation. This means that an attacker could insert a new command or something malicious into the a a command input which could lead to some unwanted effects.

`execve()` is considered safe because it makes developers break down their inputs into three different arguments so there is no grey area, which means there's no room to insert something malicious. 

### Task 1.2

```For the Shellshock vulnerability to be exploitable, two conditions need to be satisfied. What are these two conditions?```

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
```What is ASLR and why does ASLR make buffer-overflow attacks more difficult?```

ASLR stands for Address Space Layout Randomization. ASLR randomies the memory addresses of both an executable and the positions of a stack/heap/libraries. This makes it hard for attackers to guess the location of maliciously injected code. 

### Task 1.5

```What is the underlying cause for XSS vulnerabilities?```

The underlying cause for XSS vulnerabilities is that HTML allows JS code to be mixed with data. According to the book, when the code & data show up, the HTML parser in the browser separates the code from the data but it doesn't understand what came from where - so it just executes the code. 


### Task 1.6

```What is the difference between reflected XSS and stored XSS?```

A reflected or non-persistent XSS is like when the user inputs "cute penguin photos" into Google and then Google spits out something that might say "No results for cute penguin photos". However, if the query is not reflected correctly, then it may have an XSS vulnerability. Attacks can then put JS code into the user input so when you reflect the user input back, the JS code will also be run and attach itself to the user's browser and infect the computer. 

A stored XSS or persistant XSS attack is when attackers can send their data directly to a target website. That website then stores the data in a storage area. Then, if a user needs that stored data, the website sends the data and the malicious infection to the user, thus infecting the user. This creates a channel between the attacker and the users. 

Chapter 11 in Computer and Internet Security was a big help in finding this answer. 

### 1.7

```In the Diffie-Hellman key exchange, Alice sends g^x mod p to Bob, and Bob sends g^y mod to p to Alice. How do they get a common secret?```

So, Alice and Bob both pick random positive integers less than p. Alice picks x < p and bob picks y < p. And then Alice sends `A = g^x mod p` to Bob. Bob sends `B =  g^y mod p` to Alice. Alice then computes `K = B^x mod p` which is just `(g^y mod p)^x mod p`. Bob computes `B^1 = A^y mod p` which is just (g^x mod p)^y mod p. Now after doing this, they get the same secret using the rules of math - `g^(xy) mod p`. An on-looker might be able to get all the pieces but because an on-looker will never known the numbers that Bob/Alice picked (x/y) an onlooker wouldn't be able to compute g^xy.

Page 532 of the Computer and Internet Security book was a major help in finding this answer. 

### Task 1.8
```Why do we use hybrid encryption? Why don’t we simply use public key cryptography to encrypt everything?```

We use hybrid encryption because public key cryptography has a high computation cost. We don't always know how large the file that we're encrypting is going to be, so if we have a lot of data, we could have this ridiculously hard public-key computation cost that we need to make. 

### 1.9

```
(Part 1) When you run programs at the command line (e.g., ls, cat, top) or link to libraries (e.g., libc), how are these programs/libraries found?

(Part 2) What is a potential risk of using this approach to find programs/libraries?
```

### Task 1.10

```Identify at least three countermeasures to buffer-overflow attacks and briefly describe how they work.```

I used the book for this one. 

1) Programming language: If the language has some sort of built in check against buffer overflow, like a  boundary checking, then the developers don't have to worry about making sure their program isn't vulernable to buffer-overflow attacks. Two examples of a language with a built in check against buffer-overflows is Java and Python. 

2) Operating system: The operating system is ultimately responsible for loading and executing up programs. ASLR which is Address Space Layout Randomization, is one way for the OS to help you defend against buffer overflow attacks because ASLR randomizes the memory.

3) Hardware architecture: Modern CPUs have this thing called NX bit. NX bit has the ability to separate code from dat. An OS can also make pieces of memory non-executable whic hmeans it literally can't execute code using that piece of memory. This means you could technically defeat a buffer overflow by making your memory non-executable. 

# Task 2

## Task 2.1

CBC - No, because of the block chaining and because we might access this a lot - we have a decent chunk get corrupted. 

CTR - Lacks authentication, uses the same key/iv,. HOWEVER - it is fast and secure. pro/con - does not include padding which could be concerning. 

GCM - does have authentication. slightly slower. 

RSA - asymmetric - so it's slow. and if we're accessing it every day... not a good fit. Also - if you lose the private key - you lose everything.

256-Hash - SHA-2 it's fast, resistant to preimage/second preimage attacks, collision resistant. this wouldn't be bad - but you need something on top of it. 

[RSA](https://www.quora.com/What-were-the-drawbacks-of-RSA-cryptosystem)
[GCM](https://crypto.stackexchange.com/questions/18420/aes-gcm-disadvantage)
[CTR](https://crypto.stackexchange.com/questions/85571/disadvantages-of-aes-ctr)
[SHA-256](https://crypto.stackexchange.com/questions/43990/what-are-advantages-and-disadvantages-of-sha-256)
