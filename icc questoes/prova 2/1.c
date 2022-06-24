/* 
Nome: Eduardo Ribeiro Rodrigues
NUSP: 13696679
*/



/* RESOLUÇÃO

Na passagem por valores, as variaveis A e B da função main não são alteradas pela função swap, pois
os parametros dessa função não modificam as variaveis. Já na passagem por referencia, as variaveis A e
B da função main são modificadas pois os parametros da função swap recebe o endereço de memoria delas, 
e os parametros são ponteiros que apontam para esses endereçoes de memoria. Então, tudo que for modificado
na função swap será alterado nas variaveis A e B da main.

Na passagem por valores: 
entradas A = 1, B = 3 
saidas A = 1, B = 3

Na passagem por referencia:
entradas A = 1, B = 3
saidas A = 3, B = 1

*/
