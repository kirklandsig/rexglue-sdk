test_bdzf_1:
  #_ REGISTER_IN r4 5
  li r0, 1
  mtctr r0
  cmpwi cr0, r4, 4
  bdzf 2, 1f
  li r3, 1
  blr
1:
  li r3, 2
  blr
  #_ REGISTER_OUT r3 2
  #_ REGISTER_OUT r4 5

test_bdzf_2:
  #_ REGISTER_IN r4 5
  li r0, 2
  mtctr r0
  cmpwi cr0, r4, 4
  bdzf 2, 1f
  li r3, 1
  blr
1:
  li r3, 2
  blr
  #_ REGISTER_OUT r3 1
  #_ REGISTER_OUT r4 5

test_bdzf_3:
  #_ REGISTER_IN r4 4
  li r0, 1
  mtctr r0
  cmpwi cr0, r4, 4
  bdzf 2, 1f
  li r3, 1
  blr
1:
  li r3, 2
  blr
  #_ REGISTER_OUT r3 1
  #_ REGISTER_OUT r4 4
