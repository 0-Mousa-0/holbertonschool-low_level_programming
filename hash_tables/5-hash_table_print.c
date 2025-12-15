#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned int i;
hash_node_t *node;
int flag = 1;

if (!ht)
return;

printf("{");


for (i = 0; i < ht->size ; i++)
{
node = ht->array[i];
while (node)
{

if (flag == 0)
printf(", ");

printf("'%s' : '%s'", node->key, node->value);
flag = 0;
node = node->next;
}
}

printf("}\n");
}

