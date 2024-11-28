#ifndef ACTIONS_H
#define ACTIONS_H
/* Set of basic action functions organized in a struct */

typedef struct Actions {
    void (*TurnOnLights)(void);
    void (*TurnOffLights)(void);
    void (*LockDoor)(void);
    void (*UnlockDoor)(void);
} Actions;

extern Actions actions;

#endif /* ACTIONS_H */