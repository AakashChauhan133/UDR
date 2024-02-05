import java.util.Scanner;

class abFibo{
	public static void main(String args[])
	{
		Scanner obj = new Scanner(System.in);
		
		System.out.print("Enter the number: ");
		int n = obj.nextInt();
		int sum1 = 1;
		int sum2 = 0;
		int sum3 = 0;
		
		for (int i = 0; i < n; i++)
		{
			System.out.print(sum1 + " ");
			sum3 = sum1;
			sum1 = sum1 + sum2;
			sum2 = sum3;
		}
		
		System.out.print("\n");
	}
}
