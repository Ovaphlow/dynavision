TEMPLATE = app
TARGET = eagleye_demo
QT += core \
    gui
HEADERS += motionTracker.h \
    eagleye_demo.h
SOURCES += motionTracker.cpp \
    main.cpp \
    eagleye_demo.cpp
FORMS += eagleye_demo.ui
RESOURCES += 
INCLUDEPATH += d:\lib\opencv\build\include \
    d:\lib\opencv\build\include\opencv
LIBS += -Ld:\lib\opencv\build\x86\mingw\bin \
    -llibopencv_core242 \
    -llibopencv_highgui242 \
    -llibopencv_imgproc242 \
    -llibopencv_features2d242 \
    -llibopencv_calib3d242 \
    -llibopencv_video242
