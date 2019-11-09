#pragma once
#include <stdint.h>

struct critter
{
    char id;
    uint64_t gene;
    float fitness;
    char sequenced_gene[16];
};

struct critter * new_critter();
struct critter * crossover();

void print_critter(struct critter*);

char * process_gene(uint64_t);

float sum_gene(char *);
