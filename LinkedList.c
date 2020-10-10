#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int x;
struct node *link;
};
int nodenum(struct node *h)
{
struct node *t;
if(h==NULL)
{
return 0;
}
else
{
return (1+nodenum(h->link));
}
}
struct node *insrev(struct node *h,int y)
{
struct node *n;
n=(struct node*)malloc(sizeof(struct node));
n->x=y;
if(h==NULL)
{
h=n;
n->link=NULL;
}
else
{
n->link=h;
h=n;
}
return h;
}

struct node *insert1(struct node *h)
{
int a;
struct node *n;
n=(struct node*)malloc(sizeof(struct node));
printf("\n enter the value:");
scanf("%d", &a);

n->x=a;
if(h==NULL)
{
h=n;
n->link=NULL;
}
else
{
n->link=h;
h=n;
}
return h;
}
struct node *insert2(struct node *h)
{
int a;
struct node *n,*t;
n=(struct node*)malloc(sizeof(struct node));
printf("\n enter the value:");
scanf("%d", &a);

n->x=a;
t=h;
if(h==NULL)
{
h=n;
n->link=NULL;
}
else
{
while(t->link!=NULL)
{
t=t->link;
}
t->link=n;
n->link=NULL;
}
return h;
}
struct node *insert3(struct node *h)
{
int count=0,i,j,a;
struct node *n,*t;
n=(struct node*)malloc(sizeof(struct node));
count=nodenum(h);
printf("\nAt which position do u want to enter:");
scanf("%d",&i);

if(i-1>count)
{
printf("\n list is having less element");
printf("\n------------------------------------");
}
else
{
t=h;
if(i==1)
{
h=insert1(h);
}
else if(i==(count+1))
{
h=insert2(h);
}
else
{
printf("\nenter the value:");
scanf("%d",&a);
n->x=a;
for(j=0;j<(i-2);j++)
{
t=t->link;
}
n->link=t->link;
t->link=n;
}
}
return h;
}
struct node *insert4(struct node *h)
{
int i,j;
struct node *t,*n;
n=(struct node*)malloc(sizeof(struct node));
printf("\nenter the value of the node after which u want to enter new node:");
scanf("%d",&i);

t=h;
if(t==NULL)
{
printf("there is no node");
printf("\n------------------------------------");
}
else
{
while(((t->link)!=NULL)&&((t->x)!=i))
{
t=t->link;
}
if(t->x==i)
{
n->link=t->link;
t->link=n;
printf("\nenter the value of node");
scanf("%d",&j);

n->x=j;
}
else
{
printf("that values node is not present");
printf("\n------------------------------------");
}
}
return h;
}
struct node *insert(struct node *h)
{int i;
do
{

printf("\n1 for beginning\n2 for at end\n3 for at position\n4after a node");
printf("\n------------------------------------");
printf("\nenter choice:");
scanf("%d",&i);
printf("\n------------------------------------");
if(i==1)
{
h=insert1(h);
}
else if(i==2)
{
h=insert2(h);
}
else if(i==3)
{
h=insert3(h);
}
else if(i==4)
{
h=insert4(h);
}
else
{
printf("enter valid chocice");
printf("\n------------------------------------");
}
}while(i<1&&i>4);
return h;
}
void reverse(struct node *h)
{

struct node *t;
t=h;
if(t->link==NULL)
{
printf("%d",t->x);
return ;
}
else
{
reverse(t->link);
printf("->");
printf("%d",t->x);
}

}
void display(struct node *h)
{
int i;
struct node *t;
t=h;
do
{
printf("\n1 for as it is\n2 for reverse\n3 for both");
printf("\n------------------------------------");
printf("\nenter chocie:");
scanf("%d",&i);

if(h==NULL)
{
printf("head->null");
return;
}
if(i==1)
{
printf("head->");
while(t!=NULL)
{
printf("%d",t->x);
printf("->");
t=t->link;
}
printf("null");
}
else if(i==2)
{
printf("head->");
reverse(h);
printf("->null");
}
else if(i==3)
{
printf("head->");
while(t!=NULL)
{
printf("%d",t->x);
printf("->");
t=t->link;
}
printf("null");
printf("\n");
printf("head->");
reverse(h);
printf("->null");
}
else
{
printf("\n enter valid chocie");
printf("\n------------------------------------");
}
}while(i!=1&&i!=2&&i!=3);
}

struct node *delete3(struct node *h)
{
int i;
struct node *t,*temp;
printf("\n enter the value of a node which u want to delete:");
scanf("%d",&i);
printf("------------------------------------");
t=h;
if(h->x==i)
{
t=h->link;
free(h);
h=t;
}
else
{
while((((t->link)->x)!=i)&&(t->link)!=NULL)
{
t=t->link;
}
if((t->link)->x==i)
{
temp=t->link->link;
free(t->link);
t->link=temp;
}
else
{
printf("\n element not found");
printf("\n------------------------------------");
}
}
return h;
}
struct node *delete4(struct node *h)
{
int i,j;
struct node *t,*temp;
printf("\n which num node u want to delete");
scanf("%d",&i);

j=nodenum(h);
if(i==1)
{
t=h->link;
free(h);
h=t;
}
else if(i<=j&&i>0)
{
t=h;
for(j=0;j<i-2;j++)
{
t=t->link;
}
temp=t->link->link;
free(t->link);
t->link=temp;
}
else
{
printf("\n we dont have that much node");
printf("\n------------------------------------");
}
return h;
}
struct node *deleteall(struct node *h)
{
struct node *t;
t=h;
if(h==NULL)
{
t=h;
}
else if(h->link==NULL)
{
free(h);
t=NULL;
}
else
{
t=h->link;
free(h);
t=deleteall(t);
}
return t;
}
struct node *delete(struct node *h)
{
int i,j;
struct node *t;
if(h==NULL)
{
printf("\n LIST IS EMPTY ");
printf("\n------------------------------------");
return h;
}
do
{
printf("\n1 for begining \n2 for at end \n3 for by a value \n4 for a node by number\n5 for delete all");
printf("\n------------------------------------");
printf("\nenter chocie:");
scanf("%d",&j);

if(j==1)
{ t=h->link;
free(h);
h=t;
}
else if(j==2)
{
t=h;
while(((t->link)->link)!=NULL)
{
t=t->link;
}
free(t->link);
t->link=NULL;
}

else if(j==3)
{
h=delete3(h);
}
else if(j==4)
{
h=delete4(h);
}
else if(j==5)
{
h=deleteall(h);
}
else
{
printf("\ninvalid choice");
printf("\n------------------------------------");
}
}while(j<1&&j>4);
return h;
}

void disp(struct node *h)
{
struct node *t;
t=h;
if(h==NULL)
{
printf("head->null");
return;
}
else
{
printf("head->");
while(t!=NULL)
{
printf("%d",t->x);
printf("->");
t=t->link;
}
printf("null");
}
}
struct node *reverselist(struct node *h)
{
struct node *t,*temp;
t=h;
temp=NULL;
while(t!=NULL)
{
temp=insrev(temp,t->x);
t=t->link;
}
h=deleteall(h);
h=temp;
return h;
}
struct node *ins1(struct node *h)
{
int i;
printf("\nenter the value u want to enter:");
scanf("%d",&i);
h->x=i;
return h;
}
struct node *ins2(struct node *h)
{
int i;
struct node *t;
t=h;
while(t->link!=NULL)
{
t=t->link;
}
printf("\nenter the value u want to enter:");
scanf("%d",&i);
t->x=i;
return h;
}
struct node *ins3(struct node *h)
{
int i,j,c;
struct node *t,*temp;
printf("\n which num node u want to change");
scanf("%d",&i);
printf("------------------------------------");
j=nodenum(h);
if(i==1)
{
h=ins1(h);
}
else if(i<=j&&i>0)
{
t=h;
for(j=0;j<i-1;j++)
{
t=t->link;
}
printf("\nenter the value u want to put:");
scanf("%d",&c);
printf("------------------------------------");
t->x=c;
}
else
{
printf("\n we dont have that much node");
printf("\n------------------------------------");
}
return h;
}
struct node *ins4(struct node *h)
{
int i,a;
struct node *t,*temp;
printf("\n enter the value of a node which u want to delete:");
scanf("%d",&i);
printf("------------------------------------");
t=h;
if(h->x==i)
{
h=ins1(h);
}
else
{
while((((t->link)->x)!=i)&&(t->link)!=NULL)
{
t=t->link;
}
if((t->link)->x==i)
{
printf("\nenter the value u want to put:");
scanf("%d",&a);
printf("------------------------------------");
t->link->x=a;
}
else
{
printf("\n element not found");
printf("\n------------------------------------");
}
}
return h;
}
struct node *replace(struct node *h)
{
int i,j;
printf("\n1 at beginning\n2 at end\n3 for node by num\n4 for node by value");
printf("\n------------------------------------");
printf("\nenter choice:");
scanf("%d",&i);
printf("------------------------------------");
if(i==1)
{
h=ins1(h);
}
else if(i==2)
{
h=ins2(h);
}
else if(i==3)
{
h=ins3(h);
}
else if(i==4)
{
h=ins4(h);
}
else
{
printf("\nenter valid choice");
}
return h;
}
void main()
{
int i,j;
struct node* head;
clrscr();
head=NULL;
while(1)
{
printf("\n------------------------------------");
printf("\nYOUR LIST:");
disp(head);
printf("\n------------------------------------");
printf("\n1 for insert\n2 for delete\n3 for display\n4 for exit\n0 for other");
printf("\n------------------------------------");
printf("\n enter choice:");
scanf("%d",&i);
printf("------------------------------------");
if(i==1)
{
head=insert(head);
}
else if(i==3)
{
display(head);
}
else if(i==2)
{
head=delete(head);
}
else if(i==0)
{
while(243)
{
printf("\n------------------------------------");
printf("\nYOUR LIST:");
disp(head);
printf("\n------------------------------------");
printf("\n5 for reverse list\n6 for replace the value\n7 for back\n 8 for exit");
printf("\n------------------------------------");
printf("\nenter chocie:");
scanf("%d",&j);
if(j==5)
{
if(head==NULL)
{
printf("\nlist is empty");
printf("\n------------------------------------");
}
else
{
head=reverselist(head);
}
}
else if(j==6)
{
if(head==NULL)
{
printf("\nlist is empty");
printf("------------------------------------");
}
else
{
head=replace(head);
}
}
else if(j==7)
{
break;
}
else if(j==8)
{
break;
}
}
if(j==8)
{
printf("\nthanks for using this");
printf("------------------------------------");
break;
}
}
else if(i==4)
{
printf("\n------------------------------------");
printf("\n thanks for using this");
printf("\n------------------------------------");
break;
}
else
{
printf("\n------------------------------------");
printf("\n enter valid choice");
printf("\n------------------------------------");
}
}
}
