#include <stdio.h>
int main(){
    FILE *in , *out;
    in=fopen("plain.txt","r");
    out=fopen("ciper.txt","w");
    char ch ;
    if(in==NULL)
    {
        printf("file not rechable");
        return 1;
    }
    while ((ch=fgetc(in)) !=EOF)
    {
        ch=ch+70;
        fputc(ch,out);
    }
    fclose(in);
    fclose(out);
    printf("encrypted");
    return 0;

}