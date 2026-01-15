add_library(includes ./Card.cpp ./Deck.cpp ./Player.cpp)

target_include_directories(includes
  INTERFACE
  ${CMAKE_CURRENT_SOURCE_DIR}
)
