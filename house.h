#ifndef HOUSE_H
#define HOUSE_H
#include <stdbool.h>


typedef struct House_t {
    bool lights;
    bool door_lock;
    void (*Print)(struct House_t *);
} House_t;

extern House_t house;

#endif /* HOUSE_H */