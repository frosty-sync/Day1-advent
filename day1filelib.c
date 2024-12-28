#include<stdio.h>

int main(void)
{
    int x = 0;

    FILE *fp;
    fp = fopen("data.txt", "r");  // Open file in text read mode
    if (fp == NULL)
    {
        return 1;  // Error opening the file
    }

    int measure[3000];
    int i = 0;

    // Read integers from the file until the end or until 3000 integers
    while ( fscanf(fp, "%d", &measure[i]) == 1)
    {
        i++;
    }

    // Loop through elements until the second-to-last one
    for (int j = 0; j < i - 1; j++)  // Ensure you don't access out-of-bounds elements
    {
        if (measure[j] < measure[j + 1])
        {
            x++;
        }
    }

    printf("Your output is: %d\n", x);
    fclose(fp);  // Close the file
    return 0;
}
