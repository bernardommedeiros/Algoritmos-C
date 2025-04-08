import java.util.ArrayList;

public class ComplexidadeOn{
    public static boolean exemploOn(ArrayList<Integer> vector, int X){
        int tamanho = vector.size(); // O(1)

        for (int i = 0; i < tamanho; i++){ // O(n)  
            if(vector.get(1) == X){ // O(1)
                return true; 
            }
        }
        return false; // O(1)
    }
}