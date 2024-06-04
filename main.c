// Author: stephen aranda
// file  : main.cpp
// date  : 5/30/2024
// desc  : entry point for bank management app
#include "hub.h"

// initialize the linked list account db with a head.
static Account *head = NULL;

int main()
{

    // call the hub menu
    hub();

    return 0;
}