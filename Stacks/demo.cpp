#include<iostream>
#include<array>
#include <ctype.h>
using namespace std;

// rules for operator pop and push from stack
    // -

// [!] steps to perform for infix to prefix
// [x] input infix expression from user
// [x] priority
// [ ] Associativity
// [ ] use switch case to check all char
// [x] push in stack
// [x] pop from stack

// variable decleration
char stack[30], postfixExpression[30], infix[30] = {};
int top = -1, MAX = 30;

class stackClass {
public:
    // Functions to check whether stack is underflow or overflow.
    int isFull() {
        if (top == MAX - 1) {
            // stack is overflow
            return 1;
        }
        else {
            // stack is not overflow
            return 0;
        }
    }
    int isEmpty() {
        if (top == -1) {
            // stack is underflow
            return 1;
        }
        else {
            // stack is not underflow
            return 0;
        }
    }
    // these functions are not necessary to use in this program but I declared.

    // Functions to push and pop on stack
    void push(char data) {
        top++;
        stack[top] = data;
    }
    char pop() {
        char popElement = stack[top];
        top--;
        return popElement;
    }

    // priority
    int priority(char data) {
        // => here all return returns priority order of operators
        if (data == '+' || data == '-') {
            return 1;
        }
        else if (data == '*' || data == '/') {
            return 2;
        }
        else {
            return 0;
        }
    }

}stackFunction;

int main() {
    int j = 0, x;
    // taking infix expression from user
    cout << endl << "Enter your infix expression : ";
    cin >> infix;
    int length_infix = 0;
    for (int i = 0; infix[i] != '\0'; i++) {
        length_infix++;
    }
    cout << "The length of exp is " << length_infix << endl;

    for (int i=0; i < length_infix; i++)
    {
        if ( isalpha (infix[i]) )
        {
            cout << infix[i];
        }
        else if ( infix[i] == '(')
        {
            stackFunction.push('(');
        }
        else if ( infix[i] == ')')
        {
            while ( x=stackFunction.pop() != '(')
            {
                cout << x;
            }
        }
        else
        {
            while (stackFunction.priority(stack[top]) >= stackFunction.priority(infix[i]) ) 
            {
                cout << stackFunction.pop();

            }
            stackFunction.push(infix[i]);
        }
    }
    while (top != -1) {
        cout << stackFunction.pop();
        
    }
    cout << endl;

    cout << " ---------------------------------------------------------------------------- " << endl;

    // for (int i = 0; i < length_infix; i++) {
    //     if ( (infix[i] >= 65 && infix[i] <= 90) || (infix[i] >= 97 && infix[i] <= 122) ) {
    //         postfixExpression[j] = infix[i];
    //         j++;
    //     }
    //     else {
    //         if (top == -1) {
    //             stackFunction.push(infix[i]);
                
    //         }
    //         else if (infix[i] == '(') {
    //             stackFunction.push('(');
    //         }
    //         else if (infix[i] == ')') {
    //             while (stack[top] != '(') {
    //                 postfixExpression[j] = stackFunction.pop();
    //             }
    //             // stackFunction.pop();
    //         }
    //         else if (stackFunction.priority(infix[i]) < stackFunction.priority(stack[top])) {
    //             postfixExpression[j] = stackFunction.pop();
    //             j++;
    //             stackFunction.push(infix[i]);
    //         }
    //         else if (stackFunction.priority(infix[i]) > stackFunction.priority(stack[top])) {
    //             stackFunction.push(infix[i]);
    //         }
    //         // else if (stackFunction.priority(infix[i]) == stackFunction.priority(stack[top])) {
    //         else {
    //             if (stack[top] == '+' && infix[i] == '-' || stack[top] == '-' && infix[i] == '+') {
    //                 // cout << "test" << endl;
    //                 postfixExpression[j] = stackFunction.pop();
    //                 j++;
    //                 stackFunction.push(infix[i]);
    //             }
    //             else if (stack[top] == '*' && infix[i] == '/' || stack[top] == '/' && infix[i] == '*') {
    //                 // cout << "test" << endl;
    //                 postfixExpression[j] = stackFunction.pop();
    //                 j++;
    //                 stackFunction.push(infix[i]);
    //             }
    //             else if (stack[top] == '^' && infix[i] == '$' || stack[top] == '$' && infix[i] == '^') {
    //                 postfixExpression[j] = infix[i];
    //                 j++;
    //             }
    //         }
    //     }
    // }
    // while (top != -1) {
    //     postfixExpression[j] = stackFunction.pop();
    //     j++;
    // }
    // cout << endl << "Postfix expression is : ";
    // for (int i = 0;i < j;i++) {
    //     cout << postfixExpression[i];
    // }
    // cout << endl << endl;

    return 0;
}









// for (int i = 0;i < length_infix;i++) {
//     // operators to scan => (, ), +, -, ^, *, /

//     switch (infix[i]) {
//     // case '(':
//     //     stackFunction.push('(');
//     //     break;
//     // case ')':
//     //     do {
//     //         stackFunction.push();
//     //     } while (infix[i] != ')');


//     default:
//         break;
//     }