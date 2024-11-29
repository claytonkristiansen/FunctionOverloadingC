#include "house.h"
#include "stdio.h"

void Print(House_t *self)
{
    printf("Lights:     %i\n", self->lights);
    printf("Door Lock:  %i\n", self->door_lock);
}

House_t house = {
    .lights = false,
    .door_lock = false,
    .Print = &Print,
};