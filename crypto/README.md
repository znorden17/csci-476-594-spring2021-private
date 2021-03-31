
<div align="center">Lab 02 | CSCI 476
  
Zoe Norden | s68k193() 
</div>


# Task 1


## What is cryptography?

I suppose the official definition is as follows: 
"Crpytography is the practice and study of techniques for securing communication and data in the presence of adversaries." - Crytography 101 - The Basics. 

As I see it, cryptography is the a way of encrypting information. 

One of the most interesting uses of cryptography, in my opinion, is during WWII. In WWII, people from the Navajo Nation that served in the military were able to create an uncrackable code by simply speaking their native language. I always thought that was super neat because it wasn't based on anything and its a language/people that the Japanese/Germans would have never encountered. Nor would they have been able to infilitrate to learn/steal code because it was never written down. The guy who invented said language was one of the only fluent speakers, outside the Navajo Nation, that spoke the language fluently. It wasn't written down because Native Americans, including the Navajo, never really wrote any of their history down, it was all transmitted orally. Of course, now the code is common knowledge and easily Googleable, but back in WWII? Without the internet? Near impossible. 

## What problem(s) does it solve?

Crpytography solves data access restrictions. It doesn't really solve your security problems but it does limit who can access data. 

## What potential issues are there in using and desigining crpytography?

I mean probably part of the issue with cryptography is understanding that it won't solve all your security problems and that cryptography won't solve all your security problems. A hacker can probably break into cryptography by just... typing quick. I don't really see this as an issue, per say, but because a lot of ciphers are based on some sort of math, at least from what I can tell, I can see the math behind breaking ciphers getting weird. Even still, with a lot of ciphers being based on math, there's always going to be a way to break those crypts. Eventually. 


## What are some of the big, important ideas in cryptography?

Today we have 7 tenants, if you will, to what defines a "good" cipher. 
      1) The sytem must be practically, if not mathematically, indecipherable;
      2) It should not require secrecy 
      3) It should not be a problem if it falls into enemy hands
      4) It must be possible to communicate and remember the key without using written notes
      5) It must be applicable to telgraph communications
      6) It must be portable
      7) It should not require several persont to handle or operate. 

Other ideas in cryptography are assymemtric and symmetric encryption. 

> Asymmetric encryption is a type of encryption that uses two separates yet mathematically related keys to encrypt and decrypt data.

Asymetric encryption example would be like a VPN using RSA protocols. 

> Symmetric encryption is a type of encryption where only one key (a secret key) is used to both encrypt and decrypt electronic information. 

Symmetric encryption would be: AES, RC4, DES, RC5, and RC6


# Task 2


First of all - this was actually very interesting to do. I'm not sure if there's proper way to do this - but I used [this link](https://www.101computing.net/frequency-analysis/). It's also kind of funny because I totally spaced that the letter `o` was a) a vowel and b) commonly used in words. I don't know how I forgot `o` was a thing but I did. 

I didn't really have a "strategic" way of doing this because once you get a couple the rest of this becomes much more simple. Either way, I started by pulling up the paragraphs individually because it would be an absolute nightmare sorting through the entire puzzle in one go and checking for one or two "correct" letters. So, first I figured out which letters were used "alone" as it were by tossing this thing into a frequency analysis and going from the most used letter `u` and so on. Since `p` and `h` were both the highest "used" letter and were "alone" I knew that one had to be `i` and the other had to be `a`. It was just a matter of finding out what belonged where.

Sicne the first paragraph started with an `h`, I decided to start googling two letter words that begin with a/i. A little bit of Googling later and if/at were my primary suspects. However, since the chances of you guys leaving `t` as `t` in your cipher, I figured we'd go with `i` for `h` and go from there. Once I put `i` and `a` into their place I decided to go across the entire first line of encrypted nonsense and just try to make a sentence work. And from there.. things started to take off. Especially once you start to look at repeated letters. So like for words like `been` and whatnot, you have those two repeated letters `ee`. And since we guessed that `t` = `n` (which I got by flat out just Googling two letter words that start with `i` and just picking `in` by happenstance) we can assume that the four letter words that have repeating encrypted letters that are the same does not go `ttn` or `rrn` or `ssn` (because those are the only repeating things I can think of) we shove `ee` in there and then we get `b` for `been`. It was a lot of guess and check. And then, yeah, once you get the first paragraph you go the next using the same key that you had before and double check some things. 

Once you kind of got a theme for what the entire encrypted essay-thing was on, you could start to rule out some things, especially once you learn later that `w` is never used. You can go through and kind of look at obscure letters like `q` and `x` and `z`. And `q` is actually used more than you think it is. Anyway - it was a lot of guess and check. Anywho - here's some screenshots of me using `tr` and confirming things. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private)



