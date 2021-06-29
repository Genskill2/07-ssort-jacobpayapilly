void swap_max(int arr[],int l,int n){
int m=a[n];
int p=n;
for (int i=n;i<l;i++){
if(a[i]>m)
{m=a[i];
p=i;}
}
int t=a[p];
a[p]=a[n];
a[n]=a[p];
}

void ssort(int arr[],int l)
{for(int i=0;i<n-1;i++)
{swap_max(arr[],l,i);
}
