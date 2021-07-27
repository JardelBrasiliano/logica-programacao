//MENU PRINCIPAL DE ESCOLHA
int menuPrincipal(){
    caracteres(66, '='); printf("\n");
    printc("Minha lista de aniversario", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
    printf("  1 - Adicionar convidado\n");
    printf("  2 - Buscar Convidado\n");
    printf("  3 - Listar todos os convidados\n");
    printf("  -------------------------------\n");
    printf("  0 - Sair do Aplicativo\n");
    printf("\n\n  Escolha uma op%c%co: ", 135, 198);
    fflush(stdin);
    return getchar();
}
//CABEÇALHO DO TITULO PARA ADICIONAR CONVIDADOS
void cabecalhoSubMenuAdcionar(){
    system("CLS");
    caracteres(66, '='); printf("\n");
    printc("Adicionar Convidado", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
}
//CABEÇALHO DO TITULO DA LISTAGEM DE CONVIDADOS
void cabecalhoSubMenuListaConvidados(){
    system("CLS");
    caracteres(66, '='); printf("\n");
    printc("Lista de convidados", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
}
//CABEÇALHO PARA MOSTRAR CONVIDADOS
void cabecalhoConvidados(){
    printf("  ------ --------------------------------------------\n");
    printf("    ID   %-50s\n", "Nome");
    printf("  ------ --------------------------------------------\n");
}
//FORMATAÇÃO DE CADA ITEM NA LISTA
void unidadeDaListagem(int id, char nome[50]){
    printf("  %6i %-50s\n", id, nome);
}
//CABEÇALHO BUSCAR CONVIDADOS
void cabecalhoSubMenuBuscarConvidados(){
    system("CLS");
    caracteres(66, '='); printf("\n");
    printc("Buscar convidados", 66);  printf("\n");
    caracteres(66, '='); printf("\n\n");
}

