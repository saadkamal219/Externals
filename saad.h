struct node{
    int data;
    struct node *next, *prev, *right, *left;
}*head, *tail;

//1. Assending sort function

void assending_selection_sort(int a[], int n){
    int i, j, temp, min;
    for ( i = 0; i < n; i++)
    {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
            
        }
        if (min!=i)
        {
           temp = a[i];
           a[i] = a[min];
           a[min] = temp;
        }
        
        
    }
    
}

//2. Dessending sort function

void dessending_selection_sort(int a[], int n){
    int i, j, max = 0, temp = 0;
    for ( i = 0; i < n; i++)
    {
        max = i;
        for ( j = i+1; j < n; j++ )
        {
            if (a[j]>a[max])
            {
                max = j;
            }
            
        }
        if (max!=i)
        {
            temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }
        
    }
    
}

//3. print function(integer)

void print_int_str(int a[], int n){
    int k;
    for ( k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
}

//4. string lenght

int string_lenght(char *str){

    int i, count = 0;
    for ( i = 0; str[i]!='\0'; i++){
        count++;
    }
    return count; 
}

//5. character count

int totchar(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==' ')
        {
            continue;
        }
        else
        {
            count++;
        }
        
    }

    return count;
    
}

//6. letter count

int totletter(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        {
            count++;
        }
        
    }
    
    return count;

}

//7. Upper case letter count

int totupper(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            count++;
        }
        
    }
    
    return count;

}

//8. Lower case letter count

int totlower(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            count++;
        }
        
    }
    
    return count;

}

//9. Digit count

int totdigit(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            count++;
        }
        
    }
    
    return count;

}

//10. Special character count

int totspecial(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        {
            continue;
        }
        else if (a[i]>='0' && a[i]<='9'){
            continue;
        }
        else if(a[i]==' '){
            continue;
        }
        else
        {
            count++;
        }
        
    }
    
    return count;

}

//11. factorial

int factorial(int a){
    if (a>=1)
    {
        return a*factorial(a-1);
    }
    else if(a==0){
        return 1;
    }
    else
    {
        return 0;
    }
    
}

//12. Leap year

void leapyear(int year){
    if (year%4==0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    
}

//13. Fibonacci series

int fibonacci(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
    
}

//14. Prime number

void prime(int number){
    int i, exit = 0;

    for ( i = 2; i <= number; i++)
    {
        if (number%i==0)
        {
            printf("%d is not a prime number", number);
            exit = 1;
            break;
        }
        
    }
    if (exit==0)
    {
        printf("%d is a prime number",number);
    }
    
    

}

//15. Sum of digits of a number

void sum_of_digits(int number){
    
    int temp, sum = 0;

    while (number > 0)
    {
        temp = number % 10;
        sum += temp;
        number /= 10;
    }
    
    printf("The sum of the digits of %d: %d", number, sum);

}

//16. Maximum number in array

void maximum_in_array(int a[], int n){
    
    int i;
    int max = 0;

    for ( i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        
    }

    printf("Largest element in array: %d", max);
    
}

//17. Minimum number in array

void minimum_in_array(int a[], int n){

    int i;
    int min;

    for ( i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        
    }

    printf("Smallest element in array: %d", min);
    
}

//18. Allocating memory in a node and creating

struct node *create_node(int data){

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->right = NULL;
    newnode->left = NULL;

    return (newnode);

}

//19. In-order traversal

void inorder_traverse(struct node *newnode){

    //recur on the left subtree
    inorder_traverse(newnode->left);

    //visit root node
    printf(" %d ", newnode->data); 
    
    //recur on the right subtree
    inorder_traverse(newnode->right);

}

//20. pre-order traversal

void preorder_traverse(struct node *newnode){

    //visit root node
    printf(" %d ", newnode->data);
    
    //recur on the left subtree
    preorder_traverse(newnode->left);

    //recur on the right subtree
    preorder_traverse(newnode->right);

}

//21. Post-order traversal

void postorder_traverse(struct node *newnode){

    //recur on the left subtree
    postorder_traverse(newnode->left);
    
    //recur on the right subtree
    postorder_traverse(newnode->right);

    //visit root node
    printf(" %d ", newnode->data); 

}

