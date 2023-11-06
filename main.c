#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define SIZE 200

// Login
bool login() {
    char user[SIZE] = "unip";
    char senha[SIZE] = "unip123";
    
    printf("Digite o nome do usuário: ");
    scanf("%s", user);
    
    printf("Digite sua senha: ");
    scanf("%s", senha);
    
    // Verificar se o usuário e senha estão corretos

    // int validacao = strcmp(user, senha);

    if (strcmp(user, "unip") == 0 && strcmp(senha, "unip123") == 0) {
    // if (validacao == 0) {
        printf("Login realizado com sucesso!\n");
        return true;
    } else {
        printf("Usuário ou senha incorretos.\n");
        return false;
    }
}

// Dados da Industria
typedef struct {
    char nomeResponsavel[SIZE];
    char cpf[SIZE];
    char sexo[SIZE];
    char dataDeNascimento[SIZE]; 
    char nomeEmpresa[SIZE];
    char cnpj[SIZE];    
    char razaoSocial[SIZE];
    char nomeFantasia[SIZE];
    char telefone[SIZE];
    char endereco[SIZE];
    char rua[SIZE];
    char numero[SIZE];
    char bairro[SIZE];
    char cidade[SIZE];
    char estado[SIZE];
    char cep[SIZE];
    char email[SIZE];
    char dataAbertura[SIZE];
    int quantidadeResiduos;
    float valorCusto;
    char nomeCadastroResiduos[SIZE];
    char cpfCadastroResiduos[12];
    float quantidadeCadastroResiduos;
    float valorCadastroResiduos;
} IndustriaCliente;

// cadastrar os dados da Industria
void cadastrarIndustria(IndustriaCliente *cliente) {
    IndustriaCliente industria;
    
    printf("Digite o nome do responsável da indústria: ");
    scanf("%s", cliente->nomeResponsavel);

    printf("Digite o CPF do responsável: ");
    scanf("%s", cliente->cpf);

    printf("Digite o seu sexo: ");
    scanf("%s", cliente->sexo);

    printf("Digite a sua data de nascimento: ");
    scanf("%s", cliente->dataDeNascimento);
    
    printf("Digite o nome da empresa: ");
    scanf("%s", cliente->nomeEmpresa);
    
    printf("Digite o CNPJ: ");
    scanf("%s", cliente->cnpj);
    
    printf("Digite a razão social: ");
    scanf("%s", cliente->razaoSocial);
    
    printf("Digite o nome fantasia da indústria: ");
    scanf("%s", cliente->nomeFantasia);
    
    printf("Digite o telefone: ");
    scanf("%s", cliente->telefone);
    
    printf("Digite a rua: ");
    scanf(" %[^\n]s", cliente->rua);

    printf("Digite o número: ");
    scanf("%s", cliente->numero);

    printf("Digite o bairro: ");
    scanf("%s", cliente->bairro);  

    printf("Digite a cidade: ");
    scanf("%s", cliente->cidade);

    printf("Digite o estado: ");
    scanf("%s", cliente->estado);

    printf("Digite o CEP: ");
    scanf("%s", cliente->cep);
    
    printf("Digite o e-mail: ");
    scanf("%s", cliente->email);
    
    printf("Digite a data de abertura: ");
    scanf("%s", cliente->dataAbertura);
    
    // Salvar os dados em arquivos
    FILE *arquivo = fopen("dadosIndustria.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao executar o arquivo.\n");
        return;
    }
    
    fprintf(arquivo, "Nome do responsável: %s\n", industria.nomeResponsavel);
    fprintf(arquivo, "CPF do responsável: %s\n", industria.cpf);
    fprintf(arquivo, "Sexo do responsável: %s\n", industria.sexo);
    fprintf(arquivo, "Data de Nascimento do responsável: %s\n", industria.dataDeNascimento);
    fprintf(arquivo, "Nome da empresa: %s\n", industria.nomeEmpresa);
    fprintf(arquivo, "CNPJ: %s\n", industria.cnpj);
    fprintf(arquivo, "Razão social: %s\n", industria.razaoSocial);
    fprintf(arquivo, "Nome fantasia: %s\n", industria.nomeFantasia);
    fprintf(arquivo, "Telefone: %s\n", industria.telefone);
    fprintf(arquivo, "Rua: %s\n", industria.rua);
    fprintf(arquivo, "Número: %s\n", industria.numero);
    fprintf(arquivo, "Bairro: %s\n", industria.bairro);
    fprintf(arquivo, "Cidade: %s\n", industria.cidade);
    fprintf(arquivo, "Estado: %s\n", industria.estado);
    fprintf(arquivo, "CEP: %s\n", industria.cep);
    fprintf(arquivo, "E-mail: %s\n", industria.email);
    fprintf(arquivo, "Data de abertura: %s\n", industria.dataAbertura);
    fprintf(arquivo, "\n");
    
    fclose(arquivo);
    
    printf("Os dados da indústria foram cadastrados com sucesso!\n");
}

// cadastrar os resíduos 
void cadastrarResiduos(IndustriaCliente *cliente) {
    

    printf("Digite o nome do usuário: ");
    scanf("%s", cliente->nomeCadastroResiduos);
    // fgets(nome, sizeof(nome), stdin);
    // nome[strcspn(nome, "\n")] = '\0'; 

    printf("Digite o CPF do usuário: ");
    scanf("%s", cliente->cpfCadastroResiduos);
    // fgets(cpf, sizeof(cpf), stdin);
    // cpf[strcspn(cpf, "\n")] = '\0'; 

    printf("Digite a quantidade de resíduos tratados: ");
    scanf("%f", cliente->quantidadeCadastroResiduos);

    printf("Digite o valor estimado de custo: ");
    scanf("%f", cliente->valorCadastroResiduos);
}

// atualizar os resíduos tratados
void atualizarResiduos(IndustriaCliente *cliente) {
    int quantidade;
    float valorEstimado;

    printf("Digite a quantidade de resíduos tratados: ");
    scanf("%d", quantidade);
    
    printf("Digite o valor estimado de custo: ");
    scanf("%f", valorEstimado);
    
    // Salvar os dados em um arquivo
    FILE *arquivo = fopen("dadosResiduos.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    
    fprintf(arquivo, "Quantidade de resíduos tratados: %d\n", quantidade);
    fprintf(arquivo, "Valor estimado de custo: %.2f\n", valorEstimado);
    fprintf(arquivo, "\n");
    
    fclose(arquivo);
    
    printf("Dados atualizados com sucesso!\n");
}

// criptografar os dados 
/*
// Função para criptografar uma string
void criptografar(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] + 1;
        i++;
    }
}

// Função para descriptografar uma string
void descriptografar(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] - 1;
        i++;
    }
}



    // Criptografa os dados sensíveis
    criptografar(nome);
    criptografar(cpf);

    // Salva as informações em um arquivo
    FILE *arquivo = fopen("residuos.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%s;%s;%.2f;%.2f\n", nome, cpf, quantidade, valor);
    fclose(arquivo);

    printf("Resíduos cadastrados com sucesso!\n");
}
*/

// gerar relatórios individuais
void gerarRelatorioIndividual(IndustriaCliente cliente) {
    printf("\nRelatório Individual:\n");
    printf("Nome do Responsável: %s\n", cliente.nomeResponsavel);
    printf("Nome da Empresa: %s\n", cliente.nomeFantasia);
    printf("Quantidade de Resíduos Ambientais Tratados: %d\n", cliente.quantidadeResiduos);
    printf("Valor Estimado de Custo: %.2f\n", cliente.valorCusto);
}

// gerar relatórios globais
void gerarRelatorioGlobal(IndustriaCliente clientes[], int numClientes) {
    printf("\nRelatório Global:\n");

    int totalInsumosTratados = 0;
    float totalGastosMensais = 0.0;
    int maiorVolumeResiduos = 0;
    char industriaMaiorVolume[50];
    int menorProducao = 0;
    char industriaMenorProducao[50];
    float aporteFinanceiroSemestral = 0.0;

    for (int i = 0; i < numClientes; i++) {
        totalInsumosTratados += clientes[i].quantidadeResiduos;
        totalGastosMensais += clientes[i].valorCusto;

        if (clientes[i].quantidadeResiduos > maiorVolumeResiduos) {
            maiorVolumeResiduos = clientes[i].quantidadeResiduos;
            strcpy(industriaMaiorVolume, clientes[i].nomeFantasia);
        }

        if (clientes[i].quantidadeResiduos < menorProducao) {
            menorProducao = clientes[i].quantidadeResiduos;
            strcpy(industriaMenorProducao, clientes[i].nomeFantasia);
        }

        aporteFinanceiroSemestral += clientes[i].valorCusto;
    }

    printf("Total de Insumos Tratados Semestralmente: %d\n", totalInsumosTratados);
    printf("Total de Gastos Mensais: %.2f\n", totalGastosMensais);
    printf("Indústria com Maior Volume de Resíduos: %s\n", industriaMaiorVolume);
    printf("Indústria com Menor Produção de Resíduos: %s\n", industriaMenorProducao);
    printf("Aporte Financeiro Semestral: %.2f\n", aporteFinanceiroSemestral);
}

// função principal
int main() {
    // Realizar o login
    if (!login()) {
        printf("Login falhou. Encerrando o programa.\n");
        return 0;
    }
    
    // Menu de opções
    int opcao;
    int numClientes = 0;
    int numResiduosCadastrados = 0;
    IndustriaCliente clientes[100];
    
    while (true) {
        printf("\nSelecione uma opção:\n");
        printf("1. Cadastrar dados da indústria cliente\n");
        printf("2. Cadastrar resíduos da indústria\n");
        printf("3. Atualizar quantidades de resíduos ambientais tratados\n");
        printf("4. Gerar Relatório Individual\n");
        printf("5. Gerar Relatório Global\n");
        printf("6. Sair\n");
        
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                cadastrarIndustria(&clientes[numClientes]);
                numClientes++;
                break;
            case 2:
                // atualizar_residuos();
                // break;
                if (numResiduosCadastrados >= 0) {
                    cadastrarResiduos(&clientes[numResiduosCadastrados]);
                } else {
                    printf("Nenhuma indústria cadastrada\n");
                }
                break;
                // cadastrarResiduos();
                // numResiduosCadastrados++;
                // break;
            case 3:
                // atualizar_residuos();
                // break;
                if (numClientes > 0) {
                    atualizarResiduos(&clientes[numClientes - 1]);
                } else {
                    printf("Nenhuma indústria cliente cadastrada.\n");
                }
                break;
            case 4:
                // gerarRelatorios(clientes, numClientes);
                // break;
                if (numClientes > 0) {
                    gerarRelatorioIndividual(clientes[numClientes - 1]);
                } else {
                    printf("Nenhuma indústria cliente cadastrada.\n");
                }
                break;
            case 5:
                if (numClientes > 0) {
                    gerarRelatorioGlobal(clientes, numClientes);
                } else {
                    printf("Nenhuma indústria cliente cadastrada.\n");
                }
                break;
            case 6:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Por favor, selecione uma opção válida.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}