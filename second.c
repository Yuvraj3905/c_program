#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    time_t seconds;
    time(& seconds);
    printf("%22d",seconds);
}