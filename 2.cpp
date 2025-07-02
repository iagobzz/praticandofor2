#include <iostream>
using namespace std;

int main() {
   
   	string nome;
   	int nota,totalnotas,nota0,media;
   	
 
 	for(int i=1;i<=5;i+=1){
 		
 		
		cout<<"Digite o nome do aluno: ";
		cin>>nome;
		 
		cout<<"Digite a nota do aluno: ";
 		cin>>nota;
 		cout<<"-------------------------\n";
 		
 		if(nota>0){
 			totalnotas+=nota;
		 }else{
		 	nota0+=1;
		 }
		 
		 media = totalnotas/5;
		 
		 
 		}
 		
 		cout<<"A media da turma e: "<<media<<"\n";
		cout<<"alunos reprovados: "<< nota0;
    
}

