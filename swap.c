
void swp(int* num1, int* num2){

   if(*num1 != *num2){
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
