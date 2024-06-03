// Author: stephen aranda
// file  : hub.c
// date  : 5/30/2024
// desc  : file for the menu hub

#ifndef __BANK_OPS__
#define __BANK_OPS__
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

// prototypes
void createAccount();
void accountLogin();
void deleteAccount();
void killApp();
void hub(Account *head);
void redirectToPage(int *selection);
void clearScreen();

// redirectToPage: Decides what page to redirect to based
// on user input.
void redirectToPage(int *selection)
{
    switch (*selection)
    {
    case 1:
        createAccount(head);
        break;
    case 2:
        accountLogin();
        break;
    case 3:
        deleteAccount();
        break;
    case 4:
        killApp();
        break;
    default:
        printf("Invalid input! Menu will now reload...\n");
        clearScreen();
        hub();
    }
}
// killApp: puts a goodbye message and quits app
void killApp()
{
    printf("Thank you for using the app!\n");
    printf("App will now end! Goodbye\n");
    getchar();
}

// TODO--complete this function later
void createAccount()
{
    clearScreen();
    // title for page
    printf("**********Create Account****************\n\n");

    // create an account struct
    Account *newAccount = (Account *)malloc(sizeof(Account));

    // label for first name
    printf("First Name: ");

    // allow input for first name
    if (scanf("%s", newAccount->first_name) != 1)
    {
        printf("Invalid input! Menu will now reload...\n");
        // clear input buffer
        while (getchar() != '\n')
            ;
        clearScreen();
        hub();
    }
    else
    {
        // clear input buffer
        while (getchar() != '\n')
            ;
    }

    // label for last name
    printf("Last Name: ");

    // allow input for last name
    if (scanf("%s", newAccount->last_name) != 1)
    {
        printf("Invalid input! Menu will now reload...\n");
        // clear input buffer
        while (getchar() != '\n')
            ;
        clearScreen();
        hub();
    }
    else
    {
        while (getchar() != '\n')
            ;
    }

    // label for email
    printf("Email: ");

    // Allow input for email
    if (scanf("%s", newAccount->email) != 1)
    {
        printf("Invalid input! Menu will now reload...\n");
        // clear input buffer
        while (getchar() != '\n')
            ;
        clearScreen();
        hub();
    }
    else
    {
        while (getchar() != '\n')
            ;
    }

    // label for username
    printf("Username: ");

    // allow input for username
    if (scanf("%s", newAccount->username) != 1)
    {
        printf("Invalid input! Menu will now reload...\n");
        // clear input buffer
        while (getchar() != '\n')
            ;
        clearScreen();
        hub();
    }
    else
    {
        while (getchar() != '\n')
            ;
    }

    // label for password
    printf("Password: ");

    // allow input for password
    if (scanf("%s", newAccount->password) != 1)
    {
        printf("Invalid input! Menu will now reload...\n");
        // clear input buffer
        while (getchar() != '\n')
            ;
        clearScreen();
        hub(head);
    }
    else
    {
        while (getchar() != '\n')
            ;
    }

    // label for initial balance
    printf("Initial Balance: ");

    // allow input for initial balance
    if (scanf("%lf", &newAccount->balance) != 1)
    {
        printf("Invalid input! Menu will now reload...\n");
        // clear input buffer
        while (getchar() != '\n')
            ;
        clearScreen();
        hub();
    }
    else
    {
        while (getchar() != '\n')
            ;
    }

    // place account into db
    newAccount->next = head;
    head = newAccount;

    printf("Account created successfully!\n");
    printf("Press enter to redirect back to home...");
    getchar();
    clearScreen();
    hub();
}

// TODO--complete this function later
void accountLogin()
{
}

// TODO--complete this function later
void deleteAccount()
{
}

// Hub: Console landing page before user login or account creation.
void hub()
{

    printf("****************Welcome to Bank Management App****************\n");

    // hold selection value
    int input = 0;

    // menu selection screen
    printf("1. Create New Account\n");
    printf("2. Login To Account\n");
    printf("3. Delete Account\n");
    printf("4. Quit App\n");

    // get user input
    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input! Menu will now reload...\n");
        // clear input buffer
        while (getchar() != '\n')
            ;
        // re-run hub
        hub();
    }

    // decide where to redirect to based on input
    redirectToPage(&input);
}

// clearScreen: this function clears the screen.
void clearScreen()
{
    int clear = system("cls");
    if (clear == -1)
    {
        printf("Error: Unable to clear screen");
    }
}

#endif