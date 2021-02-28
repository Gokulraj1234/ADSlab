#include<stdio.h>
#include<stdlib.h>
struct node
{
struct setObject *top;
int data;
struct node *next;
};
struct edge
{
int start;
int weight;
int end;
};
struct node *nodelist