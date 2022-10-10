#ifndef MAIN_H
#define MAIN_H


/**
*void prototypes()
*int prototypes()
*char prototypes()
 */

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
