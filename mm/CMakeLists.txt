ADD_LIBRARY(mmio
mmio_unsign.h
mmio.c
)

install(FILES mmio_unsign.h DESTINATION include/matrix_market)
install(TARGETS mmio DESTINATION lib)
