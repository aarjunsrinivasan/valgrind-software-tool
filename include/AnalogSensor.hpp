/** 
 *  @file    AnanlogSensor.hpp
 *  @author  Arjun Srinivasan Ambalam
 *  @copyright GNU Public License
 *  @brief Valgrind Exerciise ENPM808X
 *  @section DESCRIPTION
 *  Class declaration
 *	of the attributes of the class AnalogSensor
 */
#ifndef INCLUDE_ANALOGSENSOR_HPP_
#define INCLUDE_ANALOGSENSOR_HPP_

#include <iostream>

/**
 * @brief      This class describes an analog sensor.
 */

class AnalogSensor {
 public:
 	   /**
    * @brief constructor AnalogSensor class
    * @param int Number of samples
    * @return none
    */
    explicit AnalogSensor(unsigned int samples);
/**
*	@brief Destructor for the AnalogSensor class
*	@param None
*	@return None 
*/
    ~AnalogSensor();
/**
*	@brief Read function to return the average  of class attributes
*	@param Nome
*	@return int Result
*/
    int Read();
 private:
    unsigned int mSamples;/*!< samples per milisecond*/
};
#endif  // INCLUDE_ANALOGSENSOR_HPP_

