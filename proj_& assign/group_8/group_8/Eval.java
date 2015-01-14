import java.io.*;
public class Eval {
    public static void main(String args[])throws IOException
    {
        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
        int k = Integer.parseInt(br.readLine());
			int arr[] = new int[k];
			for(int i=0;i<k;i++)
				arr[i] = Integer.parseInt(br.readLine());
                        fun(arr,k);
    }
    public static void fun(int arr[],int k)
    {
        int i;
        for(i=0;i<k;i++)
            arr[i]=arr[i]*arr[i];
        System.out.println("succesfully executed");
    }
    
 }
