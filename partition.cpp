void partitionArray(int arr[], int n, int x)
{
  int s, e, temp;
  s = 0;
  e = n-1;
  
  while (s < e)
  {
    while (arr[s] <=x)
       s++;
    while (arr[e] > x)
       e--;
    
    if(s<e)
      swap(arr[s],arr[e]);
  }  
}
