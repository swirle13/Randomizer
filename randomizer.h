#ifndef RANDOMIZER_H
#define RANDOMIZER_H

class Randomizer
{
public:
  static Randomizer* getInstance();
  unsigned int randomBetween(unsigned int minimum, unsigned int maximum);

private:
  Randomizer();
  static Randomizer* m_instance;
}

#endif RANDOMIZER_H
