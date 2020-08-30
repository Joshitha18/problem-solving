#include <stdio.h>

void merge_sort(int i, int j, long int a[], long int aux[]) {
    if (j <= i) {
        return;     
    }
    int mid = (i + j) / 2;
    
    merge_sort(i, mid, a, aux);     
    merge_sort(mid + 1, j, a, aux);    

    int pointer_left = i;       
    int pointer_right = mid + 1;    
    int k;     

    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {    
            aux[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == j + 1) {       
            aux[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) {       
            aux[k] = a[pointer_left];
            pointer_left++;
        } else {      
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (k = i; k <= j; k++) {     
        a[k] = aux[k];
    }
}


int main() {
long int t,n,a[10000],b[10000],i,j,k,temp,sum=0,aux[10000],c[50],z=0;
scanf("%ld", &t);

while(t--){
scanf("%ld",&n);

	for(i=0;i<n;i++)
	{
 	 scanf("%ld",&a[i]);
	}

 	for(i=0;i<n;i++)
	{
 	 scanf("%ld",&b[i]);
	}

merge_sort(0, n - 1, a, aux);
merge_sort(0, n - 1, b, aux);

        for (i = 0; i < n; ++i) 
        {
	   if(a[i]>=b[i]){sum=sum+b[i];}
	   else {sum=sum+a[i];}
	}

c[z]=sum;
z++;
sum=0;

}


for(i=0;i<z;i++){
printf("%ld\n",c[i]);
}



return 0;
}

