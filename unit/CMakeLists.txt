# unmodified from NIST
ADD_EXECUTABLE(unitTestBin_mm_read 	example_read.c)
ADD_EXECUTABLE(unitTestBin_mm_write example_write.c)

TARGET_LINK_LIBRARIES(unitTestBin_mm_read 	mmio m)
TARGET_LINK_LIBRARIES(unitTestBin_mm_write 	mmio m)

ADD_TEST(unitMMWrite	${CMAKE_CURRENT_BINARY_DIR}/unitTestBin_mm_write)
ADD_TEST(unitMMRead 	${CMAKE_CURRENT_BINARY_DIR}/unitTestBin_mm_read realA.mtx)

