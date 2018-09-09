#include<stdio.h>
int a[50];

void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j)
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }

        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;

        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}

int q_r()
{
    int list[50];
    int size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements to be sorted:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    quicksort(list, 0, size - 1);
    printf("After applying quick sort\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\t");

  return 0;
}


int q_wr()
{
  int i,j,temp,beg,end,mid,item;
  int arr[10];
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(i=0;i<=9;i++)
  {
   for(j=i+1;j<=9;j++)
   {
    if(arr[i]>arr[j])
    {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
    }
   }
  }
  for(i=0;i<=9;i++)
  {
   printf("\t%d",arr[i]);
  }
  printf("Enter the number to find:");
  scanf("%d",&item);
  beg=0;
  end=9;
  mid=(int)(end+beg)/2;
  while(item!=arr[mid] && beg<=end)
  {
   if(item>arr[mid])
   {
    beg=mid+1;
   }
   else
   {
    end=mid-1;
   }
   mid=(int)(end+beg)/2;
  }
  if(beg<=end)
  {
   printf("\nPosition is %d",mid+1);
  }
  else
   printf("\nPosition may be become %d",mid+1);


  return 0;
}

int main()
{
  int x;
  while(1)
  {
  printf("Enter the choice 1. Quick sort with recursion \t 2. Quick sort without recursion");
  scanf("%d",&x);

switch(x)
  {
    case 1: q_r();
            break;
    case 2: q_wr();
            break;
    default: printf("Enter correct choice  ");
            break;
  }
}
  return 0;
}
