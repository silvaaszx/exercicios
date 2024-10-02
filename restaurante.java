import java.util.ArrayList;
import java.util.Scanner;

// Classe Cliente
class Cliente {
    private String nome;
    private String endereco;
    private String telefone;

    public Cliente(String nome, String endereco, String telefone) {
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
    }

    public String getNome() {
        return nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public void visualizarCliente() {
        System.out.println("Nome: " + nome);
        System.out.println("Endereço: " + endereco);
        System.out.println("Telefone: " + telefone);
    }
}

// Classe ItemMenu
class ItemMenu {
    private String nome;
    private String categoria;
    private double preco;

    public ItemMenu(String nome, String categoria, double preco) {
        this.nome = nome;
        this.categoria = categoria;
        this.preco = preco;
    }

    public String getNome() {
        return nome;
    }

    public String getCategoria() {
        return categoria;
    }

    public double getPreco() {
        return preco;
    }

    public String getDetalhesItem() {
        return nome + " - " + categoria + ": R$ " + preco;
    }
}

// Classe Pedido
class Pedido {
    private ArrayList<ItemMenu> itens;
    private Cliente cliente;
    private double total;
    private String status;

    public Pedido(Cliente cliente) {
        this.itens = new ArrayList<>();
        this.cliente = cliente;
        this.status = "Em preparação";
    }

    public void adicionarItem(ItemMenu item) {
        itens.add(item);
        calcularTotal();
    }

    public void calcularTotal() {
        total = 0;
        for (ItemMenu item : itens) {
            total += item.getPreco();
        }
    }

    public double getTotal() {
        return total;
    }

    public String getStatus() {
        return status;
    }

    public void atualizarStatus(String novoStatus) {
        this.status = novoStatus;
    }

    public void visualizarPedido() {
        System.out.println("Cliente: " + cliente.getNome());
        System.out.println("Itens do Pedido:");
        for (ItemMenu item : itens) {
            System.out.println(item.getDetalhesItem());
        }
        System.out.println("Total: R$ " + total);
        System.out.println("Status: " + status);
    }
}

// Classe Principal
public class SaborGourmet {
    private static ArrayList<Cliente> clientes = new ArrayList<>();
    private static ArrayList<ItemMenu> menu = new ArrayList<>();
    private static ArrayList<Pedido> pedidos = new ArrayList<>();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int opcao;

        // Adicionando alguns itens ao menu
        menu.add(new ItemMenu("Pizza Margherita", "Pizza", 29.90));
        menu.add(new ItemMenu("Hambúrguer", "Sanduíche", 19.90));
        menu.add(new ItemMenu("Salada Caesar", "Salada", 15.90));

        do {
            System.out.println("\nMenu:");
            System.out.println("1. Cadastrar Cliente");
            System.out.println("2. Visualizar Menu");
            System.out.println("3. Fazer Pedido");
            System.out.println("4. Acompanhar Pedido");
            System.out.println("0. Sair");
            System.out.print("Escolha uma opção: ");
            opcao = scanner.nextInt();
            scanner.nextLine(); // Consumir a nova linha

            switch (opcao) {
                case 1: // Cadastrar Cliente
                    System.out.print("Nome: ");
                    String nome = scanner.nextLine();
                    System.out.print("Endereço: ");
                    String endereco = scanner.nextLine();
                    System.out.print("Telefone: ");
                    String telefone = scanner.nextLine();
                    clientes.add(new Cliente(nome, endereco, telefone));
                    System.out.println("Cliente cadastrado com sucesso!");
                    break;

                case 2: // Visualizar Menu
                    System.out.println("Menu do Restaurante:");
                    for (ItemMenu item : menu) {
                        System.out.println(item.getDetalhesItem());
                    }
                    break;

                case 3: // Fazer Pedido
                    System.out.print("Digite o nome do cliente: ");
                    String nomeCliente = scanner.nextLine();
                    Cliente clienteSelecionado = null;
                    for (Cliente cliente : clientes) {
                        if (cliente.getNome().equalsIgnoreCase(nomeCliente)) {
                            clienteSelecionado = cliente;
                            break;
                        }
                    }

                    if (clienteSelecionado != null) {
                        Pedido novoPedido = new Pedido(clienteSelecionado);
                        int itemOpcao;
                        do {
                            System.out.println("Selecione um item do menu (ou 0 para finalizar):");
                            for (int i = 0; i < menu.size(); i++) {
                                System.out.println((i + 1) + ". " + menu.get(i).getDetalhesItem());
                            }
                            itemOpcao = scanner.nextInt();
                            if (itemOpcao > 0 && itemOpcao <= menu.size()) {
                                novoPedido.adicionarItem(menu.get(itemOpcao - 1));
                                System.out.println("Item adicionado ao pedido.");
                            }
                        } while (itemOpcao != 0);
                        pedidos.add(novoPedido);
                        System.out.println("Pedido finalizado!");
                    } else {
                        System.out.println("Cliente não encontrado.");
                    }
                    break;

                case 4: // Acompanhar Pedido
                    System.out.print("Digite o nome do cliente: ");
                    String nomeClienteAcompanhar = scanner.nextLine();
                    boolean pedidoEncontrado = false;
                    for (Pedido pedido : pedidos) {
                        if (pedido.cliente.getNome().equalsIgnoreCase(nomeClienteAcompanhar)) {
                            pedido.visualizarPedido();
                            pedidoEncontrado = true;
                            break;
                        }
                    }
                    if (!pedidoEncontrado) {
                        System.out.println("Nenhum pedido encontrado para este cliente.");
                    }
                    break;

                case 0:
                    System.out.println("Saindo...");
                    break;

                default:
                    System.out.println("Opção inválida. Tente novamente.");
                    break;
            }
        } while (opcao != 0);

        scanner.close();
    }
}
