bool linearsearch(int arr[] , int index , int X , int N)
{
    // base condition
    if(index == N)
    return 0;

    if(arr[index] == X)
    return 1;
    linearsearch(arr , index +1  , X ,N);
}
