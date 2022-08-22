int countOccurences(int arr[], int n, int X)
{
	int result=0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]==X){
			result++;
		}
	
	}
	return result;
}
