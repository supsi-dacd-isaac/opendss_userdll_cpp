#include "stdafx.h"
#include "exposed_interface.h"


int __stdcall New(TGeneratorVars &Genvars, TDynamicsRec &DynaData, TDSSCallBacks &Callbacks) {
	return 1;
};

void __stdcall Delete(int &ID) {
	
};

void __stdcall Select(int &ID) {
	
};

void __stdcall Init(pComplexArray V, pComplexArray I) {
	
};

void __stdcall Calc(pComplexArray V, pComplexArray I) {
	
};

void __stdcall Integrate() {
	
};

void __stdcall Edit(pAnsiChar EditStr, Cardinal Maxlen) {
	
};

void __stdcall UpdateModel() {
	
};

void __stdcall Save() {
	
};

void __stdcall Restore() {
	
};

int  __stdcall NumVars() {
	
	return 1;
};

void __stdcall GetAllVars(pDoubleArray &Vars) {
	
};

int  __stdcall GetVariable(int &i) {
	
	return 1;
};

void __stdcall SetVariable(int &i, double &value) {
	
};

void __stdcall GetVarName(int &VarNum, pAnsiChar VarName, Cardinal maxlen) {
	
};