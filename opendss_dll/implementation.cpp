#include "stdafx.h"
#include "exposed_interface.h"
//#define EXPORT comment(linker, "/EXPORT:" __FUNCTION__ "=" __FUNCDNAME__)


int __stdcall New(TGeneratorVars &Genvars, TDynamicsRec &DynaData, TDSSCallBacks &Callbacks) {
	//#pragma EXPORT
	return 1;
};

void __stdcall Delete(int &ID) {
	//#pragma EXPORT
};

void __stdcall Select(int &ID) {
	//#pragma EXPORT
};

void __stdcall Init(pComplexArray V, pComplexArray I) {
	//#pragma EXPORT
};

void __stdcall Calc(pComplexArray V, pComplexArray I) {
	//#pragma EXPORT
};

void __stdcall Integrate() {
	//#pragma EXPORT
};

void __stdcall Edit(pAnsiChar EditStr, Cardinal Maxlen) {
	//#pragma EXPORT
};

void __stdcall UpdateModel() {
	//#pragma EXPORT
};

void __stdcall Save() {
	//#pragma EXPORT
};

void __stdcall Restore() {
	//#pragma EXPORT
};

int  __stdcall NumVars() {
	//#pragma EXPORT
	return 1;
};

void __stdcall GetAllVars(pDoubleArray &Vars) {
	//#pragma EXPORT
};

int  __stdcall GetVariable(int &i) {
	//#pragma EXPORT
	return 1;
};

void __stdcall SetVariable(int &i, double &value) {
	//#pragma EXPORT
};

void __stdcall GetVarName(int &VarNum, pAnsiChar VarName, Cardinal maxlen) {
	//#pragma EXPORT
};