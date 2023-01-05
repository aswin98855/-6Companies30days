int evalRPN(char ** tokens, int tokensSize){
    int stack[tokensSize];
    int top=-1;
    for (int i=0;i<tokensSize;i++){
        if ((tokens[i][0] == '+' || tokens[i][0] == '-' || tokens[i][0] == '*' || tokens[i][0] == '/') && strlen(tokens[i]) == 1){
            int a=stack[top--];
            int b=stack[top--];
            switch(tokens[i][0]){
                case '+':
                    stack[++top]=a+b;
                    break;
                case '-':
                    stack[++top]=b-a;
                    break;
                case '*':
                    stack[++top]=b*a;
                    break;
                case '/':
                    stack[++top]=b/a;
                    break;
            }
        }
        else{
            stack[++top] = atoi(tokens[i]);
        }
    }
    return stack[top];
}