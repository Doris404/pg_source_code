# This is the README 

## Description

*Cat with 9 lifes* is a game in which the player needs to raise a cat. The cat has 9 lifes, so is ok if the player do something wrong and make the cat lose a life. However, the player should keep this in mind: the cat has only 9 life, so the player should take good care of this cat.

## How to play this game

The environment of this game is a linux with g++ compiler. It has been tested work well on macos Big Sur 11.2.2. If you want to play this game on a linux, however, you may loss the function of play with the cat. Build the game with the code follows:
```
g++ main.cpp
```
It will automatically build up the game, and you will get a game with name a.out. You can start your game with the command:
```
./a.out 
```
When the game start, you will see the message:
```A new cat!```
Then you can start your game.

The player has 4 action to do with the cat:
- feed the cat with the input ```ctrl + \```
- deal with the cat's waste with the input ```ctrl + z```
- play with the cat with the input ```ctrl + t```
- kill the cat (Not recommended) with the input ```ctrl + c```

Basiclly, the game has a rule you should obey. And these rules are make up based on the experience of raising a cat in the real world. The game is easier than the real world, however.

Some tricks in playing this game can be summaried as follow:
- Do Play with your cat often: if you do not play with the cat, the cat will be sad, and lose one of its life.
- Do not forget to deal with the waste: if you do not deal with the waste, the cat will get sick, and lose one of its life.

The rules is listed as follows, now I only add 2 of them (maybe I will set more of them in the future, expect the update of the game ~)

## Some help
You can try the game with the input 1. In this file you can find the example of play this game.

In this folder you can find the file listes as follows:
- main.cpp
- a.out
- input 1
- this file: README.md
- g++ main.cpp.txt
- play the input 1.txt
- input 2
- play the input 2.txt

### main.cpp
*main.cpp* contains the source code of this game, which define the realization of the functions mentioned before such as feed the cat and so on. You will find some notes about those codes in the main.cpp file.

### a.out
*a.out* is the output of main.cpp after compiling. You can play the game typing ``` ./a.out```.

### input 1
*input 1* is the example of playing you can try at first. 

### g++ main.cpp.txt
*g++ main.cpp.txt* shows you the output of ```g++ main.cpp``` if nothing wrong.
```
Last login: Sun Mar 21 10:58:13 on ttys006
(base) xiaotong@localhost PG九命猫 % g++ main.cpp
(base) xiaotong@localhost PG九命猫 % 
```
### play the input 1.txt
*play the input 1.txt* contains the output of the game if you input the game with input 1.
```
Last login: Sun Mar 21 11:01:38 on ttys007
(base) xiaotong@localhost PG九命猫 % ./a.out
A new cat!
^\The cat eat the food
^\The cat eat the food
^\The cat eat the food
^\The cat eat the food
the cat get sick because you don't deal with her waste
The cat is sad
load: 1.58  cmd: a.out 17594 running 6.86u 5.28s
the cat is happy
load: 1.53  cmd: a.out 17594 running 8.57u 6.60s
the cat is happy
load: 1.53  cmd: a.out 17594 running 8.78u 6.76s
the cat is happy
^Zyou deal with the cat's waste
load: 1.49  cmd: a.out 17594 running 10.72u 8.25s
the cat is happy
load: 1.49  cmd: a.out 17594 running 10.88u 8.38s
the cat is happy
load: 1.49  cmd: a.out 17594 running 11.07u 8.52s
the cat is happy
load: 1.49  cmd: a.out 17594 running 11.24u 8.66s
the cat is happy
^\The cat eat the food
^\The cat eat the food
^\The cat eat the food
^\The cat eat the food
the cat get sick because you don't deal with her waste
The cat is sad
load: 1.53  cmd: a.out 17594 running 14.32u 11.02s
the cat is happy
^Ckill the cat
^Ckill the cat
^Ckill the cat
^Ckill the cat
^Ckill the cat
^Ckill the cat
The cat die! kill_cnt = 10
(base) xiaotong@localhost PG九命猫 % 
```
### play the input 2.txt
```
localhost:九命猫 xiaotong$ ./a.out 
A new cat!
load: 2.10  cmd: a.out 29650 running 2.70u 2.07s
the cat is happy
^\The cat eat the food
^\The cat eat the food
^\The cat eat the food
^Zyou deal with the cat's waste
load: 2.09  cmd: a.out 29650 running 7.15u 5.47s
the cat is happy
^\The cat eat the food
^\The cat eat the food
^\The cat eat the food
^Zyou deal with the cat's waste
load: 2.07  cmd: a.out 29650 running 11.75u 8.98s
the cat is happy
^\The cat eat the food
^\The cat eat the food
^\The cat eat the food
^Zyou deal with the cat's waste
```