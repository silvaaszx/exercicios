import java.time.LocalDate;
import java.time.Period;

class Pessoa {
    private String nome;
    private LocalDate dataNascimento;
    private double altura; 

    
    public Pessoa(String nome, LocalDate dataNascimento, double altura) {
        this.nome = nome;
        this.dataNascimento = dataNascimento;
        this.altura = altura;
    }

   
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setDataNascimento(LocalDate dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    
    public String getNome() {
        return nome;
    }

    public LocalDate getDataNascimento() {
        return dataNascimento;
    }

    public double getAltura() {
        return altura;
    }

    
    public int calcularIdade() {
        LocalDate hoje = LocalDate.now();
        return Period.between(dataNascimento, hoje).getYears();
    }

    
    public void imprimirDados() {
        System.out.printf("Nome: %s%n", nome);
        System.out.printf("Data de Nascimento: %s%n", dataNascimento);
        System.out.printf("Altura: %.2f metros%n", altura);
        System.out.printf("Idade: %d anos%n", calcularIdade());
    }
}


public class Main {
    public static void main(String[] args) {
        Pessoa pessoa = new Pessoa("João Silva", LocalDate.of(1990, 5, 15), 1.75);
        pessoa.imprimirDados();
    }
}
