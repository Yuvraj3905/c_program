#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    time_t currentTime;
    time(& currentTime);
    printf("%s",ctime(&currentTime));
}