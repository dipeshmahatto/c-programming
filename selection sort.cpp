 // selection sort
 
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 
 int main(){
 	int n,i,j,temp,min;
 	printf("Enter array size:\n");
 	scanf("%d",&n);
 	int a[n];
 	printf("Enter array element:\n");
 	for (i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 
	 for(i=0;i<n;i++){
	 	min=i;
	 	for(j=i+1;j<n;j++){
	 		if(a[i]<a[min]){
	 			min=j;
			 }
		 }
		 temp=a[min];
		 a[min]=a[i];
		 a[i]=temp;
	 }
	 printf("Elements in sorted ordered:\n");
	 
	 for(i=0;i<n;i++){
	 	printf("%d\t",a[i]);
	 }
	 
	 getch();
	 return 0;
 }
