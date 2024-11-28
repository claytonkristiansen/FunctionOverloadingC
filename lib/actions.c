#include "actions.h"
#include "stdio.h"

void TurnOnLights(void)
{
    printf("Turned on the lights\n");
}

Actions actions = {
    .TurnOnLights = &TurnOnLights
};