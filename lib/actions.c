#include "actions.h"
#include "stdio.h"

void TurnOnLights(void)
{
    printf("Turned on the lights\n");
}

void TurnOffLights(void)
{
    printf("Turned off the lights\n");
}

void LockDoor(void)
{
    printf("Locked door");
}

void UnlockDoor(void)
{
    printf("Unlocked door");
}

Actions_t actions = {
    .TurnOnLights = &TurnOnLights,
    .TurnOffLights = &TurnOffLights,
    .LockDoor = &LockDoor,
    .UnlockDoor = &UnlockDoor,
};