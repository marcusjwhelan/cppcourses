cmake_minimum_required(VERSION 3.10)
project(FractalImages)

set(CMAKE_CXX_STANDARD 17)

add_executable(FractalImages main.cpp BitmapFileHeader.h BitmapInfoHeader.h Bitmap.cpp Bitmap.h Mandelbrot.cpp Mandelbrot.h Zoom.cpp Zoom.h ZoomList.cpp ZoomList.h FractalCreator.cpp FractalCreator.h RGB.cpp RGB.h)