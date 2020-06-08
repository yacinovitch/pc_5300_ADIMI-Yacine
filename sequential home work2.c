# include < stdio.h >
# include < stdlib.h >
# include < unistd.h >

void  picalc ( int n)
{
	signe int = 1 ;
	double pi;
	for ( int i = 0 ; i <n; ++ i)
	{
		pi + = signe / ( 2.0 * i + 1.0 );
		signe * = - 1 ;
	}
	printf ( " % lf \ n " , 4 * pi);
}

void  main ( int argc, char * argv [])
{
	char * a = argv [ 1 ];
    int b = atoi (a);
	picalc (b);
}
