void swap_max(int arr[], int l, int n )
{ 
  int maximum = arr[n];
  int position = n;
  for(int i = n+1; i<l; ++i)
  
    { 
       if(maximum < arr[i])
         {
      
             maximum = arr[i];
             position = i;
     
         }
    }  
   
     int temp = arr[n];
     arr[n] = maximum;
     arr[position] = temp;
   
}   
     
void ssort(int arr[], int l)
{
    for(int i=0; i<l; ++i)
    
     {
    
        swap_max(arr, l, i);
          
     }
  
}     
