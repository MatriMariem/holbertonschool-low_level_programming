#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
            hash_table_set(ht, "hetairas", "maybe");
        printf("malla jaw\n");
        hash_table_set(ht, "mentioner", "not");
        printf("jmayliya chbihom?\n");
        printf("Jmayliya 3tacha.\n");
        printf("tawa tit3ada");
        hash_table_set(ht, "stylist", "not me");
        printf("tawa tit3ada martin petrov.");
        hash_table_set(ht, "stylist", "probably you!");
        hash_table_set(ht, "heliotropes", "sick");
        hash_table_set(ht, "neurospora", "fuck");
    return (EXIT_SUCCESS);
}
