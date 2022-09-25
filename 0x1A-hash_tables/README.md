# 0x1A. C - Hash tables
## :open_book: Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
 * What is a hash function
 * What makes a good hash function
 * What is a hash table, how do they work and how to use them
 * What is a collision and what are the main ways of dealing with collisions in the context of a hash table
 * What are the advantages and drawbacks of using hash tables
 * What are the most common use cases of hash tables
## More Info
### Data Structures
Please use these data structures for this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
## Tasks
### 0. >>> ht = {}
Write a function that creates a hash table.
 * Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
  - where `size` is the size of the array
### 1. djb2
Write a hash function implementing the djb2 algorithm.
 * Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
### 2. key -> index
Write a function that gives you the index of a key.
 * Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
### 3. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.
 * Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
### 4. >>> ht['betty']
Write a function that retrieves a value associated with a key.
 * Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
### 5. >>> print(ht)
Write a function that prints a hash table.
 * Prototype: `void hash_table_print(const hash_table_t *ht);`
  - where `ht` is the hash table
### 6. >>> del ht
Write a function that deletes a hash table.
 * Prototype:`void hash_table_delete(hash_table_t *ht);`
  - where `ht` is the hash table
