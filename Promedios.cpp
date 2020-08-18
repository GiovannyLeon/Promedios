#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void parseCSV()
{
    ifstream data("PromedioCSV.csv");                    //abre y lee los archivos del PromedioCSV.csv
    string line;                                         //Crea una variable que almacena datos
    vector<vector<string>> parsedCsv;                    //crea un vector el cual almacena los datos de la variable anterior
    int rowcount=0;                                      //define una constante rowcount=0
    int colcount=0;                                      //define una constante colcount=0
    while (getline(data,line))                           //ciclo while que raliza la funcion de el archivo data("Pronedios.csv") y ingresa esos datos de la avariable anterior
    {
        stringstream lineStream(line);
        string cell;
        vector<string>parsedRow;
        colcount=0;                                      //constante colcount=0
        while (getline(lineStream,cell,','))             //ciclo while que realiza la funcion de revisar cada renglon y edintificar cada ',' y guarda esa informacion
        {
            parsedRow.push_back(cell);
            colcount++;                                  //es un contador (colcount=colcount+1)
        }
        rowcount++;                                      //es un rowcount (rowcount=rowciunt+1)
        parsedCsv.push_back(parsedRow);


    }
    float sumatoria=0;
    for(int i=0; i<rowcount; i++){                       //un ciclo for que avanza en la matrix en i=0 hasta i<rowcount  de manera de i=i+1
        for(int j=0; j<colcount;j++){                    //un ciclo for que avanza en la matrix en j=0 hasta i<rowcount  de manera de j=j+1
        float suma=std::stof(parsedCsv[i][j=2]);
        sumatoria=(suma+sumatoria);
        }
        cout << '\n';                                    //realiza un salto de linea en terminal


    }float promedio=0;
    promedio=sumatoria/rowcount;
    cout<<promedio;
}
int main()
{
    parseCSV();
    return 0;
}