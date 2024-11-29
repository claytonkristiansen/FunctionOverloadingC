#ifndef ACTIONS_H
#define ACTIONS_H
/* Set of basic action functions organized in a struct */

typedef struct {
    void (*TurnOnLights)(void);
    void (*TurnOffLights)(void);
    void (*LockDoor)(void);
    void (*UnlockDoor)(void);
} Actions_t;

extern Actions_t actions;

#endif /* ACTIONS_H */