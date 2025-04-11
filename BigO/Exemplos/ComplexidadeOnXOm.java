import java.util.ArrayList;

public class ComplexidadeOnXOm {
    public static boolean exemploOnm(ArrayList<Integer> vectorA, ArrayList<Integer> vectorB){
        int tamanhoA = vectorA.size(); 
        int tamanhoB = vectorB.size(); 

        for (int i = 0; i < tamanhoA; i++){ // O(n)  
            for (int j = 0; j < tamanhoB; j++){ // O(m)  
                if (vectorA.get(i) == vectorB.get(j)){
                    return true;
                }
            }
        }
        return false; // O(1)
    }
}

// O(n) * O(m) -> um unico termo, assim, conclui-se que a complexidade já está definida