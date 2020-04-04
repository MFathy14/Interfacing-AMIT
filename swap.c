
void swp(int* num1, int* num2){

   if(*num1 != *num2){
        int Temp = *num1;
        *num1 = *num2;
        *num2 = Temp;
    }
}
