package BigO;

import java.util.ArrayList;
import java.util.Set;

public class Complexidade {
    public static boolean exemplo(Set<Integer> s, ArrayList<Integer> vector){
        int tamanho = vector.size(); 

        for (int i = 0; i < tamanho; i++){ // O(n)  
            if (s.contains(vector.get(i))) { // O(n log n).
                return true;  
            }

        }
        
        return false; 
    }
}

// O(n log n).
