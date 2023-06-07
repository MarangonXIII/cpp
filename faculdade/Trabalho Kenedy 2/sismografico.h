#ifndef SISMOGRAFICO_H_INCLUDED
#define SISMOGRAFICO_H_INCLUDED

/*
    mag  = magnitude
    amp  = amplitude
    ene  = energia
    dist = distancia
*/

void sismografo(double &amp,double &dist,double &mag,double &ene){
    mag=(log10(amp)+(3*log10(8*dist)-2.92));
    ene=0.007*(pow(10,3*mag/2));
}

#endif // SISMOGRAFICO_H_INCLUDED
