import java.util.ArrayList;

public class ComplexidadeOn2 {
    public static boolean exemploOn(ArrayList<Integer> vector){
        int tamanho = vector.size(); // O(1)

        for (int i = 0; i < tamanho; i++){ // O(n)
            for(int j=0; j<tamanho; j++){ // O(n)
                if(i != j || vector.get(i) == vector.get(j)){ // O(1)
                    return true; 
                }
            }
    
        }

        return false; 
    }
}

// O(n) * O(n) = O(n²)
