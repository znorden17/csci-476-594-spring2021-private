<div align="center">Final Lab | CSCI 476
  
Zoe Norden | s68k193() 
</div>


# Statement of Academic Hoensty

I Zoe Norden (s68k193) agree that the solutions presented below are entirely my own. If I have used resources that are not my own, I have included appropriate citations.

Those citations will be listed below the entire task itself via a link and in a seperate [INSERT REFERENCE LINK HERE] page located in this directory. 


# Task 1

### Task 1.1

`system()` is considered unsafe because it does not support code isolation. This means that an attacker could insert a new command or something malicious into the a a command input which could lead to some unwanted effects.

`execve()` is considered safe because it makes developers break down their inputs into three different arguments so there is no grey area, which means there's no room to insert something malicious. 

### Task 1.2

1) you should be able to run bash 2) must be able to obtain an enviornmental variable from the outside. 

### Task 1.3


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
