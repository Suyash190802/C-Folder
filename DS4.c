#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int l[n1];
    int r[n2];

    
    for(int i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];
    }

    for(int j = 0; j < n2; j++)
    {
        r[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

  
    while(i < n1 && j < n2)
    {
        if(l[i] <= r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);

        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
/* int temp;
    for(int i=0;i<n-1;i++)
    {
      int flag=0;
      for(int j=0;j<n-i-1;j++)
      { 
        if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          flag=1;
        }
      }
      if(!flag)
      break;
    }
    printf("bubble short:");
    for(int u=0;u<n;u++)
    {
      printf("%d",arr[u]);
    } */
 /*  int key;
     for(int j=0;j<=n-1;j++)
     {
      key=arr[j];
      int k=j-1;
     
     while(k>=0 && arr[k]>key)
     {
         arr[k+1]=arr[k];
         k=k-1;
     }
     arr[k+1]=key;
     }
     printf("Insertion sort:");
     for(int u=0;u<n;u++)
     {
      printf("%d",arr[u]);
     } */
/*  for(int j = 0; j < n - 1; j++)
    {
        int min=j;
        for(int k=j+1; k<n; k++)
        {
            if(arr[k]<arr[min])
            {
                min=k;
            }
        }
        int temp = arr[j];
        arr[j] = arr[min];
        arr[min] = temp;
    }
    printf("Selection Sorted array is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    } */