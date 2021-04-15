import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
    Scanner in = new Scanner(System.in);
        
        String a, b, c;
        
        a = in.next();
        b = in.next();
        c = in.next();
        
        if(a.equals("vertebrado") && b.equals("ave") && c.equals("carnivoro"))
        {
            System.out.print("aguia\n"); 
        }
        if(a.equals("vertebrado") && b.equals("ave") && c.equals("onivoro"))
        {
            System.out.print("pomba\n"); 
        }
        if(a.equals("vertebrado") && b.equals("mamifero") && c.equals("onivoro"))
        {
            System.out.print("homem\n"); 
        }
        if(a.equals("vertebrado") && b.equals("mamifero") && c.equals("herbivoro"))
        {
            System.out.print("vaca\n");
        }
        
        //--------------------------------------------------------------------//
        
        if(a.equals("invertebrado") && b.equals("inseto") && c.equals("hematofago"))
        {
            System.out.print("pulga\n"); 
        }
        if(a.equals("invertebrado") && b.equals("inseto") && c.equals("herbivoro"))
        {
            System.out.print("lagarta\n"); 
        }
        if(a.equals("invertebrado") && b.equals("anelideo") && c.equals("hematofago"))
        {
            System.out.print("sanguessuga\n"); 
        }
        if(a.equals("invertebrado") && b.equals("anelideo") && c.equals("onivoro"))
        {
            System.out.print("minhoca\n"); 
        }

 
    }
 
}