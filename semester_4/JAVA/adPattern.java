import java.util.Scanner;
 
class adPattern{
	public static void main (String args[])
	{
		Scanner ob = new Scanner(System.in);
		System.out.print("Enter the number of lines: ");
		int n = ob.nextInt();
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				System.out.print((i + j) % n+" ");
			}
			System.out.println();
		}
		
	}
}
