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
