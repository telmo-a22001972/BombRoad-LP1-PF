#include <stdio.h>
#include <string.h>
#define MAX 256

void menu();

int main(void) {
    char input = '>';
    char opcao[MAX], file_name[MAX];
       
    puts("+-----------------------------------------------------");
        puts("read <filename>     - read input file");
        puts("show                - show the mine map");
        puts("trigger <x> <y>     - trigger mine at <x> <y>");
        puts("plant <x> <y>       - place armed mine at <x> <y>");
        puts("export <filename>   - save file with current map");
        puts("quit                - exit program");
        puts("sos                 - show menu");
        puts("+-----------------------------------------------------");
        printf("%c",input);
    while (1)
    {        
        scanf(" %s", opcao);
        
        if (strcmp(opcao, "quit") == 0)
        {
            return 0;
        }
        if(strcmp(opcao, "sos") == 0){
            menu();
            putchar('>');
        }
        if (strcmp(opcao, "export") == 0)
        {
            scanf(" %s", file_name);
            /*Meter aqui o programa 'testeCopiarFicheiro'*/
            
        }
        
    }
    return 0;
}

void menu(){
    char menu[9][54]={
        {'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
        {'r','e','a','d',' ','<','f','i','l','e','n','a','m','e','>',' ',' ',' ',' ',' ','-',' ','r','e','a','d',' ','i','n','p','u','t',' ','f','i','l','e'},
        {'s','h','o','w',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','s','h','o','w',' ','t','h','e',' ','m','i','n','e',' ','m','a','p'},
        {'t','r','i','g','g','e','r',' ','<','x','>',' ','<','y','>',' ',' ',' ',' ',' ','-',' ','t','r','i','g','g','e','r',' ','m','i','n','e',' ','a','t',' ','<','x','>',' ','<','y','>'},
        {'p','l','a','n','t',' ','<','x','>',' ','<','y','>',' ',' ',' ',' ',' ',' ',' ','-',' ','p','l','a','c','e',' ','a','r','m','e','d',' ','m','i','n','e',' ','a','t',' ','<','x','>',' ','<','y','>'},
        {'e','x','p','o','r','t',' ','<','f','i','l','e','n','a','m','e','>',' ',' ',' ','-',' ','s','a','v','e',' ','f','i','l','e',' ','w','i','t','h',' ','c','u','r','r','e','n','t',' ','m','a','p'},
        {'q','u','i','t',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-',' ','e','x','i','t',' ','p','r','o','g','r','a','m'},
        {'s','o','s',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','-','s','h','o','w',' ','m','e','n','u'},
        {'+','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'}};

    putchar('\n');
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 54 ; j++)
        {
            printf("%c", menu[i][j]);
        }
        putchar('\n');
        
    }
    


}
