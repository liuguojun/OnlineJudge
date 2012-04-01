import java.util.Scanner;
import java.util.Stack;

public class Main {
	
	public static void main(String[] args) {
		Stack forwardStack=new Stack();
		Stack backwardStack=new Stack();
		String currentPage="http://www.acm.org/";
		String url;
		String cmd;
		Scanner sin=new Scanner(System.in);
		while(true)
		{
			
			cmd=sin.next();
			if(cmd.equals("VISIT"))
			{
				backwardStack.push(currentPage);
				url=sin.next();
				currentPage=url;
				forwardStack.clear();
				System.out.println(currentPage);
			}
			else if(cmd.equals("BACK"))
			{
				
				
				
                if(backwardStack.isEmpty())
                {
                	System.out.println("Ignored");
                }
                else
                {
                	forwardStack.push(currentPage);
                	currentPage=(String)backwardStack.pop();
                	System.out.println(currentPage);
                }
                
			}
			else if(cmd.equals("FORWARD"))
			{
		         
				
                if(forwardStack.isEmpty())
                {
                	System.out.println("Ignored");
                }
                else
                {
                	backwardStack.push(currentPage);
                	currentPage=(String)forwardStack.pop();
                	System.out.println(currentPage);
                }
				
			}
			else if(cmd.equals("QUIT"))
			{
				break;
			}
		}
	}

}

