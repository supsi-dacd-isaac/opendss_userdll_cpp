#pragma once
#define DllExport __declspec(dllexport)
#include "types.hpp"
#include <Windows.h>

extern "C" {

	DllExport int  __stdcall New(TGeneratorVars &Genvars, TDynamicsRec &DynaData, TDSSCallBacks &Callbacks);

	DllExport void __stdcall Delete(int &ID);

	DllExport void __stdcall Select(int &ID);

	DllExport void __stdcall Init(pComplexArray V, pComplexArray I);

	DllExport void __stdcall Calc(pComplexArray V, pComplexArray I);

	DllExport void __stdcall Integrate();

	DllExport void __stdcall Edit(pAnsiChar EditStr, Cardinal Maxlen);

	DllExport void __stdcall UpdateModel();

	DllExport void __stdcall Save();

	DllExport void __stdcall Restore();

	DllExport int  __stdcall NumVars();

	DllExport void __stdcall GetAllVars(pDoubleArray &Vars);

	DllExport int  __stdcall GetVariable(int &i);

	DllExport void __stdcall SetVariable(int &i, double &value);

	DllExport void __stdcall GetVarName(int &VarNum, pAnsiChar VarName, Cardinal maxlen);

}