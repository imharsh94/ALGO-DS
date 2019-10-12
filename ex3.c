
 //char *arr = argv[1];
 //arr = argv[1];
 int arr[10];
 int i,j;
 for(i=1; i<argc ; i++)
 {
   arr[i-1] = atoi(argv[i]);
 }
  // strcat(arr,argv[i]);
  
  for(i=0; i<argc-2;i++)
   {
     for(j=i+1; j< argc-1 ;j++)
      {
        if(arr[i] > arr[j])
        {
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
        }
      }
   }
   
   for(i=0;i<argc-1;i++)
      printf("%d\n",arr[i]);
 
}
