import java.util.Scanner;
 
class Factorial
{
   public int fact(int n){
       if(n == 1){
           return n;
       }
       else{
           return n * fact(n-1);
       }
   }
   public static void main(String args[])
   {
      int a;
    int  c;
    int fact = 1;
     
      System.out.println(" Enter an integer ");
      Scanner sc = new Scanner(System.in);
     
      a = sc.nextInt();
     
      if (a < 0)
         System.out.println("Number should be non-negative.");
      else
      {
         for (c = 1; c <= a; c++)
            fact = fact*c;
     
         System.out.println("Factorial of "+a+" is = "+fact(a));
      }
   }
}
