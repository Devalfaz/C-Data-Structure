#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *next;
};
struct node *start, *q;
int main()
{
    int ch, menu();
    void insert();
    void delete_beg();
    void delete_end();
    void delete_pos();
    void display();
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete_beg();
            break;
        case 3:
            delete_end();
            break;
        case 4:
            delete_pos();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("\nExiting\n");
            exit(0);
            break;
        default:
            printf("\nWrong choice\n");
        }
    } while (ch != 6);
}

void insert()
{
    int num;
    struct node *t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter data:\n");
        scanf("%d", &num);
        if (start == NULL)
        {
            t->num = num;
            t->next = NULL;
            start = t;
        }
        else
        {
            t->num = num;
            t->next = start;
            start = t;
        }
        printf("Item pushed");
    }
}
void delete_beg()
{
    if (start == NULL)
        printf("\n The list is empty");
    else
    {
        q = start;
        start = start->next;
        printf(" the deleted element is %d", q->num);
        free(q);
    }
}
void delete_end()
{
    struct node *t;
    if (start == NULL)
    {
        printf("\n The list is empty");
    }
    else
    {
        q = start;
        t = start;
        while (q->next != NULL)
        {
            t = q;
            q = q->next;
        }
        if (q == start)
        {
            printf("\nDeleting only node of list\n");
            free(start);
        }
        else
        {
            t->next = NULL;
        }
    }
    printf(" the deleted element is %d", q->num);
    free(q);
}

void delete_pos()
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    int pos, i;
    if (start == NULL)
        printf("\n The list is empty");
    printf("Enter position to delete:");
    scanf("%d", &pos);
    q = start;
    for (i = 0; i < pos - 1; i++)
    {
        if (q->next == NULL)
            printf("There are less elements");
        q = q->next;
    }
    t = q->next;
    q->next = t->next;
    printf(" the deleted element is %d", t->num);
    free(t);
}

void display()
{
    if (start == NULL)
        printf("\n The list is empty");
    else
    {
        q = start;
        printf("The linked list is:\n");
        while (q != NULL)
        {
            printf("%d\n", q->num);
            q = q->next;
        }
    }
}
int menu()
{
    int ch;
    printf("\n1.Insert\n2.Delete from beginning\n3.Delete from end\n4.Delete\n5.Display\n6.Exit\n");
    printf("Enter your choice:");
    scanf("%d", &ch);

    return ch;
}