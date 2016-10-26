package number1;

import java.util.Scanner;

public class number1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		long s;
		if(n<3){
			s=n;
		}
		else if(n%2==0){
			s=n*(n-1)*(n-3);
		}
		else{
			s=n*(n-1)*(n-2);
		}
		System.out.print(s);

	}

}
