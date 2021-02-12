package myproject;


import java.util.Locale;
import java.text.NumberFormat;
import java.util.Scanner;

public class myclass{
	
	static String getCurrency(int opt,int curr)
	{
		 Locale India=new Locale("en","IN");
		 String ans;
		  switch (opt)
		  {
		  case 1:ans= NumberFormat.getCurrencyInstance(India).format(curr);break;
		  case 2:ans= NumberFormat.getCurrencyInstance(Locale.US).format(curr);break;
		  case 3:ans= NumberFormat.getCurrencyInstance(Locale.CHINA).format(curr);break;
		  case 4:ans= NumberFormat.getCurrencyInstance(Locale.FRANCE).format(curr);break;
		  case 5:ans= NumberFormat.getCurrencyInstance(Locale.KOREA).format(curr);break;
		      default :ans="Please chosse the vaalid option\n";break;
		  }
		  return ans;
		 
	}
	
	public static void main(String args[]) {
	Scanner in=new Scanner(System.in);
	System.out.println(" Welcome to Currency convorter ");
	  int curr,opt;
	  int  quit=1;
	 
	  
	  
	      while(quit>0)
	      {
	    	 System.out.print("Enter the currency: ");
	    	 curr=in.nextInt();
	    	 System.out.println("\n1.To Conver into INDIA");
	    	 System.out.println("\n2.To Conver into US");
	    	 System.out.println("\n3.To Conver into China");
	    	 System.out.println("\n4.To Conver into FRANCE");
	    	 System.out.println("\n5.To Conver into KOREA");
	    	 
	    	 opt=in.nextInt();
	    	 System.out.print("After converting : \n");
	    	System.out.println(getCurrency(opt,curr));
	    	System.out.println("Press 1 two continue 0 to Quit: ");
	    	quit=in.nextInt();
	    	
	    	 
	    	 
	    	 
	      }
	      System.out.print("\nThanks for Using \n\n\t\t\tBY Bhargav Ram");
	      
		
	
	
		
	}
}

