void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[100000];
    while(i<=mid && j<=h){
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(;i<=mid;i++)
        B[k++]=A[i];
    for(;j<=h;j++)
        B[k++]=A[j];
    for(i=l;i<=h;i++)
        A[i]=B[i];
}
void mergesort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int gcd(int a,int b) {
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int minOperations(int* nums, int numsSize, int* numsDivide, int numsDivideSize){
    mergesort(nums,0,numsSize-1);
    int k=numsDivide[0];
    for(int i=0;i<numsDivideSize;i++) {
        k=gcd(numsDivide[i],k);
    }
    for(int i=0;i<numsSize;i++) {
        if(k%nums[i]==0) {
            return i;
        }
    }
    return -1;
}