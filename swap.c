void swap_max(int arr[],int l,int n){
int m=a[n];
int p;
p=n;
for (int i=n;i<l;i++){
if(arr[i]>m)
{m=arr[i];
p=i;}
}
int t;
t=arr[p];
arr[p]=arr[n];
arr[n]=arr[p];
}

void ssort(int arr[],int l)
{for(int i=0;i<n-1;i++)
{swap_max(arr[],l,i);
}
