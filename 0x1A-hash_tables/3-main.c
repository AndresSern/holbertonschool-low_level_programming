#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "hash_tables.h"
int main(void)
{
        hash_table_t *ht;
        unsigned long int i = 0;
        unsigned int j = 0;
        hash_node_t *ptr = NULL;

        ht = hash_table_create(1024);
        hash_table_set(ht, "betty", "");
        hash_table_set(ht, "hetairas", "hetairas");
        hash_table_set(ht, "mentioner", "mentioner");
        hash_table_set(ht, "heliotropes", "heliotropes");
        hash_table_set(ht, "neurospora", "neurospora");
        hash_table_set(ht, "depravement", "depravement");
        hash_table_set(ht, "serafins", "serafins");
        hash_table_set(ht, "stylist", "stylist");
        hash_table_set(ht, "subgenera", "subgenera");
        hash_table_set(ht, "joyful", "joyful");
        hash_table_set(ht, "synaphea", "synaphea");
        hash_table_set(ht, "redescribed", "redescribed");
        hash_table_set(ht, "urites", "urites");
        hash_table_set(ht, "dram", "dram");
        hash_table_set(ht, "vivency", "vivency");
        hash_table_set(ht, "betty", "hola");
        hash_table_set(ht, "betty", "4");/*Este deberia ser el valor que quede en el key*/
        hash_table_set(ht, "Lopez", "Diego");
        printf("size: %lu\n", ht->size);

        /* Modification to print created node. */
        for (i = 0; i < ht->size; i++)
                if(ht->array[i])
                {
                        j = 0;
                        printf("index[%lu:%d] key->%s value->%s\n", i, j,
                               ht->array[i]->key, ht->array[i]->value);

                        ptr = ht->array[i];
                        while(ptr->next)
                        {
                                ptr = ptr->next;
                                j++;
                                printf("index[%lu:%d] key->%s value->%s\n", i, j, ptr->key, ptr->value);
                        }
                }
        return (EXIT_SUCCESS);
}
