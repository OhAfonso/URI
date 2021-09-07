import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
       Scanner leitor = new Scanner(System.in);
		float precoAlcool, precoGasolina, kmA, kmG;
		
		precoAlcool = leitor.nextFloat();
		precoGasolina = leitor.nextFloat();
		kmA = leitor.nextFloat();
		kmG = leitor.nextFloat();
		
		if((kmA / precoAlcool) > (kmG / precoGasolina)) {
			
			System.out.println("A");
			
		}
		
		else {
			
			System.out.println("G");
			
		}
 
    }
 
}
