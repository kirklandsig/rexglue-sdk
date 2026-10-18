test_dcbst_1:
  #_ REGISTER_IN r4 0x10001050
  dcbst r0, r4
  blr
  #_ REGISTER_OUT r4 0x10001050
