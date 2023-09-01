import java.util.*;
public class Main {
public static void main(String[] args) {
double a,b,c,determinant;
double root1, root2;
System.out.println("Enter the coefficients a,b,c");
Scanner sc = new Scanner(System.in);
a=sc.nextInt();
if (a==0)
{
System.out.println("a can not be zero");
}
else
{
b=sc.nextInt();
c=sc.nextInt();
determinant = b * b - 4 * a * c;
// check if determinant is greater than 0
if (determinant > 0) {
// two real and distinct roots
root1 = (-b + Math.sqrt(determinant)) / (2 * a);
root2 = (-b - Math.sqrt(determinant)) / (2 * a);
System.out.format("root1 = %.2f and root2 = %.2f", root1, root2);
}
// check if determinant is equal to 0
else if (determinant == 0) {
// two real and equal roots

// determinant is equal to 0
root1 = root2 = -b / (2 * a);
System.out.format("root1 = root2 = %.2f;", root1);
}
// if determinant is less than zero
else {
// roots are complex number and distinct
double real = -b / (2 * a);
double imaginary = Math.sqrt(-determinant) / (2 * a);
System.out.format("root1 = %.2f+%.2fi", real, imaginary);
System.out.format("\nroot2 = %.2f-%.2fi", real, imaginary);
}
}
}
}
