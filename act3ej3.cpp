#include "iostream"

using namespace std;

const int MAX_PRODUCTOS = 5;

int calcularPrecioDeVenta(int precioCompra, int stock) {
  int ganancia = 0;
  if ((stock >= 100 && precioCompra < 1500) || (stock < 50)) {
    ganancia = 0.15 * precioCompra;
  } else {
    ganancia = 0.20 * precioCompra;
  }
  int iva = 0.21 * precioCompra;
  return floor(precioCompra + ganancia + iva);
}

int main(int argc, char **argv) {
  int precioCompra[MAX_PRODUCTOS];
  int stock[MAX_PRODUCTOS];
  int total[MAX_PRODUCTOS];
  int totalPrecioCompra = 0;
  int totalPrecioVenta = 0;
  
  for (int i = 0; i <5; i++) {
    cout << "Datos para el producto " << i << endl;
    cout << "Ingresar Precio " << endl;
    cin >> precioCompra[i];
    cout << "Ingresar Stock " << endl;
    cin >> stock[i];    
  }
  for (int i = 0; i < 5; i++) {
    total[i] = calcularPrecioDeVenta(precioCompra[i], stock[i]);
    cout << "Producto " << i << ". Precio de venta "<< total[i] << endl;
  }
  for (int i = 0; i < 5; i++) {
    totalPrecioCompra += precioCompra[i];
    totalPrecioVenta += total[i];
  }
  cout << "Total precios de compra: " << totalPrecioCompra << endl;
  cout << "Total precios de venta: " << totalPrecioVenta << endl;
}