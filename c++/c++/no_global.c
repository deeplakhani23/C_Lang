#include<stdio.h>
void disp(int x,int y,int z,int t,float p){
    printf("Maths\tScience\tEnglish\tTotal\tPercentage\n");
    printf("%d\t%d\t%d\t%d\t%.2f",x,y,z,t,p);
}
void calc(int a,int b,int c){
    int total;
    float per;
    total=a+b+c;
    per=(float)total/3;
    disp(a,b,c,total,per);
}
void setdata(){
    int maths,sci,eng;
    printf("Enter Maths Marks : ");
    scanf("%d",&maths);
    printf("Enter Science Marks : ");
    scanf("%d",&sci);
    printf("Enter English Marks : ");
    scanf("%d",&eng);
    calc(maths,sci,eng);
}
int main(){
    setdata();
}