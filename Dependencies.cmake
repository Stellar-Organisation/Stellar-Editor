include(cmake/CPM.cmake)
include(FetchContent)

find_package(Qt6 COMPONENTS Core Gui Widgets)

function(myproject_setup_dependencies)
    if (NOT Qt6_FOUND)
        fetchcontent_declare(
                qt6
                GIT_REPOSITORY "https://github.com/qt/qtbase.git"
                GIT_TAG 6.6.1
                DOWNLOAD_EXTRACT_TIMESTAMP true
        )
        FetchContent_MakeAvailable(qt6)
    endif ()
endfunction()
