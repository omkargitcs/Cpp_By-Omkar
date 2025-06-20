using.System;
static void Main(string[] args)
{
    int i, fact = 1,number;
    Console.Write("enter the number");
    number = int.parse(Console.ReadLine());
    for(i=1;i<number;i++)
    {
        fact = fact*i;
        Console.Write("factorial of num "+number+ "is "+fact);
               
    }
    Console.ReadLine();

}