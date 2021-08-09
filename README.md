# prime-nums

Repositório criado para o exercício da disciplina de Programação Paralela e Distribuida INE5645 da Universidade Federal de Santa Catarina.

Nesse exercício foram criados dois programas, um paralelo e um sequencial para realizar a tarefa de testar quais números são primos em um intervalo númerico.
Na versão sequencial, o intervalo é fixo de 0 a 10000. Já o paralelo recebe como argumento o número máximo ( maior número que será testado ) e o número de Threads usadas para a tarefa.

Para analisar a eficiência e o fator speedup foi usado o comando time do Linux. 

### Execução
`gcc sequential.c -o sequential`<br>
`./sequential`

`gcc parallel.c -o parallel`<br>
`./parallel <max_number> <num_threads> `
