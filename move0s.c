#include<stdio.h>
void movezeros(int a[],int n)
{
    int b[n];
    int j=0;
    int c=0,i;
    for(i=0;i<n;i++){
       if(a[i]!=0){
         b[j]=a[i];
         j++;
    }
       else{
         c++;}}
    while (c>0){
        b[j]=0;
        c--;
        j++;

    }
    printf("\nArray after shifting zeros: \n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main()
{
    int a[]={0,1,0,3,12};
    int n=sizeof(a)/sizeof(a[0]);
    movezeros(a,n);
    int b[]={0};
    int n1=sizeof(b)/sizeof(b[0]);
    movezeros(b,n1);
    return 0;

}
