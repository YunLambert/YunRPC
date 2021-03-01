aux_source_directory(. SRC_LIST)
add_library(yunrpc ${SRC_LIST})
target_link_libraries(yunrpc yunod yuno pthread zookeeper_mt)