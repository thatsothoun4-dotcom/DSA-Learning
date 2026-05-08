#include<iostream>
using namespace std; 
struct node {

     int value ; 
     struct node *next ; 
} ; 
void create_list() {
    struct node *first , *sec  , *third = NULL ;
    first = (struct node *)malloc(sizeof(struct node )) ; 
    sec = (struct node *)malloc(sizeof(struct node )) ; 
    third= (struct node *)malloc(sizeof(struct node )) ; 
    first -> value = 10 ; 
    first -> next = sec ; 
    sec -> value = 20 ; 
    sec -> next = third ; 
    third ->value = 30 ; 
    third -> next = NULL ; 

    cout << first->value << "-"<<sec-> value<<"-"<<third->value<<endl   ; 


}
int main() {
    create_list() ; 

    return 0 ; 

}