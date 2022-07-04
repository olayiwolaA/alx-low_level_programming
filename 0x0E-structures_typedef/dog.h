#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - Dog's basic bio.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: dog's owner
 *
 * Description: Fun time with my poppy dog.
 */
struct dog
{

	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

