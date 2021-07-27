//MENU PRINCIPAL DE ESCOLHA
int menuPrincipal(){
    caracteres(66, '='); printf("\n");
    printc("Boletim Escolar", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
    printf("  1 - Adicionar Aluno\n");
    printf("  2 - Buscar Aluno\n");
    printf("  3 - Listar todos os Alunos\n");
    printf("  -------------------------------\n");
    printf("  0 - Sair do Aplicativo\n");
    printf("\n\n  Escolha uma op%c%co: ", 135, 198);
    fflush(stdin);
    return getchar();
}
//CABEÇALHO DO TITULO PARA ADICIONAR AlUNOS
void cabecalhoSubMenuAdcionar(){
    system("CLS");
    caracteres(66, '='); printf("\n");
    printc("Adicionar Alunos", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
}
//CABEÇALHO DO TITULO DA LISTAGEM DE AlUNOS
void cabecalhoSubMenuListaConvidados(){
    system("CLS");
    caracteres(66, '='); printf("\n");
    printc("Lista de Alunos", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
}
//CABEÇALHO PARA MOSTRAR AlUNOS
void cabecalhoConvidados(){
    printf("  ------ ------------------------------- ---- ---- -------\n");
    printf("    ID   %-31s  N1   N2   MEDIA\n", "NOME");
    printf("  ------ ------------------------------- ---- ---- -------\n");
}
//FORMATAÇÃO DE CADA ITEM NA LISTA
void unidadeDaListagem(int id, char nome[50], double n1, double n2){
    double media = ((n1 >=0) && (n2>=0)) ? ((n1+n2)/2) : -1;
    printf("  %6i %-31s ", id, nome);
    if(n1 >= 0){printf("%-4.1lf ", n1);}else{cout << "     ";}
    if(n2 >= 0){printf("%-4.1lf ", n2);}else{cout << "     ";}
    if(media >= 0){printf(" %4.2lf\n", media);}else{cout << "    " << endl;}
}
//CABEÇALHO BUSCAR AlUNOS
void cabecalhoSubMenuBuscarConvidados(){
    system("CLS");
    caracteres(66, '='); printf("\n");
    printc("Buscar Alunos", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
}
double pegarNota(){
    double valor;
    cin >> valor;
    if(valor >= 0 && valor <= 10){
        return valor;
    }
    return -1;
}
