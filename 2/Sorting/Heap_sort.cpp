class Solution
{
    public:
    void swap(int* a,int *b)
    {
        int temp=*b;
        *b=*a;
        *a=temp;
    }
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int largest=i;
        int left=2*i+1;
        int right=left+1;
        if((right<n)&&(arr[right]>arr[largest]))
            largest=right;
        if((left<n)&&(arr[left]>arr[largest]))
            largest=left;
        if(largest!=i)
        {
            swap(&arr[largest],&arr[i]);
            heapify(arr,n,largest);
        }
    }
    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=n/2-1;i>=0;i--)
            heapify(arr,n,i);
    }
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i=n-1;i>0;i--)
        {
            swap(&arr[0],&arr[i]);
            heapify(arr,i,0);
        }
    }
};
