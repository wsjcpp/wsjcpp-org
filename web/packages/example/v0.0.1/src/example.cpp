#include "example.h"

// ---------------------------------------------------------------------
// Example

Example::Example() {
  // nothing          
}

// ---------------------------------------------------------------------

void Example::setValue(const std::string &sValue) {
  m_sValue = sValue;
}

// ---------------------------------------------------------------------

std::string Example::getValue() {
  return m_sValue;
}