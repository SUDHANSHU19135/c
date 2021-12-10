#include<stdio.h>

//Command line tool for simple note making./

void main(int argc,char *argv[])
{
int i;
char c;
FILE *fp;
fp=fopen("note.txt", "a");
   if (argc>2)
{
fprintf(fp,"*** %s ***\n", argv[1]);

for(i=2; i<argc; i++)
{
if(i%10==0)
fprintf(fp,"\n");
fprintf(fp,"%s", argv[i]);
}

fprintf(fp,"\n----------------------------------------\n");
}
c= fgetc(fp);
while (c != EOF)
{ printf("%c",c);
 c= fgetc(fp);
 }
scanf("%c",c);
clrscr();
fclose(fp);
}