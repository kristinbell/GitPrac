#include "node.h"

//list.cpp written by Karla Fant to hold
//all of the definitions of functions that will
//be working on a linear linked list

void display(node * head)
{
     node * current  = head;
     while (current)  //while current != NULL
     {
           cout << current->amovie.title <<'\t'
                << current->amovie.category <<'\t'
                << current->amovie.length <<endl;
           current = current->next;
     }
}

void display2(node * head)
{
     
     while (head)  //while current != NULL
     {
           cout << head->amovie.title <<'\t'
                << head->amovie.category <<'\t'
                << head->amovie.length <<endl;
          head = head->next;
     }
}
