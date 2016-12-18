/*
Write a function called insertEntry to insert a new entry into a linked list. 
Have the procedure take as arguments a pointer to the list entry to be inserted 
(of type struct entry as defined in this chapter), 
and a pointer to an element in the list after which the new entry is to be inserted.
*/

//Progress: not completed, still need to figure out insertEntry function

#include <stdio.h>

struct entry
{
    int           value;
    struct entry *next;
};

void insertEntry ( struct entry *insert, struct entry *after_insert )
{
    struct entry temp;
    struct entry *before_insert = --after_insert;

    //Find list entry that points to after_insert

    while ( temp.next != (struct entry *) 0 )
        if ( temp.next == &after_insert ) {
            //Perform insertion based on found entry
            temp.next = before_insert->next;
            before_insert->next = &temp;
        }
        else {
            temp = temp.next;
        }


}

int main (void)
{
    void insertEntry ( struct entry *insert, struct entry *after_insert );

    struct entry n1, n2, n3, na;
    struct entry *list_pointer = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;   //Mark list end with null terminator

    na.value = 400;
    na.next = 0;

    insertEntry( &na, &n3 );

    while ( list_pointer != (struct entry *) 0 )
        printf( "%i\n", list_pointer->value );
        list_pointer = list_pointer->next;

    return 0;
}
