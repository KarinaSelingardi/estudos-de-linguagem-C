#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Stack {
  int data[MAX_SIZE];
  int top;
} Stack;

// Função para inicializar a pilha
void initStack(Stack *stack) {
  // Define o topo da pilha como -1 (vazia)
  stack->top = -1;
}

// Função para adicionar um elemento à pilha
void push(Stack *stack, int value) {
  // Verifica se a pilha está cheia
  if (stack->top == MAX_SIZE - 1) {
    printf("Error: Stack overflow\n"); // Erro de estouro de pilha
    return;
  }

  // Incrementa o topo da pilha
  stack->top++;

  // Armazena o valor no topo da pilha
  stack->data[stack->top] = value;
}

// Função para remover o elemento do topo da pilha
int pop(Stack *stack) {
  // Verifica se a pilha está vazia
  if (stack->top == -1) {
    printf("Error: Stack underflow\n"); // Erro de subfluxo de pilha
    return -1;
  }

  // Obtém o valor do topo da pilha
  int value = stack->data[stack->top];

  // Decrementar o topo da pilha
  stack->top--;

  // Retorna o valor removido da pilha
  return value;
}
//funcao para avaliar uma expressao em notacao polonesa reversa
int evaluateRPN(char *tokens[]){
    //inicializa a pilha
    Stack stack;
    initStack(&stack);
    //percorre os tokens da exp RPN
    for(int i = 0; tokens[i] != NULL ; i++){
        char token = tokens [i][0];//obtem o caractere do token 

        //verifica se o token eh um numero
        if(token >= '0' && token <= '9'){
            //converte o token em int e o empilha
            int operand = atoi(tokens[i]);
            push(&stack, operand);
        }else{
            //verifica se o token é um operador
            if(token == '+' || token == '-' || token == '*' || token =='/'){
                //desempilha dois operandos da pilha 
                int operand1 = pop (&stack);
                int operand2 = pop (&stack);
                //realiza a operacao correspondente ao operador
                int result;
                switch(token){
                    case '+':
                    result = operand1 + operand2;
                    break;
                    case '-':
                    result = operand1 - operand2;
                    break;
                    case '*':
                    result = operand1 * operand2;
                    break;
                    case '/':
                    if(operand2 == 0){
                        printf("Error: Division by zero\n");//erro de div por zero
                        return -1;
                    }
                    result = operand1/operand2;
                    break;
                    default:
                    printf(" Error: invalid operator\n");//erro de operador invalido
                    return -1;

                }
                //empilha o resultado da operacao na pilha
                push(&stack, result);
            }else{
                //erro de token invalido
                printf("Error: invalid token\n");
                return -1;
            }
        }
        
    }
    //verifica se a pilha contém apenas um elemento(resultado final)
    if(stack.top != 1){
        printf("Error: invalid expression\n");
        return -1;
    }
    //retorna o resultado da expressao
    return stack.data[stack.top];
}
int main(){
    //refine a exp RPN como um vetor de tokens
    char *tokens[] = {"3","4","2","*","1","5","-","/","+",NULL};
    //avalia a exp RPN e armazena o resultado
    int result = evaluateRPN(tokens);
    //imprime o resultado da exp
    printf("Resultado: %d\n", result);
    
    return 0;
}