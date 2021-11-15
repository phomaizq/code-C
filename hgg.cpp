 #include<stdio.h>
 
 int ktsnt(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
int main()
{
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int kt = ktsnt(n);
	if(kt==0)
	{
		printf("khong la so nt");
	}else{
		printf("la so nt ");
	}
	return 0;
}
