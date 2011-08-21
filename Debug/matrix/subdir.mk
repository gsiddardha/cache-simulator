################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../matrix/aware.cpp \
../matrix/oblivious.cpp \
../matrix/unaware.cpp 

OBJS += \
./matrix/aware.o \
./matrix/oblivious.o \
./matrix/unaware.o 

CPP_DEPS += \
./matrix/aware.d \
./matrix/oblivious.d \
./matrix/unaware.d 


# Each subdirectory must supply rules for building sources it contributes
matrix/%.o: ../matrix/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


