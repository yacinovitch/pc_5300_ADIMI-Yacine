# inclut < stdio.h > 
# inclut < stdlib.h > 
# inclut < sys / wait.h > 
# inclut < sys / types.h >
# include < unistd.h > 

  
int  main ( int argc, char * argv [])
{  
    int p [ 2 ];    
    pid_t pid;
  	char * a = argv [ 1 ];
    int n = atoi (a);
    if ( pipe (p) < 0 )
        sortie ( 1 );
    si ((pid = fork ())> 0 )
    {   
        fermer (p [ 0 ]);
    	// printf ("donne un nombre:");
    	// atoi (argv [1], "% d", & n);
        écrire (p [ 1 ], & n, 100 );
        fermer (p [ 1 ]);
        attendre ( NULL );  
    } 
  
    sinon  si (pid == 0 )
    { 
        fermer (p [ 1 ]);
        // int n;
        somme flottante ;
        lire (p [ 0 ], & n, 100 );
        signe int = 1 ;
    	pour ( int i = 0 ; i <n; ++ i)
    	{           
        somme + = signe / ( 2,0 * i + 1,0 );
        signe * = - 1 ;
    	}
        printf ( " % lf \ n " , somme 4 *);
    }  
    retourner  0 ;
} 