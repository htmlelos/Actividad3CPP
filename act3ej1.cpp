#include "iostream"

using namespace std;

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
  int precioCompra = 0;
  int stock = 100;
  cout << "Ingrese el precio de compra" << endl;
  cin >> precioCompra;

  int total = calcularPrecioDeVenta(precioCompra, stock);
  cout << "El precio de venta es: " << total << endl;
}