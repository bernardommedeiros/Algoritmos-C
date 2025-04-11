import java.util.ArrayList;
import java.util.Collections;

// Verifica se a menor idade foi repetida mais do que uma vez

public class Comparativo {
    public static boolean exemploRepeticoes(ArrayList<Integer> idades){
        int tamanho = idades.size(); 
        int menorIdade = 200;

        for (int i = 0; i < tamanho; i++){   // O(n) 
            if(idades.get(i) < menorIdade){ 
                menorIdade = idades.get(i);
            }
        }
        int cont = 0;
        for (int i = 0; i < tamanho; i++){ //O(n)
          
            if(idades.get(i) == menorIdade){ 
                cont++;
            }

        }
        return cont>1; 
    }

// O(n) + O(n) -> O(n) 

    public static boolean exemploSort(ArrayList<Integer> idades){
        Collections.sort(idades); // O(n log n) 
        return idades.get(0) == (idades.get(1));
        
    }

// O(n log n) -> menos eficiente






}
