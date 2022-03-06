set(HEADERS kvstores/dummy_header.hpp)

add_library(KVStores INTERFACE)
target_include_directories(KVStores INTERFACE .)
target_sources(KVStores INTERFACE ${HEADERS})