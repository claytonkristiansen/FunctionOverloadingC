#include "stdio.h"
#include "lib/actions.h"
#include "house.h"

void MyTurnOnLights(void)
{
    house.lights = true;
}

void MyTurnOffLights(void)
{
    house.lights = false;
}

void MyLockDoor(void)
{
    house.door_lock = true;
}

void MyUnlockDoor(void)
{
    house.door_lock = false;
}

int main(char argc, char **argv)
{
    /* Overloading TurnOnLights */
    actions.TurnOnLights = &MyTurnOnLights;
    actions.TurnOffLights = &MyTurnOffLights;
    actions.LockDoor = &MyLockDoor;
    actions.UnlockDoor = &MyUnlockDoor;
    actions.TurnOnLights();
    actions.LockDoor();
    house.Print(&house);
    return 0;
}