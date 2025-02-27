#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int opcionDestino, opcionClase, opcionCategoria, opcionVehiculo, opcionSuscripcion;
    int dias;
    double precioTiquete=0, precioHospedaje=0, precioVehiculo=0, total=0, descuento=0;
    string destinoNombre;

    cout<<"Seleccione su destino:\n";
    cout<<"1\tAtenas\n";
    cout<<"2\tBogotá\n";
    cout<<"3\tCartagena\n";
    cout<<"4\tDallas\n";
    cout<<"5\tEstambul\n";
    cout<<"Opción: ";
    cin>>opcionDestino;

    switch(opcionDestino) {
        case 1: precioTiquete=5500000; destinoNombre="Atenas"; break;
        case 2: precioTiquete=0; destinoNombre="Bogotá"; break;
        case 3: precioTiquete=350000; destinoNombre="Cartagena"; break;
        case 4: precioTiquete=4000000; destinoNombre="Dallas"; break;
        case 5: precioTiquete=6700000; destinoNombre="Estambul"; break;
        default: cout<<"Opción inválida.\n"; return 1;
    }

    cout<<"\nSeleccione la clase del vuelo:\n";
    cout<<"1\tEconómica\n";
    cout<<"2\tEjecutiva\n";
    cout<<"Opción: ";
    cin>>opcionClase;
    if(opcionClase==2) precioTiquete*=2;

    switch(opcionDestino) {
        case 1: precioHospedaje=300000; break;
        case 2: precioHospedaje=150000; break;
        case 3: precioHospedaje=100000; break;
        case 4: precioHospedaje=400000; break;
        case 5: precioHospedaje=120000; break;
    }

    cout<<"\nIngrese la cantidad de días de hospedaje: ";
    cin>>dias;
    precioHospedaje*=dias;

    cout<<"\nSeleccione la categoría del hospedaje:\n";
    cout<<"1\tNormal\n";
    cout<<"2\tSuperior (+20%)\n";
    cout<<"Opción: ";
    cin>>opcionCategoria;
    if(opcionCategoria==2) precioHospedaje*=1.2;

    cout<<"\nSeleccione el tipo de vehículo:\n";
    cout<<"1\tMoto (70.000 COP/día)\n";
    cout<<"2\tCarro (150.000 COP/día)\n";
    cout<<"3\tCamioneta (300.000 COP/día)\n";
    cout<<"4\tNinguno\n";
    cout<<"Opción: ";
    cin>>opcionVehiculo;

    switch(opcionVehiculo) {
        case 1: precioVehiculo=70000*dias; break;
        case 2: precioVehiculo=150000*dias; break;
        case 3: precioVehiculo=300000*dias; break;
        case 4: precioVehiculo=0; break;
        default: cout<<"Opción de vehículo inválida.\n"; return 1;
    }

    total=precioTiquete+precioHospedaje+precioVehiculo;

    cout<<"\n¿El cliente tiene suscripción?\n";
    cout<<"1\tNo\n";
    cout<<"2\tSí (-10%)\n";
    cout<<"Opción: ";
    cin>>opcionSuscripcion;
    if(opcionSuscripcion==2) descuento=total*0.1;

    system("cls");

    cout<<fixed<<setprecision(0);
    cout<<"=== Resumen del viaje ===\n";
    cout<<"Destino: "<<destinoNombre<<"\n";
    cout<<"Días de hospedaje: "<<dias<<"\n";
    cout<<"Precio tiquete: "<<precioTiquete<<" COP\n";
    cout<<"Precio hospedaje: "<<precioHospedaje<<" COP\n";
    cout<<"Precio vehículo: "<<precioVehiculo<<" COP\n";
    cout<<"Total sin descuento: "<<total<<" COP\n";
    cout<<"Descuento: "<<descuento<<" COP\n";
    cout<<"Total con descuento: "<<(total-descuento)<<" COP\n";

    return 0;
}