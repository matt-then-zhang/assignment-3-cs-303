//
//  stateDataMap.h
//  stateDataMap
//
//  Created by Matt Zhang on 12/8/22.
//

#ifndef stateDataMap_h
#define stateDataMap_h

#endif /* stateDataMap_h */

#include <map>
#include <string>

class StateDataMap {
public:
  
  // Output all the data in the map
  void outputData() const;

  // Change the capital of the specified state
  void changeCapital(const std::string& stateName, const std::string& newCapitalName);

  // Output the capital of the specified state
  void outputCapital(const std::string& stateName) const;

private:
  // Map container to store the state data
  std::map<std::string, std::string> stateDataMap;
};
