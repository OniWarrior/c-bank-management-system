// Author: stephen aranda
// file  : hub.c
// date  : 5/30/2024
// desc  : file for the menu hub

#ifndef __BANK_OPS__
#define __BANK_OPS__
#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void hub()
{
    // hold selection value
    int input = 0;

    // menu selection screen
    printf_s("1. Create New Account\n");
    printf_s("2. Login To Account\n");
    printf_s("3. Delete Account\n");
    printf_s("4. Quit App\n");
}

#endif