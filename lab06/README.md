
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

If you want to view my original picture - it's linked [INSERT LINK]

# Task 3


