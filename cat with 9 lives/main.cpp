#include <stdio.h>
#include <signal.h>
#include <cstdlib>
typedef void(*signal_handler)(int);

/* global variables
    The global variables below count the number of some special and important events, such as:
        kill_cnt: how many times the cat is killed
        all_cnt: how many times you react with the cat
        info_cnt: how many times you play with the cat in a iteration
        feed_cnt: how many times you feed the cat
        waste_cnt: how many times you deal with the cat's waste
 */ 
int kill_cnt = 0;
int all_cnt = 1;
int info_cnt = 0;
int feed_cnt = 0;
int waste_cnt = 0;

/* some handlers' statements
    the four handlers below handler 4 different kinds of siganls:
        kill_cat: when you type ctrl + c
        info_cat: when you type ctrl + t
        feed cat: when you type ctrl + \
        deal with cat's waste: when you type ctrl + z
*/
void kill_cat(int signum);
void info_cat(int signum);
void feed_cat(int signum);
void cat_waste(int signum);

int main(int argc, char *argv[]) {
    printf("A new cat!\n");
    while(1) {
        // every 5 times you react with the cat, you should at least play with the cat once
        // or else the cat will be sad and lose one of its life
        if (all_cnt % 5 == 0 && info_cnt == 0) { 
            printf("The cat is sad\n");
            all_cnt += 1;
            kill_cnt += 1;
        }
        if (all_cnt % 5 == 0 && info_cnt != 0) {
            info_cnt = 0;
            all_cnt += 1;
        }
        signal(SIGINT, kill_cat); fflush(stdout);
        signal(SIGINFO, info_cat); fflush(stdout);
        signal(SIGQUIT, feed_cat); fflush(stdout);
        signal(SIGTSTP, cat_waste); fflush(stdout);
        // if the cat is killed 10 times the cat will die
        if(kill_cnt == 10) {
            break;
        }
        // if the cat is feed more than 3 times without dealing with waste, the cat will get sick and lose one of its life.
        if(feed_cnt > 3) {
            printf("the cat get sick because you don't deal with her waste\n");
            feed_cnt -= 1;
            kill_cnt += 1;
        }
    }
    printf("The cat die! kill_cnt = %d\n",kill_cnt);
    return 0;
}

/* some handlers' defination
    kill_cat: when you type ctrl + c you kill the cat, and the kll_cnt will add 1
    info_cat: when you type ctrl + t you play with the cat, the info_cnt will add 1
    feed_cat: when you type ctrl + \ you feed the cat, and the feed_cnt will add 1
    cat_waste: when you type ctrl + z you deal with cat's waste, the cat_waste will add 1. At the same time, the feed_cnt will subtract with a mimimus of 0.
*/
void kill_cat(int signum) {
    printf("kill the cat\n");
    kill_cnt += 1;
    all_cnt += 1;
}
void info_cat(int signum) {
    printf("the cat is happy\n");
    info_cnt += 1;
    all_cnt += 1;
}
void feed_cat(int signum) {
    printf("The cat eat the food\n");
    feed_cnt += 1;
    all_cnt += 1;
}
void cat_waste(int signum) {
    printf("you deal with the cat's waste\n");
    feed_cnt -= 3;
    if (feed_cnt < 0) {
        feed_cnt = 0;
    }
    all_cnt += 1;
}