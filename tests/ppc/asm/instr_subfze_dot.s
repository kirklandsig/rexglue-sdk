test_subfze_dot_1:
  #_ REGISTER_IN r4 5
  li r6, -1
  addic r6, r6, 1
  subfze. r3, r4
  blr
  #_ REGISTER_OUT r3 -5
  #_ REGISTER_OUT cr 0x0000000080000000

test_subfze_dot_2:
  #_ REGISTER_IN r4 -1
  li r6, 0
  addic r6, r6, 0
  subfze. r3, r4
  blr
  #_ REGISTER_OUT r3 0
  #_ REGISTER_OUT cr 0x0000000020000000
