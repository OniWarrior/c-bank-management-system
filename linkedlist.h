// Author: Stephen Aranda
// File  : linkedlist.h
// Description : This is a header file to define a linked list for
//             : the bank management app

#ifndef __LINKED_LIST__
#define __LINKED_LIST__
#include <stdio.h>
#include <stdlib.h>

// struct that defines a account node in linked list that
// simulates a persistent database for bank app
typedef struct Account
{
    char first_name[50];
    char last_name[50];
    char email[50];
    char username[20];
    char password[15];
    double balance;

    // pointer to next node
    struct Account *next;

} Account;

#endif
