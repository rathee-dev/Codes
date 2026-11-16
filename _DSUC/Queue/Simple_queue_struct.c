#include<stdio.h>
#define size 10
struct QUEUE{
    int front;
    int rear;
    int items[size];
};
typedef struct QUEUE Queue;
void initialize(Queue *q){
    q->front=-1;
    q->rear=-1;
}