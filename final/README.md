<div align="center">Final Lab | CSCI 476
  
Zoe Norden | s68k193() 
</div>


# Task 2

## Task 2.1

CBC - No, because of the block chaining and because we might access this a lot - we have a decent chunk get corrupted. 

CTR - Lacks authentication, uses the same key/iv,. HOWEVER - it is fast and secure. pro/con - does not include padding which could be concerning. 

GCM - does have authentication. slightly slower. 

RSA - asymmetric - so it's slow. and if we're accessing it every day... not a good fit. Also - if you lose the private key - you lose everything.

256-Hash - SHA-2 it's fast, resistant to preimage/second preimage attacks, collision resistant. this wouldn't be bad - but you need something on top of it. 

https://www.quora.com/What-were-the-drawbacks-of-RSA-cryptosystem
https://crypto.stackexchange.com/questions/18420/aes-gcm-disadvantage
https://crypto.stackexchange.com/questions/85571/disadvantages-of-aes-ctr
https://crypto.stackexchange.com/questions/43990/what-are-advantages-and-disadvantages-of-sha-256
