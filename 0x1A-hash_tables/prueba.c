/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

hash_node_t *add_node(hash_node_t **head, char *key, char *value)
{
        hash_node_t *new_node = (hash_node_t *) malloc (sizeof(hash_node_t));
        hash_node_t *aux = (*head);
        if(*head == NULL)
        {
                new_node->key = strdup(key);
                new_node->value = strdup(value);
                new_node->next = NULL;
                (*head) = new_node;
                return (*head);
        }
        else if (*head != NULL)
        {
                while(aux != NULL)
                {
                        if(strcmp(aux->key, key) == 0)
                        {
                                free(aux->value);
                                aux->value = strdup(value);
                                free(new_node);
                                return(*head);
                        }
                        aux = aux->next;
                }
        }
        (void)aux;
        return (*head);
}
