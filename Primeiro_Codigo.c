void main()// PRINCIPAL FUNÇÃO EM UM CÓDIGO C
{// INICIO DO CODIGO
    TRISA = 0b00000000; // CONFIGURA TODO O PORTA COMO SAÍDA
     CMCON = 7;// DESATIVA TODOS OS COMPARADORES
      PORTA.B0 = 0; // ATRIBUI O VALOR NO BIT0 DO PORTA
     
while(1)//FUNÇÃO DE LOOP EM UM CÓDIGO C 
  {

   PORTA.B0 = 1; // ATRIBUI O VALOR NO BIT0 DO PORTA
   Delay_ms(1000); // ESPERA 1 SEGUNDO 
   PORTA.B0 = 0; // ATRIBUI O VALOR NO BIT0 DO PORTA
   Delay_ms(1000); // ESPERA 1 SEGUNDO
  }
}