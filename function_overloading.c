#include "stdio.h"
#include "lib/actions.h"

void MyTurnOnLights(void)
{
    printf("Turned on the lights bro\n");
}

int main(char argc, char **argv)
{
    /* Overloading TurnOnLights */
    actions.TurnOnLights = &MyTurnOnLights;
    actions.TurnOnLights();
    return 0;
}