# Znajdź wszystkie pliki z rozszerzeniem *.chomik w katalogu źródłowym
file(GLOB CHOMIK_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.chomik")

# Iteruj przez każdy znaleziony plik
foreach(CHOMIK_FILE ${CHOMIK_FILES})
    # Pobierz nazwę pliku (bez katalogu i rozszerzenia)
    get_filename_component(CHOMIK_NAME ${CHOMIK_FILE} NAME_WE)
    # Dodaj aplikację
    add_executable(${CHOMIK_NAME} example.cpp)
    target_compile_definitions(${CHOMIK_NAME} PUBLIC 
        APP_DIR="${CMAKE_CURRENT_SOURCE_DIR}"
        APP_CHOMIK="${CMAKE_BINARY_DIR}/chomik"
        FILE_CHOMIK="${CHOMIK_FILE}")
endforeach()



# Znajdź wszystkie pliki z rozszerzeniem *.sdl_chomik w katalogu źródłowym
file(GLOB CHOMIK_FILES_SDL "${CMAKE_CURRENT_SOURCE_DIR}/*.sdl_chomik")

# Iteruj przez każdy znaleziony plik
foreach(CHOMIK_FILE_SDL ${CHOMIK_FILES_SDL})
    # Pobierz nazwę pliku (bez katalogu i rozszerzenia)
    get_filename_component(CHOMIK_NAME ${CHOMIK_FILE_SDL} NAME_WE)
    # Dodaj aplikację
    add_executable("sdl_${CHOMIK_NAME}" example.cpp)
    target_compile_definitions("sdl_${CHOMIK_NAME}" PUBLIC 
        APP_DIR="${CMAKE_CURRENT_SOURCE_DIR}"
        APP_CHOMIK="${CMAKE_BINARY_DIR}/sdl_chomik"
        FILE_CHOMIK="${CHOMIK_FILE_SDL}")
endforeach()
