void insertionSort(int arr[], int n){
    for(int  i=0;i<n;i++){
        int value=arr[i];
        int hole=i;
        while(hole>0 && arr[hole-1]>value){
            int temp=arr[hole];
            arr[hole]=arr[hole-1];
            arr[hole-1]=temp;
            hole--;
        }
        arr[hole]=value;
    }
}
