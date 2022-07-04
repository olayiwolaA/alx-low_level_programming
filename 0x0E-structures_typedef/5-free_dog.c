#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_dog -cfrees dogs
  * @d: ponter to the struct of dog
  * Return: a void pointer
  */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

