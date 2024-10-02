class Livro {
    protected String titulo;
    protected String autor;
    protected double preco;

    public Livro(String titulo, String autor, double preco) {
        this.titulo = titulo;
        this.autor = autor;
        this.preco = preco;
    }

    public void exibirDetalhes() {
        System.out.println("Título: " + titulo);
        System.out.println("Autor: " + autor);
        System.out.println("Preço: R$ " + preco);
    }
}

class Ebook extends Livro {
    private double tamanhoArquivo;

    public Ebook(String titulo, String autor, double preco, double tamanhoArquivo) {
        super(titulo, autor, preco);
        this.tamanhoArquivo = tamanhoArquivo;
    }

    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes();
        System.out.println("Tamanho do arquivo: " + tamanhoArquivo + " MB");
    }
}

public class Main {
    public static void main(String[] args) {
        Livro livro1 = new Livro("Java Básico", "João Silva", 50.0);
        Ebook ebook1 = new Ebook("Aprendendo Java", "Maria Oliveira", 35.0, 2.5);

        java.util.ArrayList<Livro> listaLivros = new java.util.ArrayList<>();
        listaLivros.add(livro1);
        listaLivros.add(ebook1);

        for (Livro livro : listaLivros) {
            livro.exibirDetalhes();
            System.out.println("------------------------");
        }
    }
}
