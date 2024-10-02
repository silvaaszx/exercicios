import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Aluno {
    private String matricula;
    private double nota;

    public Aluno(String matricula, double nota) {
        this.matricula = matricula;
        this.nota = nota;
    }

    public String getMatricula() {
        return matricula;
    }

    public double getNota() {
        return nota;
    }

    public String getConceito() {
        if (nota >= 0.0 && nota <= 4.9) {
            return "D";
        } else if (nota >= 5.0 && nota <= 6.9) {
            return "C";
        } else if (nota >= 7.0 && nota <= 8.9) {
            return "B";
        } else if (nota >= 9.0 && nota <= 10.0) {
            return "A";
        } else {
            return "Nota inválida";
        }
    }
}

public class GerenciadorAlunos {
    public static void main(String[] args) {
        List<Aluno> alunos = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        String continuar;

        do {
            System.out.print("Digite o número de matrícula do aluno: ");
            String matricula = scanner.nextLine();

            System.out.print("Digite a nota do aluno: ");
            double nota = scanner.nextDouble();
            scanner.nextLine();  

            Aluno aluno = new Aluno(matricula, nota);
            alunos.add(aluno);

            System.out.print("Deseja adicionar outro aluno? (s/n): ");
            continuar = scanner.nextLine();
        } while (continuar.equalsIgnoreCase("s"));

        System.out.println("\nConceitos Finais dos Alunos:");
        for (Aluno aluno : alunos) {
            System.out.printf("Matrícula: %s | Nota: %.2f | Conceito: %s%n", aluno.getMatricula(), aluno.getNota(), aluno.getConceito());
        }

        scanner.close();
    }
}
