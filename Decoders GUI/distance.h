#ifndef DISTANCE_H
#define DISTANCE_H
/*!
   * \file distance.h
   * \brief  Header for distance class
   *
   * This file contains all of the declarations of the distance class
   */

/*!
 * \brief The Distance class
 *
 * Distance class represent a distance and an index to represent what restaurant that distance corresponds with
 */
class Distance{
public:
    /*******************************
     * CONSTRUCTOR & DECONSTRUCTOR *
     *******************************/

    /*!
     * \brief Distance
     *
     * Constructor
     */
    Distance();
    /*!
     * \brief Distance
     *
     * non default constructor
     * \param in
     * \param dist
     */
    Distance(int in, double dist);
    ~ Distance();

    /************************
     * ACCESSORS & MUTATORS *
     ************************/

    /*!
     * \brief setIndex
     *
     * sets the index
     * \param in
     */
    void setIndex(int in);

    /*!
     * \brief setDistance
     *
     * sets the distance
     * \param dist
     */
    void setDistance(double dist);

    /*!
     * \brief getIndex
     *
     * Gets the index
     * \return index
     */
    int getIndex();
    /*!
     * \brief getDistance
     *
     * Gets the distance
     * \return
     */
    double getDistance();

private:
    /*************
     * VARIABLES *
     *************/
    int index;
    double distance;
};

//Comparator to compare the two distance values.
/*!
 * \brief The DistSort struct
 *
 * Comparator for sorting distance objects, sorts by distance
 */
struct DistSort{

     bool operator()(Distance d1, Distance d2) const {
         return (d1.getDistance() < d2.getDistance() );
    }

};

/*!
 * \brief The DistSort2 struct
 *
 * Comparator for sorting distance objects, sorts by index, only used for calculating the distances
 */
struct DistSort2
{
    bool operator()(Distance d1, Distance d2) const {
        return (d1.getIndex() < d2.getIndex() );
   }
};

//Function to sort the vector of Distance objects based on distances.
//update parsing algorithm

#endif // DISTANCE_H
