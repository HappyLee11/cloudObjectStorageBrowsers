cmake_minimum_required(VERSION 3.5)

project(cloudObjectStorageBrowsers VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES cloudObjectStorageBrowsers_zh_CN.ts)

set(PROJECT_SOURCES
        main.cpp
        src/fend/uiLogin/logindialog.cpp
        src/fend/uiLogin/logindialog.h
        src/fend/uiLogin/logindialog.ui
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(cloudObjectStorageBrowsers
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        src/fend/uiMain/uimain.h src/fend/uiMain/uimain.cpp
        src/fend/uiMain/toolbarwidget.h src/fend/uiMain/toolbarwidget.cpp src/fend/uiMain/toolbarwidget.ui
        src/fend/uiMain/bucketswidget.h src/fend/uiMain/bucketswidget.cpp src/fend/uiMain/bucketswidget.ui
        src/fend/uicom/breadwidget.h src/fend/uicom/breadwidget.cpp src/fend/uicom/breadwidget.ui
        src/fend/uiMain/objectswidget.h src/fend/uiMain/objectswidget.cpp src/fend/uiMain/objectswidget.ui
        src/fend/uicom/pagewidget.h src/fend/uicom/pagewidget.cpp src/fend/uicom/pagewidget.ui
        src/fend/uiMain/uimain.h src/fend/uiMain/uimain.cpp src/fend/uiMain/uimain.ui
        src/fend/uiMain/bucketswidget.h src/fend/uiMain/bucketswidget.cpp src/fend/uiMain/bucketswidget.ui
        src/fend/uiMain/objectswidget.h src/fend/uiMain/objectswidget.cpp src/fend/uiMain/objectswidget.ui
        src/fend/uiMain/toolbarwidget.h src/fend/uiMain/toolbarwidget.cpp src/fend/uiMain/toolbarwidget.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET cloudObjectStorageBrowsers APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(cloudObjectStorageBrowsers SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(cloudObjectStorageBrowsers
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(cloudObjectStorageBrowsers PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.cloudObjectStorageBrowsers)
endif()
set_target_properties(cloudObjectStorageBrowsers PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS cloudObjectStorageBrowsers
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

INCLUDE_DIRECTORIES(
        ${PROJECT_SOURCE_DIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(cloudObjectStorageBrowsers)
endif()
