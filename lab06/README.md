
<div align="center">Lab 06 | CSCI 476
  
Zoe Norden | s68k193() 
</div>


# Task 1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task1.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task1.2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task1.3.png)


I'm not sure why it's giving me "hex string is too short, padding with zero bytes to length". I thought it might be the key being to short, but if I change the length of the key, it tells me that "hex string is too long, ignoring excess". It also tells me that the hex string is too short in the same line, so who knows? I sure don't. 

Anyway - even though it's too short or whatever, I do still have encrypted things. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task1.4.png)


# Task 2

## Task 2.1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.1.2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.1.3.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.1.4.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.1.5.png)

What's kind of neat is that you can't really see what it is in the cbc encryption but it's blatantly obvious in the ebc. 


## Task 2.2

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.2.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.2.2.png)

Code snippets used to encode my penguin file.

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.2.3.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task2.2.4.png)

cat'ing things together and the image we got as a result

First up - it was a little hard to find a bmp file but thankfully I found this website that does it for me. `https://image.online-convert.com/convert-to-bmp` which was an absolute live saver. I learned that if you try to harshly convert something but saving it as a different type - it says there's a corrupt header file or something, which is obviously not we want. 

So ecb still makes it so you can *kind of* tell what your original file is. It's a bit better than the original_picture image that we dealt with in Task 2.1, but it's still semi noticeable. With cbc, you can again see absolutely nothing. However, instead of the weird static you see when your tv sucks in the original_picture image, in my original_penguin, I just get a green-ish checkered screen, as you can see by the image. 

I wonder if that has something to do with the detail provided in the images? I'm not sure why it would be more checkered. 

If you want to view my original picture - it's linked [here](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/ciphertexts/bmp/penguinbmp/original_penguin.bmp)

# Task 3

## Task 3.1 -> CBC

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.1.png)

So `five.txt` went from 5 to 16, `ten.txt` went from 10 to 16 and then `sixteen.txt` went from 16 to 32. So it looks like it pads out 16 spaces or whatever, it inreases the file size when you encipher something by 16 at a time. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.3.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.4.png)

So when you decipher and don't remove the pad, then the byte size stays the same at 32/16/16, respectively. 


## Task 3.2 -> ECB 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.5.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.6.png)

This one has padding

## Task 3.2 -> CFB


![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.7.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.8.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.9.png)

This one does not have padding because it has a streamchipher so it does not need complete padding. So you can go byte by byte. 

## Task 3.2 -> OFB 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task3.1.10.png)

This one does not have padding because it has a streamchipher so it does not need complete padding. So you can go byte by byte. According to the book - it might depend on what type of data is being passed through?


# Task 4

## Task 4.1

ECB - Since there's only one block affected at a time, everything is decrypted individually. So while you might have an odd character here and there that might be corrupted, you could probably fill in the blank and make an easy guess as to what got corrupted using context clues. 

CBC - So, because it acts as a chain, if we lose one block to corruption, then we lose all following blocks.

CFB & OFB - I think they're both the same/similar. And based off of them being XOR'ed and slightly based on previous blocks, I think if you lose one block I think you lose a lot. I think you'll lose a lot. 


## Task 4.2

Changed the 55th byte to go from 17 to 15. What this did was corrupt *part* of Ancient Greek work that I can't pronounce or type in - but not all of it. There were only a couple characters so this was easily decipherable. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task4.2.png)


## Task 4.3

I changed the 55th byte to E9 instead of E7 and when I changed things back... 


![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task4.3.png)

So it looks like it took out a decent chunk of what I was trying to figure out and to be fair - I couldn't figure out what this said when it was in normal Greek, Idefinitely don't know what it means now. Things definitely got corrupted but I can still read a decent portion of the file.  

# Task 4.4

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task4.4.png)

So - it looks like we lost the beginning of this file which I did not expect to see. 

# Task 4.5

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task4.5.png)

This was wild - this was basically identical to the original - EXCEPT for one singular line where it says `(Ancient Greek: ancient greek synbols I can't enter;` where it has that `;` it should be a `)`. I did not expect to this to change everything basically the same except screw up at a end parenthesis.

# Task 5

## Task 5.1


![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task5.1.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab06/screenshots/task5.1.2.png)

So if we use the same IV, we get two things that are very obviously the same but like in the second screenshot. However, if we use two different IVs, like in the first screenshot, we get two obviously different thingscl
