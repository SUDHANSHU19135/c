#include<iostream.h>

//Command line tool for simple note making./

void main(int argc,char *args[])
FILE *fp;
fp=fopen("note.txt", "a");
   if (argc>2)


{

fprintf(fp,"** %s ***\n", args[1]);

for(int i=2; i<argc; i++)
{
if(i%10==0)
fprintf(fp,"\n");
fprintf(fp,"%s", args[i]);
}

fprintf(fp,"\n-------------\n");
}

fclose(fp);

}