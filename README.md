Sequencial 

Faça um programa que leia vários valores inteiros e os armazene em um vetor.
Depois, o programa deve ler um inteiro X e fazer uso da pesquisa sequencial para verificar se X está ou não no vetor. Se X for encontrado no vetor, o programa deve indicar a posição onde o mesmo foi encontrado.

Entrada
A entrada consiste em vários números inteiros, que devem ser inseridos no vetor. O final da entrada é sinalizado pelo número -1, que não deve ser inserido. Considere que não haverá mais do que 100 elementos. Após o número -1, será informado o valor de X.
Saída
Na saída, o programa deve mostrar a posição em que X foi encontrado no vetor, ou uma mensagem dizendo que X não foi encontrado, casoccontrário.


Controle de acesso

Com o avanço da tecnologia, muitos empresas adotaram o método do cartão magnético para controle de acesso aos seus ambientes. Você deve construir um programa verifica se uma ID( identificação) tem acesso ao ambiente. Antes de ser informado a ID, será informado a lista de IDS que possuem acesso ao ambiente.
Obs: A verificação de acesso deve ser rápida. Portanto, use busca binária.

Entrada
A entrada consiste em vários números inteiros, que devem ser inseridos no vetor. O final da entrada é sinalizado pelo número -1, que não deve ser inserido no vetor. Considere que não haverá mais do que 20 elementos. Após o número -1, será informado a ID que deseja verificar se tem acesso ou não.
Saída
Na saída, o programa deve mostrar "Possui acesso" caso a ID esteja na lista de IDS autorizadas ou "Nao possui acesso", caso não tenha acesso.


Onde esta o estudante 

Na cidade de Morangoleste, existe um dormitório enorme. Acredita-se que existem cerca de 10.000 estudantes morando ali. Imagine se eles fossem procurar um estudante de forma sequencial, gastariam muito tempo. Então, o responsável pelo dormitório teve uma ideia: armazenar os números de matrícula em um sistema, e a posição em que a matrícula ficasse seria o número do corredor em que o estudante deveria ficar.
Entrada
A entrada consiste de 3 linhas:
- a primeira irá conter um único número inteiro N (1<=N<=10000), que indica a quantidade de alunos;

- a segunda linha tem N inteiros, que correspondem aos números de matrículas de cada aluno. Estas serão inseridas em ordem crescente.

- a terceira linha terá apenas um inteiro X, referente à matrículado que do aluno o qual se quer saber o corredor em que irá ficar.

Saída
Na saída, o programa deve mostrar "Corredor Y",em que Y é o corredor que está o estudante. Caso não seja encontrado o mesmo, deve-se mostrar "Nao localizado".


Matricula 

A Robélia, chefe das secretárias do Inatel está querendo organizar o registro acadêmico dos alunos, e pediu para você ajudá-la.
Ela precisa de um sistema de armazene o nome de cada aluno, bem como seu curso e número de matrícula. Depois ela quer digitar o nome de um aluno, e o sistema deve retornar o curso e o nome de matrícula deste aluno.

Será que você consegue ajudá-la?

Entrada
A entrada consiste de várias linhas:
- a primeira irá conter um único número inteiro N (1<=N<=10000), que indica a quantidade de alunos;

- Para cada aluno, será digitadas três linhas:

  - a primeira irá conter o nome do aluno;

  - segunda, o seu curso;

  - a terceira, seu número de matrícula.

A última entrada será o nome do aluno a ser consultado.

Saída

Na saída, o programa deve mostrar o nome do aluno, seu número de matrícula e curso do aluno. Se o aluno não for encontrado, seu programa deve mostrar a mensagem "Aluno nao encontrado".

DICA: armazene os dados de cada aluno em um vetor de structs.
