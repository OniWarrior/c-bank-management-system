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
void hub();
void redirectToPage(int *selection);

// Hub: Console landing page before user login or account creation.
void hub()
{
    printf_s("************Welcome to Bank Management App***********************\n\n");

    // hold selection value
    int input = 0;

    // menu selection screen
    printf_s("1. Create New Account\n");
    printf_s("2. Login To Account\n");
    printf_s("3. Delete Account\n");
    printf_s("4. Quit App\n");

    // get user input
    scanf_s("%d", input);

    // decide where to redirect to based on input
    redirectToPage(&input);
}

// redirectToPage: Decides what page to redirect to based
// on user input.
void redirectToPage(int *selection)
{
    switch (*selection)
    {
    case 1:
        createAccount();
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
        printf_s("Invalid input! Menu will now reload...");
        hub();
    }
}

// killApp: puts a goodbye message and quits app
void killApp()
{
    printf_s("Thank you for using the app!\n");
    printf_s("App will now end! Goodbye\n");
    getchar();
}

// TODO--complete this function later
void createAccount()
{
}

// TODO--complete this function later
void accountLogin()
{
}

// TODO--complete this function later
void deleteAccount()
{
}

#endif