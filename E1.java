class Professor:
    def __init__(self, nome, cpf, titulacao, salario):
        self.nome = nome
        self.cpf = cpf
        self.titulacao = titulacao
        self.salario = salario

    def calcular_contribuicao(self):
        if self.titulacao == 'Especialista':
            return self.salario * 0.012
        elif self.titulacao == 'Mestre':
            return self.salario * 0.014
        elif self.titulacao == 'Doutor':
            return self.salario * 0.016
        return 0

def main():
    professores = []
    total_arrecadado = 0
    contador_mestres = 0

    while True:
        nome = input("Digite o nome do professor: ")
        cpf = input("Digite o CPF do professor: ")
        titulacao = input("Digite a titulação do professor (Doutor, Mestre, Especialista): ")
        salario = float(input("Digite o salário do professor: "))

        professor = Professor(nome, cpf, titulacao, salario)
        professores.append(professor)

        total_arrecadado += professor.calcular_contribuicao()
        if titulacao == 'Mestre':
            contador_mestres += 1

        continuar = input("Deseja adicionar outro professor? (s/n): ")
        if continuar.lower() != 's':
            break

    print(f"\nTotal arrecadado pelo sindicato: R${total_arrecadado:.2f}")
    print(f"Quantidade de professores que são Mestres: {contador_mestres}")

if __name__ == "__main__":
    main()
