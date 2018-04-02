#include "randomizer.cpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Randomizer* Randomizer::m_instance = 0;

Randomizer::Randomizer()
{
  srand(time(0));
}

static Randomizer* Randomizer::getInstance()
{
  if (m_instance == 0)
    m_instance = new Randomizer();
  return m_instance;
}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum)
{
  if (minimum >= maximum)
    return minimum;
  return r = (rand() % 10 + 1);
}
