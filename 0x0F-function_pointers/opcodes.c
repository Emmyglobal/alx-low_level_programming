#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own function.
 * @argc: The number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, 1 on invalid argument count, 2 on invalid number of bytes.
 */
int main(int argc, char *argv[])
{
    int i, num_bytes;
    unsigned char *main_ptr;

    if (argc != 2)
    {
        printf("Usage: %s <number of bytes>\n", argv[0]);
        return (1);
    }

    num_bytes = atoi(argv[1]);
    if (num_bytes <= 0)
    {
        printf("Error: Number of bytes must be greater than 0\n");
        return (2);
    }

    main_ptr = (unsigned char *)main; /* Get the address of main function */

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", main_ptr[i]); /* Print each opcode in hexadecimal */
        if (i < num_bytes - 1)
            printf(" ");
    }

    printf("\n");
    return (0);
}

