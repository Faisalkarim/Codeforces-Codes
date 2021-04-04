#include <stdio.h>
#include <stdlib.h>

	typedef struct mylist{

	int data;
	struct mylist *next;

	}node;



	void push(node *s, int data)
	{
		while(s->next != NULL)
		{
			s = s->next;
		}
		s->next = (node*) malloc(sizeof(node));
		s->next->data = data;
		s->next->next = NULL;
	}
		void display(node *s)
	{
		while(s->next != NULL)
		{
			printf("%d ", s->next->data);
			s = s->next;
		}
		printf("\n");
	}
void pop(node *s)
	{
		while(s->next != NULL)
		{
		    if(s->next->next == NULL)
            {
                s->next = NULL;
                break;
            }
			s = s->next;
		}


	}
	void main()
	{
	    int y,e;
		node *first = (node*) malloc(sizeof(node));
		first->next = NULL;

        while(1){
                printf("1.POP\n2.PUSH\n3.EXIT\n");
                printf("Enter u'r choise: ");
                scanf("%d",&e);
            if(e==1){
                pop(first);
                display(first);
            }
            else if(e==2){
                    scanf("%d",&y);
                push(first,y);
                display(first);
            }
            else if(e==3){
                break;
            }
        }







	}

