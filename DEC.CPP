#include <stdio.h>

int main()
{
    FILE *in, *out;

    in = fopen("ciper.txt", "r");
    out = fopen("decrypted.txt", "w");

    int ch;

    if (in == NULL || out == NULL)
    {
        printf("file not reachable");
        if (in != NULL) fclose(in);
        if (out != NULL) fclose(out);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF)
    {
        ch = (ch - 70 + 256) % 256;
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("decrypted successfully");

    return 0;
}