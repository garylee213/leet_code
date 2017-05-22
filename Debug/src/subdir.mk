################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/001.cc \
../src/003.cc \
../src/005.cc \
../src/006.cc \
../src/007.cc \
../src/008.cc \
../src/009.cc \
../src/011.cc 

CPP_SRCS += \
../src/main.cpp 

CC_DEPS += \
./src/001.d \
./src/003.d \
./src/005.d \
./src/006.d \
./src/007.d \
./src/008.d \
./src/009.d \
./src/011.d 

OBJS += \
./src/001.o \
./src/003.o \
./src/005.o \
./src/006.o \
./src/007.o \
./src/008.o \
./src/009.o \
./src/011.o \
./src/main.o 

CPP_DEPS += \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


