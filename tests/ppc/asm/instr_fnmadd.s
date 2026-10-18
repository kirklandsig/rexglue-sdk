test_fnmadd_1:
  #_ REGISTER_IN f2 2.0
  #_ REGISTER_IN f3 3.0
  #_ REGISTER_IN f4 1.0
  fnmadd f1, f2, f3, f4
  blr
  #_ REGISTER_OUT f1 -7.0
