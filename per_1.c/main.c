void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
    int data[r];


    combinationUtil(arr, n, r, 0, data, 0);
}


void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{  int j;
    // Current cobination is ready, print it
    if (index == r)
    {
        for (j=0; j<r; j++)
            printf("%d ",data[j]);
        printf("\n");
        return;
    }


    if (i >= n)
        return;

    // current is included, put next at next location
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);

    // current is excluded, replace it with next (Note that
    // i+1 is passed, but index is not changed)
    combinationUtil(arr, n, r, index, data, i+1);
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);
    return 0;
}
