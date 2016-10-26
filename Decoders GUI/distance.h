#ifndef DISTANCE_H
#define DISTANCE_H

class Distance{
public:
    /*******************************
     * CONSTRUCTOR & DECONSTRUCTOR *
     *******************************/
    Distance();
    Distance(int in, double dist);
    ~ Distance();

    /************************
     * ACCESSORS & MUTATORS *
     ************************/
    void setIndex(int in);
    void setDistance(double dist);
    int getIndex();
    double getDistance();

private:
    /*************
     * VARIABLES *
     *************/
    int index;
    double distance;
};

//Comparator to compare the two distance values.
struct DistSort{

     bool operator()(Distance d1, Distance d2) const {
         return (d1.getDistance() < d2.getDistance() );
    }

};


struct DistSort2
{
    bool operator()(Distance d1, Distance d2) const {
        return (d1.getIndex() < d2.getIndex() );
   }
};

//Function to sort the vector of Distance objects based on distances.
//update parsing algorithm

#endif // DISTANCE_H
