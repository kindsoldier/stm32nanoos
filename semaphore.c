/*
 * Copyright 2022 Oleg Borodin  <borodin@unix7.org>
 */

#include "semaphore.h"
#include "semoper.h"

void sem_init(sem_t* sem, int32_t value) {
    sem->value = value;
}

int32_t sem_wait(sem_t* sem) {
    //while(sem->value > 0);
    //sem->value--;
    return sem_wait32(&(sem->value), (int32_t)1);
}

int32_t sem_post(sem_t* sem) {
    //sem->value++;
    return sem_post32(&(sem->value), (int32_t)1);
}
