#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/banco/dominio/Banco.o \
	${OBJECTDIR}/banco/dominio/Cliente.o \
	${OBJECTDIR}/banco/dominio/Conta.o \
	${OBJECTDIR}/banco/dominio/ContaCorrente.o \
	${OBJECTDIR}/banco/dominio/ContaPoupanca.o \
	${OBJECTDIR}/banco/relatorios/RelatorioClientes.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bancocpp

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bancocpp: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/bancocpp ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/banco/dominio/Banco.o: banco/dominio/Banco.cpp
	${MKDIR} -p ${OBJECTDIR}/banco/dominio
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/banco/dominio/Banco.o banco/dominio/Banco.cpp

${OBJECTDIR}/banco/dominio/Cliente.o: banco/dominio/Cliente.cpp
	${MKDIR} -p ${OBJECTDIR}/banco/dominio
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/banco/dominio/Cliente.o banco/dominio/Cliente.cpp

${OBJECTDIR}/banco/dominio/Conta.o: banco/dominio/Conta.cpp
	${MKDIR} -p ${OBJECTDIR}/banco/dominio
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/banco/dominio/Conta.o banco/dominio/Conta.cpp

${OBJECTDIR}/banco/dominio/ContaCorrente.o: banco/dominio/ContaCorrente.cpp
	${MKDIR} -p ${OBJECTDIR}/banco/dominio
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/banco/dominio/ContaCorrente.o banco/dominio/ContaCorrente.cpp

${OBJECTDIR}/banco/dominio/ContaPoupanca.o: banco/dominio/ContaPoupanca.cpp
	${MKDIR} -p ${OBJECTDIR}/banco/dominio
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/banco/dominio/ContaPoupanca.o banco/dominio/ContaPoupanca.cpp

${OBJECTDIR}/banco/relatorios/RelatorioClientes.o: banco/relatorios/RelatorioClientes.cpp
	${MKDIR} -p ${OBJECTDIR}/banco/relatorios
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/banco/relatorios/RelatorioClientes.o banco/relatorios/RelatorioClientes.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
