//WAP to implement a Circular Linked Lists
#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * np;
}*sn;
 

void Cl(int n);
void display();

int main()
{
    int n;
    sn = NULL;
    printf("Aryan Sharma\n");
printf("\n\n Circular Linked List : \n");
printf("\n\n");  

    printf(" Enter the number of nodes : ");
    scanf("%d", &n);
 
    Cl(n);
    display();
    return 0;
}
void Cl(int n)
{
    int i, num;
    struct node *pp, *nn;

    if(n >= 1)
    {
        sn = (struct node *)malloc(sizeof(struct node));

        printf(" Enter data for node 1 : ");
        scanf("%d", &num);
        sn->num = num;
        sn->np = NULL;
        pp = sn;
        for(i=2; i<=n; i++)
        {
            nn = (struct node *)malloc(sizeof(struct node));
            printf(" Enter data for node %d : ", i);
            scanf("%d", &num);
            nn->num = num;
            nn->np = NULL;
            pp->np = nn;
            pp = nn;  
        }
        pp->np = sn;
    }
}
void display()
{
    struct node *tmp;
    int n = 1;

    if(sn == NULL)
    {
        printf(" No data found");
    }
    else
    {
        tmp = sn;
        printf("\n\n Data entered in the list are :\n");

        do {
            printf(" Data %d = %d\n", n, tmp->num);

            tmp = tmp->np;
            n++;
        }while(tmp != sn);
    }
}