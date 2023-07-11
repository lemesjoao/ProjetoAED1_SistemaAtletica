#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL, "portuguese");
	/*vetores definidos para 10 espa�os de cadastro podendo ser alterados dependendo do uso do programa*/
	int a = -1, b; /*seletor do menu principal*/
	int indice_m = 0, indice_p = 0, indice_e = 0, indice_v =0; /*�ndices*/
	string nome[10], cpf[10], sexo[10], data_nascimento[10], endereco[10];
	string time_favorito[10], selecao_favorita [10]; /*strings case 1*/
	string produto_c [10], descricao[10], modelo[10], marca[10], tamanho[10], cor[10], preco[10]; /*strings case 2*/
	string produto_e [10], data_compra[10], valor_compra[10], situacao[10]; /*strings case 3*/
	string produto_v [10], cliente[10], valor_venda[10], data_venda[10], data_recebimento[10], situacao_v [10]; /*strings case 4*/
	string ref; /*Vari�vel para compara��o de pre�os*/
	char g_futebol [10], g_volei [10], g_basquete [10], g_handboll [10];
	char g_natacao [10], g_ciclismo [10], g_atletismo [10], g_musculacao [10]; /*char resp gostos*/
	bool found = false; /*Bool para verifica��o da lista*/

	cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
	
	while(a != 0){/*in�cio da execu��o do sistema*/
		
	cout << "Op��es:\n\n";
	cout << " 1 - Cadastrar membro;\n";
	cout << " 2 - Cadastrar produto;\n";
	cout << " 3 - Incluir no estoque;\n";
	cout << " 4 - Efetuar venda;\n";
	cout << " 5 - Listar produtos por pre�o;\n";
	cout << " 6 - Exibir 10 �ltimas sa�das;\n";
	cout << " 0 - Encerrar;\n\n";
	cout << "Insira o n�mero correspondente � opera��o desejada: ";
	cin >> a;
	system ("cls");
	cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
			
		switch(a){/*seletores do menu*/
			
			case 1: /*cadastro de membros*/
				cout << "Cadastro de membros da atl�tica:\n";
				cout << "Nome: ";
				getline (cin, nome [indice_m]);
				getline (cin, nome [indice_m]); /*duplicado para funcionar o getline*/
				cout << "CPF: ";
				getline (cin, cpf [indice_m]);
				cout << "Sexo: ";
				getline (cin, sexo [indice_m]);
				cout << "Data de Nascimento (DD/MM/AAAA): ";
				getline (cin, data_nascimento [indice_m]);
				cout << "Endere�o (Rua, n�mero, CEP):";
				getline (cin, endereco [indice_m]);
				cout << "Qual seu time favorito? ";
				getline (cin, time_favorito [indice_m]);
				cout << "Qual sua sele��o favorita? ";
				getline (cin, selecao_favorita [indice_m]);
				cout << "Gosta de futebol? (S/N): ";
				   	cin >> g_futebol [indice_m];
				   	if (toupper(g_futebol [indice_m]) != 'S' && toupper(g_futebol [indice_m]) != 'N'){
						system ("cls");
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
				    }
				cout << "Gosta de v�lei? (S/N): ";
					cin >> g_volei [indice_m];
					if (toupper(g_volei [indice_m]) != 'S' && toupper(g_volei [indice_m]) != 'N'){
						system ("cls");	
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
				    }
				cout << "Gosta de basquete? (S/N): ";
					cin >> g_basquete [indice_m];
					if (toupper(g_basquete [indice_m]) != 'S' && toupper(g_basquete [indice_m]) != 'N'){
						system ("cls");
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
				    }
				cout << "Gosta de handboll? (S/N): ";
					cin >> g_handboll [indice_m];
					if (toupper(g_handboll [indice_m]) != 'S' && toupper(g_handboll [indice_m]) != 'N'){
						system ("cls");
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
				    }
				cout << "Gosta de nata��o? (S/N): ";
					cin >> g_natacao [indice_m];
					if (toupper(g_natacao [indice_m]) != 'S' && toupper(g_natacao [indice_m]) != 'N'){
						system ("cls");
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
				    }
				cout << "Gosta de ciclismo? (S/N): ";
					cin >> g_ciclismo [indice_m];
					if (toupper(g_ciclismo [indice_m]) != 'S' && toupper(g_ciclismo [indice_m]) != 'N'){
						system ("cls");
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
					}
				cout << "Gosta de atletismo? (S/N): ";
					cin >> g_atletismo [indice_m];
					if (toupper(g_atletismo [indice_m]) != 'S' && toupper(g_atletismo [indice_m]) != 'N'){
						system ("cls");
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
					}
				cout << "Gosta de muscula��o? (S/N): ";
					cin >> g_musculacao [indice_m];
					if (toupper(g_musculacao [indice_m]) != 'S' && toupper(g_musculacao [indice_m]) != 'N'){
						system ("cls");
						cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
						cout << "Op��o inv�lida!\n";
						break;
					}
					
				indice_m ++;
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				cout << "Cadastro efetuado com sucesso!!\n";
			break;
		
			case 2: /*cadastro de produtos*/
				cout << "Cadastro de produtos da atl�tica:\n";
				cout << "Nome do produto: ";
				getline (cin, produto_c [indice_p]);/*duplicado para funcionar o getline*/
				getline (cin, produto_c [indice_p]);
				cout << "Descri��o: ";
				getline (cin, descricao [indice_p]);
				cout << "Modelo: ";
				getline (cin, modelo [indice_p]);
				cout << "Marca: ";
				getline (cin, marca [indice_p]);
				cout << "Tamanho: ";
				getline (cin, tamanho [indice_p]);
				cout << "Cor: ";
				getline (cin, cor [indice_p]);
				cout << "Pre�o: R$ ";
				getline (cin, preco [indice_p]);
			
				indice_p ++;
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				cout << "Cadastro efetuado com sucesso!!\n";
			break;
		
			case 3: /*Cadastro de entrada de produtos*/
				cout << "Entrada de produtos:\n";
				cout << "Selecione um produto: \n\n";
				
				for (int i = 0; i < indice_p; i++){
					cout << i+1 << " - " << produto_c [i] << endl;
				}
				cout << "Insira o n�mero correspondente ao produto desejado: ";
				cin >> b;
				if (b > indice_p || b < 0){
					cout << "Produto n�o encontrado!";
					
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				break;
				}
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				
				produto_e [indice_e] = produto_c [b-1];
				
				cout << "Data compra: ";
				getline (cin, data_compra [indice_e]);/*duplicado para funcionar o getline*/
				getline (cin, data_compra [indice_e]);
				cout << "Valor compra: R$ ";
				getline (cin, valor_compra [indice_e]);
				cout << "Situa��o do produto: ";
				getline (cin, situacao [indice_e]);
				
				indice_e ++;
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				cout << "Entrada efetuada com sucesso!!\n";
			break;
			
			case 4: /*cadastro vendas*/
				cout << "Venda de produtos:\n";
				cout << "Selecione um produto: \n\n";
				
				for (int i = 0; i < indice_p; i++){
					cout << i+1 << " - " << produto_c [i] << endl;
				}
				cout << "Insira o n�mero correspondente ao produto desejado: ";
				cin >> b;
				if (b > indice_p || b < 0){
					cout << "Produto n�o encontrado!";
					system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
					break;
				}
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				
				produto_v [indice_v] = produto_c [b-1];
				
				cout << "Selecione um membro: \n\n";
				
				for (int i = 0; i < indice_m; i++){
					cout << i+1 << " - " << nome [i] << endl;
				}
				cout << "Insira o n�mero correspondente ao cliente: ";
				cin >> b;
				if (b > indice_m || b < 0){
					cout << "Membro n�o encontrado!";
					system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
					break;
				}
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				
				cliente [indice_v] = nome [b-1];
				
				cout << "Valor da venda: R$ ";
				getline (cin, valor_venda [indice_v]);/*duplicado para funcionar o getline*/
				getline (cin, valor_venda [indice_v]);
				cout << "Data da venda: ";
				getline (cin, data_venda [indice_v]);
				cout << "Data da recebimento: ";
				getline (cin, data_recebimento [indice_v]);
				cout << "Situa��o do item: ";
				getline (cin, situacao_v [indice_v]);
				indice_v ++;
				system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				cout << "Venda efetuada com sucesso!!\n";
			break;
		
			case 5: /*listagem de produtos por pre�o*/
				cout << "Listagem dos produtos por pre�o:\n";
				cout << "Insira o valor a ser buscado: R$";
				cin >> ref;
				for (int i = 0; i < indice_p; i++){/*varredura do vetor pre�o*/
					if (preco[i] == ref){/*impress�o dos produtos*/
					found = true;	
	                  
	                cout << "Nome do produto: " << produto_c [i] << endl;
	                cout << "Descri��o: " << descricao [i] << endl;
	                cout << "Modelo: " << modelo [i] << endl;
	                cout << "Marca: " << marca [i] << endl;
                    cout << "Tamanho: " << tamanho [i] << endl;
        			cout << "Cor: " << cor [i] << endl << endl;
					}
				}
	                if (!found){
	                cout << "Nenhum produto com este pre�o foi encontrado.\n";
	                }
	                
                cout << "Listagem realizada com sucesso!!\n";
            	system ("pause");
            	system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
			break;	
		
			case 6: /*ultimas 10 vendas*/
				cout << "Listagem das �ltimas 10 vendas:\n";
				
				for (int i = indice_v -1; i >= indice_v-10; i--){/*impress�o das 10 �ltimas vendas*/
					if (i>=0){
					cout << "Produto: " << produto_v [i] << endl;
	                cout << "Cliente: " << cliente [i] << endl;
					cout << "Valor da venda: " << valor_venda [i] << endl;
		            cout << "Data da venda: " << data_venda [i] << endl;
	                cout << "Data do recebimento: " << data_recebimento [i] << endl;
	                cout << "Situa��o da venda: " << situacao_v [i] << endl << endl;
					}
				}
					
				cout << "Listagem realizada com sucesso!!\n";
				system ("pause");
            	system ("cls");
				cout << "\n<------- LOJA DA KRYPTO S.I. UEMG PASSOS ------->\n\n";
				
			break;
			
			case 0:
            break;
					
			default:
				
				cout<<"Op��o inv�lida\n\n";
					
		break;
		}
	}
	
	 for (int i = 0; i < indice_m; i++){
		 cout << "Membros:\n";
		 cout << nome [i] << ", " << cpf [i] << ", " << sexo [i] << ", " << data_nascimento [i] << ", " << endereco [i] << ", " << time_favorito[i] << ", " << selecao_favorita [i] << endl;
		 
		 
	 }
	 for (int i = 0; i < indice_p; i++){
		 cout << "Produtos:\n";
		 cout << produto_c [i] << ", " << descricao[i] << ", " << modelo[i] << ", " << marca[i] << ", " << tamanho[i] << ", " << cor[i] << ", " << preco[i] << endl;
		 
		 
	 }
	 for (int i = 0; i < indice_e; i++){
		 cout << "Entradas:\n";
		 cout << produto_e [i] << ", " << data_compra[i] << ", " << valor_compra[i] << ", " << situacao[i] << endl;
		 
		 
	 }
	 for (int i = 0; i < indice_v; i++){
		 cout << "Vendas:\n";
		 cout << produto_v [i] << ", " << cliente[i] << ", " << valor_venda[i] << ", " << data_venda[i] << ", " << data_recebimento[i] << ", " << situacao_v [i] << endl;
		 
		 
	 }
	cout << "\n\nObrigado por utilizar nossos servi�os!\n\n";
	
return 0;
	
}