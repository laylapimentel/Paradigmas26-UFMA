Inicio

programa solicita nome do cliente

cliente digita seu nome

programa solicita idade do cliente

cliente digita idade

programa pergunta saldo do cliente

cliente coloca o valor

programa pergunta a quantidade do produto

cliente digita a quantidade 

programa pergunta valor do produto

cliente digita 

   
programa calcula valor da compra
   valorTotal <- precoProduto * quantidade
   
programa verifica a idade do  cliente 
   temIdade <- (idade >= 18)
   temSaldo <- (saldo >= valorTotal)
   
programa exibe o comprovante com todos os dados da compra e se tem idade e saldo suficiente e troco
   Escreval("")
   Escreval("========================================")
   Escreval("           COMPROVANTE / STATUS         ")
   Escreval("========================================")
   Escreval("Cliente: ", nome)
   Escreval("Idade: ", idade, " anos")
   Escreval("Saldo Atual: R$ ", saldo:0:2)
   Escreval("Valor Total da Compra: R$ ", valorTotal:0:2, " (", quantidade, " x R$ ", precoProduto:0:2, ")")
   Escreval("----------------------------------------")
   
   // Estrutura de Decisão para os 4 Cenários
   Se temIdade E temSaldo programa retorna:
      STATUS: COMPRA APROVADA!
      programa retorna o troco
      
   Senao Se temIdade E NAO temSaldo programa retorna:
      STATUS: COMPRA RECUSADA!
      Mensagem: O cliente possui idade, mas NAO tem saldo suficiente.
      Faltam: R$ ", (valorTotal - saldo), " para concluir a compra."
      
   Senao Se NAO temIdade E temSaldo programa retorna:
      STATUS: COMPRA RECUSADA!
      Mensagem: O cliente NAO tem idade suficiente, apesar de possuir saldo.
      
   Senao programa retorna:
      STATUS: COMPRA RECUSADA!
      "Mensagem: O cliente NAO tem idade suficiente e NAO tem saldo disponível.
  
  Fim
   
   Escreval("========================================")

Fimalgoritmo
