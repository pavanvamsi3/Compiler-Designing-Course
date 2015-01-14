%token HI GO BYE

%%

program: 
         hi  bye go
        ;

hi:     
        HI     { printf("Hello World\n");   }
        ;
bye:    
        BYE    { printf("Bye World\n");  }
        ;
go:
	GO     { printf("Gone From World\n");
	          exit(0);}
	;