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
  int precioCompra[5] = {300, 200, 350, 250, 500};
  int stock[5] = {25, 1600, 200, 500, 50};
  
  for (int i = 0; i <5; i++) {
    cout << "Precio de compra " << precioCompra[i] << " stock: " << stock[i] << endl;
    int total = calcularPrecioDeVenta(precioCompra[i], stock[i]);
    cout << "El precio de venta es: " << total << endl;
  }
}