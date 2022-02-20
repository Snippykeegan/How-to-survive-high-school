#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
int surviving;
char name[10], knowMore = 'Y';

{//prints and scans
printf("(Run in fullscreen, thank you :))\n\n");
printf("So you want to learn how to survive high school, eh?\nWell, i'm going to need your name first.\n");
scanf(" %s", &name);
printf("\nYou've come to the right place, %s!\n");
}

while(knowMore == 'y' || knowMore == 'Y')//all the information paths and information.
{
printf("What would you like to know about?\n");
{//Know more prints and scans
printf("[1]: Surviving a relationship.\n");
printf("[2]: Surviving the cafeteria.\n");
printf("[3]: Surviving your way to and from school.\n");
printf("[4]: Surviving your grades.\n");
printf("[5]: Surviving the balance between these things.\n");
scanf("%d", &surviving);
}

    if(surviving == 1)//Relationships -- Done!
    {
        surviving = 0;

        printf("\nAh, relationships. The most confusing thing for ANY high-schooler.\n");
        printf("Would you like to know about\n");
        printf("[1]: Dating.\n");
        printf("[2]: Other students.\n");
        printf("[3]: The administration.\n");
        printf("[4]: Teachers.\n");
        scanf("%d", &surviving);

            if(surviving == 1)//Dating relationships -- Done!
            {
                surviving = 0;


                printf("\nOf course, you want to know about dating, %s, you dirty dog, you.\n", name);
                printf("Would you like to know about\n");
                printf("[1]: Boys.\n");
                printf("[2]: Girls.\n");
                printf("[3]: Other.\n");
                scanf("%d", &surviving);

                if(surviving == 1)//Dating boys -- Done!
                {
                   
                    printf("\n%s, No.\nWhat you're looking for is no, do not date boys in high school, boys only care about one thing, and that's not your awesome personality, trust me\nDo Not Date Boys (DNDB), remember that.\n", name);
                    printf("\nWould you like to know more? (Y/N)\n");
                    scanf(" %c", &knowMore);
                }
                else if(surviving == 2)//Dating girls -- Done!
                {
                    
                    printf("\nOh, girls.\nGIRLS.\nI bet you can agree when I say girls are very, very confusing. but lucky you, %s, I have a few pointers. :D\n\n", name);
                    printf("\nTip 1: Be yourself.\nI know that's said CONSTANTLY, but I really want to hammer it in.\nLots of girls like different things, some like nerdy guys, some like jocks, some like cute girls, some like you!\n");
                    printf("so, really, be yourself. if yourself is bad with girls, then be bad with girls! if it's 'you', it's right.\n\n");
                    printf("Tip 2: be patient.\nDon't put girls on a pedistal like they're gods, they're not, and you don't NEED to be in a relationship.\njust talk to girls and eventually one will like you, don't try too hard.\n\n");
                    printf("Tip 3: don't treat female friends different from guy friends.\nI know that might sound silly, but really. Call female friends \"Guys\" and invite them to do things with your guy friends too, even if they don't accept.\n\n");
                    printf("So, following my tips, you have a partner, nice job! now remember that arguments are temporary and remember that it's okay to be vulnerable and wrong sometimes.\nThat should set you up nicely!\n\n\n");

                    printf("\nWould you like to know more? (Y/N)\n");

                    scanf(" %c", &knowMore);
                }
                else if(surviving == 3)//Dating other -- Done!
                {
                    
                    printf("\nWhen it comes to dating someone who doesn't fit nicely into the first two categories, my advice is simple.\n\n");
                    printf("Tip 1: Respect\n");
                    printf("You need to respect their boundries and prefrences, this goes for anyone else, aswell, but is very important in this case.\nRemember their pronouns and preferred name, if you forget, apologise and try to remember.\n");
                    printf("Other than that, take your time and try not to assume anything, go with the flow and learn with them.\n\n\n");

                    printf("\nWould you like to know more? (Y/N)\n");

                    scanf(" %c", &knowMore);
                }

            }
            else if(surviving == 2)//Relationships with other students -- Done!
            {
                
                printf("\nOther students, Yikes.\nThis one can be different depending on who you are and what you like, but I suggest joining a small group.\n");
                printf("Now, if you're an extrovert, my tips go like this:\n\nTip: 1: Talk to people.\n\n");
                printf("If you're an extrovert, things are a bit more tricky. it starts with\n\nStep 1: Observation.\n");
                printf("Just spend the first little while watching people in different places, the music room, the drama room, hallways, the common area, the cafeteria. just watch.\n");
                printf("After you find a group or clique you find interesting, be near them until they start talking about something you know about, then join in :D\nif that doesn't make you friends, you've found the wrong group.\n");
                printf("Now that you have friends, the big problem is\n\nTip 2: avoiding drama\n");
                printf("Honestly, my opinion there is: Don't get involved if you can help it.\n drama can split a friend group into two or three 'factions' and you never want to be a part of that\n");
                printf("just sort of watch it all happen and come back when everything's cooled down.\nif someone asks your opinion give it but also make sure everyone knows you're not picking sides\n\n");
                printf("Tip 3: don't put too much on it.\nHigh school friendships almost always end after high school and that's okay.\nWhat that means is these friendships are temporary so spend that time having fun rather than being stressed out.\n\n");
                printf("That's everything I have on other students as I don't interact with them much, I personally find them a hassle.\n");

                printf("\nWould you like to know more? (Y/N)\n");
                scanf(" %c", &knowMore);
            }
            else if(surviving == 3)//Relationships with administration -- Done!
            {
                
                printf("\nAdministration is an often overlooked group of people in one's school life, but also one that is very important.\n");
                printf("Most people only interact with administration when they get in trouble, but I think that's not that great.\n\nTip 1: Schedule meetings with your guidance counselor.\n");
                printf("I know it sounds lame, but it's good to have someone you can rely on if you need help, class changes, accommodations, &c.\n\n");
                printf("Tip 2: getting to know the administration.\n");
                printf("When you can, have a chat with the principal and assistant principal just so you know them, plus if anything happens, you're more likely to be listened to.\n\n");
                printf("Basically, my main tip is talk with your guidance counselor, one meeting goes a long way.\nIf you need any help with school, they've got your back, %s", name);

                printf("\nWould you like to know more? (Y/N)\n");

                scanf(" %c", &knowMore);
            }
            else if(surviving == 4)//Relationships with teachers -- Done!
            {
                
                printf("\nTeachers, i'm glad you wanted to learn about this!\nBefore I go on, %s, i'd like to say that my opinion probably differs from a lot of other people on this topic, so experiment a little bit.\n\n", name);
                printf("Tip 1: finding the balance.\nYou don't want to annoy your teachers by trying to be their friend, but you also want them to know you exist.\nGo in to get extra help a day or two before a test sometimes.\n\n");
                printf("Tip 2: be sure to express your needs.\nIf you need accomodations for your mental health, make sure to express them. Even if it's not mental health related, you still need to express that.\n");
                printf("Like if you need to be excused from class early one day, just say that, don't leave unannounced,\nor if something happened and you need more time for a test, all you need to do is ask.");

                printf("\nWould you like to know more? (Y/N)\n");

                scanf(" %c", &knowMore);

            }//teachers end
        }//relationships end

    else if(surviving == 2)//Cafeteria -- Done!
    {
        
        printf("Oh boy, the Cafeteria, that's quite the tough place. you want my opinion?\n\nTip 1: avoid it.\n");
        printf("Yeah, the only reason you should be in the Cafeteria is if your friends hang out there, and, if they do try to convince them to go somewhere else.\n\nTip 2: ");
        printf("The cafeteria is not a place to make friends.\npretty self-explanitory, don't go into the cafeteria expecting to come out with friends, not gonna happen.\n\n");
        printf("Tip 3: If you can help it, don't eat there.\nIf you have no friends, just eat somewhere else if you eat at all, usually you can eat in your next classroom, and if you have music or drama,\nyou can eat there too, in a secluded place.");

        printf("\nWould you like to know more? (Y/N)\n");

        scanf(" %c", &knowMore);
    }//Cafeteria end

    else if(surviving == 3)//Transportartion -- Done!
    {
        printf("\nSurviving your way to school can be a challenge, or it can be a peice of hypothetical cake.\nBut, uhh, %s, i'm going to need to know how you get to school first.\n", name);

        surviving = 0;

        printf("[1]: The bus.\n");
        printf("[2]: Getting a ride from your parents.\n");
        printf("[3]: Walking.\n");
        printf("[4]: Biking.\n");
        printf("[5]: Getting a ride from your friends or driving yourself.\n");
        scanf("%d", &surviving);

        if(surviving == 1)//Surviving the bus -- Done!
        {
            
            printf("\nYikes, the bus, this is probably the hardest one to survive, so,\n\nTip 1: Just find another way.\nYeah, you read that right, just don't bus.\nI know that doesn't work for everyone so,\n\n");
            printf("Tip 2: Choosing the right bus.\nSometimes the most direct path isn't the best one, maybe there's another route you can take that's shorter or cleaner or fixes any of the other problems in this list.\n");
            printf("But, if you're stuck to one bus line, that's when tips 2 and 3 get involed.\n\nTip 2: surviving annoying kids.\nIf your bus doesn't have annoying kids, then you are the annoying kids and if that's the case, great! problem solved!\n");
            printf("If that's not the case, then you're annoyed by the annoying kids.\nTo fix this you can get some heaphones and a music player. some people use spotify premium, some use a mp3 player,\npersonally, I use a cassette player, but the point is, music usually fixes the issue.");
            printf("\n\nTip 3: Making the most of it.\nA lot of people find the bus a huge drag, but I don't think that has to be the case!\nAfter a long day of school, before you get home, imagine putting on a playlist you like and reading a good book. ");
            printf("Doesn't that sound nice?\nAlternitively, when I don't feel like reading, I can play on my nintendo switch to just relax before I have to do chores or homework.\nJust try to make the most of the bus, %s, it can be nice.\n", name);

            printf("\nWould you like to know more? (Y/N)\n");

            scanf(" %c", &knowMore);
        }//Bus end

        else if(surviving == 2)//Surviving the ride with your parents -- Done!
        {
            
            printf("\nUgh, your parents, embarassing! They're always as loud as possible and park as close to the school as possible too...\n\n");
            printf("Tip 1: Talk to them about how you feel.\nI know how stupid that sounds, but... have you tried it? it just might work.\n");
            printf("Maybe something like, \"Hey, mom/dad? We kinda need to talk about how you drop me off, it makes me uncomfortable the way you ____.\"\n");
            printf("I don't know, maybe try it :)\nif that didn't work or you just can't bring yourself to do it\n\n");
            printf("Tip 2: Leave earlier.\nYeah, just try to arrive 10-15 minutes earlier to avoid other people, other than that, I don't have much for you, sorry");

            printf("\nWould you like to know more? (Y/N)\n");

            scanf(" %c", &knowMore);
        }//Ride with parents end

        else if(surviving ==  3)//Surviving the walk -- Done!
        {
            
            printf("\nWalking to and from school isn't bad! You can listen to music or just walk with your thoughts, both are good options. You just have to remember\n\n");
            printf("Tip 1: Wheather.\nYou just need to watch out and make sure you don't get too hot or too cold, remember to check and dress for the wheather.\n\n");
            printf("Tip 2: Avoid friends.\nUnless you've invited your friends to your place, just avoid them. I know it seems kinda mean, but walking is an amazing time to just\n");
            printf("Think to yourself.\nPeople nowdays underestimate how helpful it is to just be bored, being bored leads to inspiration and can help you think through decisions, that's my advice.");

            printf("\nWould you like to know more? (Y/N)\n");

            scanf(" %c", &knowMore);





        }//Walk end

        else if(surviving == 4)//surviving biking -- Done!
        {
            
            printf("\nAh, biking, good for your body, good for the enviornment. there are some things you need to know though.\n\nTip 1: locking up your bike.\n");
            printf("A lot of people like to steal bikes or bike parts. it's sad, but i've seen it happen. First of all, you need to use a solid steel lock, no chains or anything\n");
            printf("Because sometimes people will just pull the bike through the chain. that leads me to the second part, lock the body, not the wheels.\n");
            printf("Someone might just remove the wheels and take the rest of the bike, it's better to have a bike with no wheels than a wheel with no bike.\nI hope your bike doesn't get stolen, but it's more likely if you don't follow\n\n");
            printf("Tip 2: don't be a prick.\nSometimes people who bike can be a little annoying about it, some vegans end up doing the same thing. so don't pretend you're better than other people because you bike.\n");
            printf("Just, don't be mean.");

            printf("\nWould you like to know more? (Y/N)\n");

            scanf(" %c", &knowMore);

        }//Biking end

        else if(surviving == 5)//Surviving driving you or your friends -- done!
        {
           
            printf("\nThis is that peice of hypothetical cake I was talking about. I only have\n\n");
            printf("One tip: Don't drive impared\nThat means distracting the driver, drinking, drugs, or hotboxing (even with vape). it's just asking to get in an accident.\n");

            printf("\nWould you like to know more? (Y/N)\n");

            scanf(" %c", &knowMore);

        }//Driving self end

    }//Transportartion end

    else if(surviving == 4)//Surviving grades -- Done!
    {
        
        printf("\nYour grades, yikes. look,\n\nTip 1: you only really need to pass.\nI mean, try to do better than passing if you can, but getting a 60\% instead of a 75\% is okay, you don't need to sacrifice your mental health for better than passing.");
        printf("\n\nTip 2: it's okay if you need help.\nYeah! getting tutored by your friends can be a really great time, and if you can't do that staying after school is usually a pretty good option.\n");
        printf("Nobody's going to think you're stupid if you need to get help from a teacher, a lot of people are stupid because they never do.\nMaybe you can even get to know your teachers, some of them are pretty cool.");
        printf("\n\nTip 3: Switch into a class better for your skill level.\nSome people get put into classes that aren't their skill level, maybe it's too easy for you, maybe it's too hard, that's okay!\n");
        printf("If it's early enough in the semester, you can switch into a class that's better for you, you just need to talk to your guidance concellor about it.\n\n");
        printf("Tip 4: Don't skip classes.\nJust, c'mon. If you're overwhelmed and you need a day away, just stay home. If your friends are convincing you to skip, they're probably not very good friends.\n");
        printf("Skipping is stupid, anything you can do while skipping you can do after or before school too.\nIf you're skipping due to addiction, bring that up with your guidance councellor and you can find a solution together.\n");
        printf("A solution that can allow you to get your work done and quit your addiction. There really is no reason to skip.it just hurts you.");

        printf("\nWould you like to know more? (Y/N)\n");

        scanf(" %c", &knowMore);

    }//grades end

    else if(surviving == 5)//Surviving balance -- Done
    {
        
        printf("\nBalance, the toughest factor in high school.\n");
        printf("To tell you the truth, don't worry about it. there are only a few loose things you should follow:\n\n");
        printf("Tip 1: School is for school.\nIf you limit talking to your friends during school your grades will improve. Spend after-school and weekend time with your friends.\n");
        printf("Plus, better grades means your parents will let you go out more.\n\n");
        printf("Tip 2: Everything will work out.\nAs long as you want it to, everything will be okay, so try not to stress too hard about anything in particular.\n\n");
        printf("Tip 3: Don't break the rules.\nSometimes, something's not right or not fair, but breaking the rules is the worst way to fix that. whether these are school rules or your parents,");
        printf("\nDon't break the rules, instead, have a calm conversation with whoever is enforcing the rules, usually you will be accomodated for.");

        printf("\nWould you like to know more? (Y/N)\n");

        scanf(" %c", &knowMore);
    }

system("cls");//clears the screen
printf("\n");

if(knowMore == 'n' || knowMore == 'N')//goodbye message
{
printf("Alright, %s, you should be all set!, go out there and survive high school! don't loose your creativity while you're at it.\nI love you, be safe.\n\n", name);

}//goodbye message end
}//knowMore end
}//main end



