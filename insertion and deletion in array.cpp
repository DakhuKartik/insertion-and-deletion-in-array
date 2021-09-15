#include<stdio.h>
void main() {
int arr[100],pos,i,n,val;
printf("Enter number of element:\n");

scanf("%d",&n);
printf("Enter %d elements : ",n);
for(i=0; i<n; i++)
scanf("%d", & arr[i]);
printf("Enter location to insert element:\n");

scanf("%d",&pos);
printf("Enter value to insert:\n");

scanf("%d",&val);
for(i=n-1;i>= pos-1;i--)

{
arr[i+1] = arr[i];
}
arr[pos-1] = val;
printf("Resultant array is:\n");
for(i=0;i<n+pos;i++)
{
printf("%d\t",arr[i]);
}
printf("\n Enter location to delete:\n");

scanf("%d",&pos);
if(pos >= n+1)
printf("Delete is not possible\n");

else
{
for(i=pos-1;i<=n-1;i++)
arr[i] = arr[i+1];
printf("Resultant array is :\n");

for(i=0;i<n;i++)
printf("%d \t",arr[i]);

printf("\n");

}
}