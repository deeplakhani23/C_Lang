#include<stdio.h>
int main()
{
    FILE *fp;
    //fp = foper("c:/Users/SQW014/Deskop\lib/skill.text","+w");
    fp = fopen("Skill.text","W+");
    fprintf(fp,"Wellcome to skill qode -Decode your skill here....\n");
    fputs("you are entering to learning c language now....\n",fp);
    fputs("today is friday and c language complete....\n",fp);
    fclose(fp);
}



/*
r    open a text file to read mode
w    open a text file to write mode
a    open a text file to append mode
*/