import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class syntaxanalysis {
	public static void main(String[] args) throws IOException {
		     		syntaxanalysis sa=new syntaxanalysis();
					FileReader input = null;
					try {
						input = new FileReader("C:/Users/goku/workspace/syntaxanalyser/src/factorial.java");
					} catch (FileNotFoundException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
					BufferedReader br = new BufferedReader(input);
					
					Map < String , Integer > variable= new HashMap < String ,Integer >() ;
					Set<String> set = new HashSet<String>();
					
					String str="";
		            int line=1;
		            int r;
		            r = br.read();
					// Read through file one line at time. Print line # and line
		            int paren=0;
		            
		            while ((r = br.read())!= -1)
		            {   char ch=(char)r;
		            	if(ch=='\n')
		            	{ line++; str=""; continue; }             //str+=ch;
		            	else if(ch==' ') {str=""; continue;}
		            	else if(ch=='/')
		            	 {  str="";
		            		ch=(char) br.read();
		            	    if(ch=='/')
		            	     while(true)
		            	     { ch=(char) br.read();
		            	       if(ch=='\n')
		            	       { line ++; break; }
		            	     }
		            	    else if(ch=='*')
		            	    {   boolean f=false;
		            	    	while((r = br.read())!= -1)
		            	    	{  ch=(char) r;
			            	       if(ch=='\n')  line++;
			            	       else if(ch=='*')
			            	       {  ch=(char) br.read();
			            	       	  if(ch=='/')
			            	       	  { f=true; break;}
		            	    	   }
		            	    	}
		            	    	if(f==false)
		            	    	System.out.println("Line: "+Integer.toString(line)+" closing comment missing */");
		            	   }
		            	 }
		            	else if(ch=='{') { str="";paren++;}
		            	else if(ch=='}') {str="";paren --;}
		            	else if(ch==';') {str="";continue;}
		            	
		            	str+=ch;
		            	if(str.equals("package"))
		            	{    str="";
		            	     ch=(char) br.read();  
		            		 while(ch!=';')
		            	     {   
		            	       if(ch=='\n')
		            	       { System.out.println("Line: "+Integer.toString(line)+" wrong package declaration syntax");
		            	    	 line ++;str="";
		            	         break; }
		            	       str+=ch;
		            		   ch=(char) br.read(); 
		            	     }
		            		 str=str.trim();
		            		 if(str.equals(" "))
		            	       System.out.println("Line: "+Integer.toString(line)+" package name missing");
		            		 String []n=str.split(" ");
		            		 if(n.length>1)
		            		  System.out.println("Line: "+Integer.toString(line)+" more than one package declared or package name have spaces.");
	            	     
		            	}
		            	else if(str.equals("import")) 
		            	{   str="";
		            		 ch=(char) br.read(); 
		            		 while(ch!=';')
		            	     { if(ch=='\n')
		            	       { System.out.println("Line: "+Integer.toString(line)+" wrong Import library declaration syntax");
		            	    	 line ++;
		            	         break; }
		            	       str+=ch;
		            	       ch=(char) br.read();
		            	     }
		            		 str=str.trim();
		            		 String []n=str.split(" ");
		            		 if(n.length>1)
		            		 System.out.println("Line: "+Integer.toString(line)+" more than one library are declared or package name have spaces.");
		            		 str="";
		            	}
		            	else if(str.equals("public")||str.equals("private")||str.equals("protected")) 
		            	{   str="";
		            		str=br.readLine();  
		            		String[] n=str.split(" +");
							int l=n.length;
							if(l<3 && !str.contains("class"))
						      System.out.println("Line: "+Integer.toString(line)+" \"class\" declaration missing");
						    else if(l<3 && str.contains("class"))
							  System.out.println("Line: "+Integer.toString(line)+" Class name missing");
						    else if(l<2) System.out.println("Line: "+Integer.toString(line)+" too few argument");
							if(str.contains("{"))  paren++;
							line++;ch='\n';
						    str="";
		            	 }
		            	else if(str.equals("class")) 
		            	{   str="";
		            		str=br.readLine();  
		            		String[] n=str.split(" +");
							int l=n.length;
							if(l<=1)
						      System.out.println("Line: "+Integer.toString(line)+" Class name missing");
							if(str.contains("{"))  paren++;
							line++;ch='\n';
						    str="";
		            	}
		            	else if(str.equals("static")) 
		            	{   str="";
		            		str=br.readLine();
		            		
		            		if(!str.contains("void"))
						      System.out.println("Line: "+Integer.toString(line)+" \"void\" declaration missing");
						    if(!str.contains("main"))
							  System.out.println("Line: "+Integer.toString(line)+" Does Not have \"main\" ");
						    if(!str.contains("String[] args"))
							   System.out.println("Line: "+Integer.toString(line)+" warning: \"String[] args\"  missing");
							if(str.contains("{"))  paren++;
							line++;ch='\n';
						    str="";
		            	 }
		            	else if(str.equals("boolean")||str.equals("char")||str.equals("byte")||
		            			str.equals("short")||str.equals("int")||str.equals("Integer")||
		            			str.equals("long")||str.equals("float")||str.equals("double")||
		            			str.equals("String"))
		            	{   String s=str;
		            		str="";
		            		boolean f=false;
		            		//ch=(char) br.read();
		            		ch=(char) br.read();
		            		int y=0;
		            		while(ch==' ')
		            		{ y++;
		            		  ch=(char) br.read();
		            		}
		            		if(y==0)
		            	      System.out.println("Line: "+Integer.toString(line)+" "+" Unknown data type.");
		            		else 
		            		{
		            		while(ch!=';')
		            	     { str+=ch; f=true;
		            	       if(ch=='\n')
		            	       { System.out.println("Line: "+Integer.toString(line)+" semicolen missing;");
		            	    	 line++;  f=false;
		            	         str="";
		            	    	 break; 
		            	       }
			            		ch=(char) br.read();
		            	     }
			            	 str=str.trim();
		            	     if(f==true && !str.equals(""))
		            	     {  String[] n=str.split(",");
								int l=n.length;
		            	    	for(int i=0;i<l;i++)
		            	    	{    n[i]=n[i].trim();
		            	    	     
	            	    		     if(!n[i].contains("="))  
	            	    		       { if(!sa.validate(n[i]))
	            	    		         System.out.println("Line: "+Integer.toString(line)+" incorrect variable declaration " +n[i]);
										 continue;
	            	    		       }
	            	    		     else if(n[i].contains("="))
        	    		     			{ int x=n[i].indexOf('=');
        	    		    	 		  if( x==(n[i].length()-1))
        	            	    		  System.out.println("Line: "+Integer.toString(line)+" initialization not done after " +n[i]);
        	    		     			}
        	    		     		 else if(!set.contains(n[i]))
        	    		                 set.add(n[i]);
        	    		             else 
        	    		              System.out.println("Line: "+Integer.toString(line)+" redeclaration of variable : "+n[i]);
        	    		          
		            	    	}
		            	     }
		            		}
		            	 }
		            	else if(str.equals("BufferedReader"))
		            	{   str="";
		            		boolean f=false;
		            		ch=(char) br.read();
		            		int y=0;
		            		while(ch==' ')
		            		{ y++;
		            		  ch=(char) br.read();
		            		}
		            		if(y==0)
		            	      System.out.println("Line: "+Integer.toString(line)+" "+" Unknown data type.");
		            		else 
		            		{
		            		while(ch!=';')
		            	     { str+=ch; f=true;
		            	       if(ch=='\n')
		            	       { System.out.println("Line: "+Integer.toString(line)+" semicolen missing;");
		            	    	 line++;  f=false;
		            	         str="";
		            	    	 break; 
		            	       }
		            	       if(ch=='/')
		            	       {  ch=(char) br.read();
		            	    	   if(ch=='/')
		            	    	   { str=br.readLine();
		            	    	   System.out.println("Line: "+Integer.toString(line)+" syntax error..semicolen missing;");
		            	    	   line++;
		            	    	   break;
		            	    	   }
		            	       }   
			            		ch=(char) br.read();
		            	      }
			            	 str=str.trim();
		            	     if(f==true && !str.equals(""))
		            	     {  if(str.contains("="))
		            	    	{   
		            	    	    String[] n=str.split("=");
									int l=n.length;
									n[0]=n[0].trim();
									if(!sa.validate(n[0]))
									{    System.out.println("Line: "+Integer.toString(line)+" incorrect variable declaration " +n[0]);
									 continue;
									}
	        	    		        else if(!set.contains(n[0]))
	        	    		            set.add(n[0]);
	        	    		         else
	        	    		           System.out.println("Line: "+Integer.toString(line)+" redeclaration of variable : "+n[0]);
			            	    	}
		            	            if(!sa.cheaknew(str))
		            	              System.out.println("Line: "+Integer.toString(line)+ str + " semicolen or object declaration missing");
			            	    	 
		            	     }
		            	     
		            		}
		            	 }
	            	//System.out.print(ch);
		            }
		            if(paren>0)  System.out.print(Integer.toString(paren)+" } parenthesis are missing..");
		            else if(paren<0)  System.out.print(Integer.toString(-paren)+" } parenthesis are unnecessary..");
		      
		            br.close();
	}
	
	boolean validate(String s)
	{   if (s.matches("^[a-zA-Z][a-zA-Z0-9]*?$") && !s.equals("abstract") &&!s.equals("assert")&&	!s.equals("boolean") && 	!s.equals("break") && 	!s.equals("byte") && 	!s.equals("case") &&
			!s.equals("catch") && 	!s.equals("char") && 	!s.equals("class") && 	!s.equals("const*") && 	!s.equals("continue") && 	!s.equals("default") &&
			!s.equals("double") && 	!s.equals("do") && 	!s.equals("else") && 	!s.equals("enum") && 	!s.equals("extends") && 	!s.equals("false") &&
			!s.equals("final") && 	!s.equals("finally") && 	!s.equals("float") && 	!s.equals("for") && 	!s.equals("goto*") && 	!s.equals("if") &&
			!s.equals("implements") && 	!s.equals("import") && 	!s.equals("instanceof") && 	!s.equals("int") && 	!s.equals("interface") && 	!s.equals("long")&&
			!s.equals("native") && 	!s.equals("new") && 	!s.equals("null") && 	!s.equals("package") && 	!s.equals("private") && 	!s.equals("protected") &&
			!s.equals("public") && 	!s.equals("return") && 	!s.equals("short") && 	!s.equals("static") && 	!s.equals("strictfp") && 	!s.equals("super") &&
			!s.equals("switch") && 	!s.equals("synchronized") && 	!s.equals("this") && 	!s.equals("throw") && 	!s.equals("throws") && 	!s.equals("transient") &&
			!s.equals("true") && 	!s.equals("try") && 	!s.equals("void") && 	!s.equals("volatile") && 	!s.equals("while"))
		return true;
		else  return false;
	}
	boolean cheaknew(String str)
	{   str=str.trim();
		if(str.contains("new"))
		{  return  true;
		}
		return false;
	}
		/*
			abstract 	assert 	boolean 	break 	byte 	case
			catch 	char 	class 	const* 	continue 	default
			double 	do 	else 	enum 	extends 	false
			final 	finally 	float 	for 	goto* 	if
			implements 	import 	instanceof 	int 	interface 	long
			native 	new 	null 	package 	private 	protected
			public 	return 	short 	static 	strictfp 	super
			switch 	synchronized 	this 	throw 	throws 	transient
			true 	try 	void 	volatile 	while 	
	*/
	
	}
