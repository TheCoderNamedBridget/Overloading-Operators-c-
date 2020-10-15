

#ifndef DISTANCE_H
#define DISTANCE_H
#include <iostream> 
using namespace std; 
class Distance //English Distance class
{
    private:
        int feet;
        float inches;
    public: //constructor (no args)
        Distance() : feet(0), inches(0.0)
        { } //constructor (two args)
        Distance(int ft, float in) : feet(ft), inches(in)
        { }
        
        friend ostream &operator<<( ostream &output, const Distance &D ) { 
            output << "Feet : " << D.feet << " Inches : " << D.inches;
            return output;            
        }
        friend istream &operator>>( istream  &input, Distance &D ) { 
            cout<<"Enter feet: "<<endl;
            input >> D.feet;
            cout<<"Enter inches: "<<endl;
            input>> D.inches;
            return input;            
        }
        
        
        Distance operator+( Distance D, Distance d2 ) { 
            float addInches = d2.inches + D.inches;
            int feetAdd = 0;
            float inchAdd = 0;
            if ( addInches > 12 )
            {
                feetAdd = addInches / 12;
                inchAdd = addInches - ( feetAdd * 12 );
            }
            else 
            {
                inchAdd = addInches;
            }
            Distance newDist = Distance( d2.feet + D.feet + feetAdd, inchAdd);
            return newDist;            
        }
        
        friend Distance operator-( Distance D, Distance D2 ) { 
            if ( D.inches > 12 )
            {
                D.feet += D.inches / 12;
                D.inches = D.inches - (D.inches / 12);
            }
            float subinches = D.inches - D2.inches;
            int feetSub = 0;
            float inchSub = 0;
            if ( D.inches - D2.inches < 0 )
            {
                feetSub = -1;
                inchSub = 12 + subinches;
            }
            else 
            {
                inchSub = subinches;
            }
            Distance newDist = Distance( D.feet - D2.feet, D.inches - D2.inches);
            return newDist;            
        }
};

#endif
