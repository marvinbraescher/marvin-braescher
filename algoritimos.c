# marvin-braescher
int main()
{
  const float pi = 3.14;
  int pizza;
  int area;
  
 cout << "digite o raio da pizza";
 cin >> pizza;
 area = pi * (pizza * pizza);
 cout << " a area da pizza eh:" << area; 
/////////////////////////////////////////
int main()
{
    int largura, resultado, comprimento;
   
    
    cout << "digite a largura: ";
    cin >> largura;
    cout << " digite o comprimento";
    cin >> comprimento;
    resultado = largura * comprimento;
    cout << " a area do terreno e: " << resultado;

//////////////////////////////////////////////////////////////

int main()
{
  string nome;
  int idade;
  int vida;
  
  cout << "digite seu nome:" ;
  cin >> nome;
  cout << " digite sua idade:" ;
  cin >> idade;
  vida = 365 * idade;
  cout << " voce tem dias"  << vida;

/////////////////////////////////////////////////////////////////////
int main()
{
    float dinheiro;
    float litros;
    const float valor = 4;
    cout << " digite quantos litros: " ;
    cin>> litros;
    dinheiro = litros * valor;
    cout << " o total a pagar eh:" << dinheiro;
//////////////////////////////////////////////////////////////////
int main()
{
    float litros;
    float dinheiro;
    const float valor = 4;
    cout << " digite quantos dinheiros: " ;
    cin>> dinheiro;
    litros = dinheiro / valor;
    cout << " o total de litros eh:" << litros;
    /////////////////////////////////////////////////////////////////////

int main()
{
   int dia;
   int mes;
   int diasPassados;
   
   cout << "digite o dia:";
   cin >> dia;
   cout << "digite o mes:" ;
   cin >> mes;
   diasPassados = (mes * 30) + dia;
   cout << " ja se passaram" << diasPassados;
   
