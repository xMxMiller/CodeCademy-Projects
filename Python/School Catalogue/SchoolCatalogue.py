class School:

  def __init__(self, name, level, numberOfStudents = None):
    self.name = name
    self.level = level
    self.numberOfStudents = numberOfStudents
  
  def getName(self):
    return self.name
  
  def getLevel(self):
    return self.level
  
  def getNumberOfStudents(self):
    return self.numberOfStudents
  
  def setNumberOfStudents(self, new_numberOfStudents):
    if isinstance(new_numberOfStudents, int):
      self.numberOfStudents = new_numberOfStudents
    else:
      raise TypeError
  
  def __repr__(self):
    return f"A {self.level} school named {self.name} with {self.numberOfStudents} students"
  
class PrimarySchool(School):
  
  def __init__(self, name, numberOfStudents, pickupPolicy):
    super().__init__(name, "primary", numberOfStudents)
    self.pickupPolicy = pickupPolicy
  
  def getPickupPolicy(self):
    return self.pickupPolicy
  
  def __repr__(self):
    return f"{super().__repr__()} and the Pickup Policy is {self.pickupPolicy}"

class HighSchool(School):

  def __init__(self, name, numberOfStudents, sportsTeams):
    super().__init__(name, "high", numberOfStudents)
    self.sportsTeams = sportsTeams
  
  def getSportsTeams(self):
    return self.sportsTeams
  
  def __repr__(self):
    return f"{super().__repr__()} and the Sports Teams are {self.sportsTeams}"

S = School("School 1", "middle", 20)
print(S)
print(S.getName())
print(S.getLevel())
S.setNumberOfStudents(25)
print(S.getNumberOfStudents)

P = PrimarySchool("School 2", 15, "Pickup after 3pm")
print(P.getPickupPolicy())
print(P)

H = HighSchool("School 3", 30, "Tigers")
print(H.getSportsTeams())
print(H)