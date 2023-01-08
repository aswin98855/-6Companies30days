int minimumCardPickup(int* cards, int cardsSize){
    int arr[1000001]={0},k,min=INT_MAX;
    for(int i=0;i<cardsSize;i++){
        if(arr[cards[i]]==0){
            if(i==0){
                arr[cards[i]]=-1;
                continue;
            }
            arr[cards[i]]=i;
        }
        else{
            if(arr[cards[i]]==-1){
                k= i-arr[cards[i]];
                if(min>k){
                    min=k;
                }
                arr[cards[i]]=i;
                continue;
            }
            k= i+1-arr[cards[i]];
            if(min>k){
                min=k;
            }
            arr[cards[i]]=i;
        }
    }
    if(min==INT_MAX){
        return -1;
    }
    return min;
}