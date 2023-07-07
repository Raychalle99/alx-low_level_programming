#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: char data type
 * @src: char string type
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
        int i = -1;

        do {
                i++;
                dest[i] = src[i];
        } while (src[i] != '\0');
        return (dest);
}
