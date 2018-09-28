#pragma once

#pragma pack(push, 2)  // here we try to emulate delphi's "packed" directive on records

typedef unsigned Cardinal;  /*delphi taste on a c++ budget*/
typedef char AnsiChar;
typedef AnsiChar *pAnsiChar;
typedef void* Pointer;

typedef struct {
	double re;
	double im;
} Complex;
typedef Complex *pComplex;

typedef struct { Complex _x[100]; } ComplexArray;
typedef ComplexArray *pComplexArray;

typedef struct { long int _x[100]; } LongIntArray;
typedef LongIntArray *pIntegerArray;  // sic

typedef struct { double _x[100]; } DoubleArray;
typedef DoubleArray *pDoubleArray;

typedef struct {
	double Theta;
	double Pshaft;
	double Speed;
	double w0;
	double Hmass;
	double Mmass;
	double D;
	double Dpu;
	double kVArating;
	double kVGeneratorBase;
	double Xd;
	double Xdp;
	double Xdpp;
	double puXd;
	double puXdp;
	double puXdpp;
	double dTheta;
	double dSpeed;
	double ThetaHistory;
	double SpeedHistory;
	double Pnominalperphase;
	double Qnominalperphase;
	int NumPhases;
	int NumConductors;
	int Conn;
	double VthevMag;  // yes, the capital letter is different
	double VThevHarm;
	double ThetaHarm;
	double Vtarget;
	Complex Zthev;
	double XRdp;
} TGeneratorVars;
typedef TGeneratorVars *pTGeneratorVars;

typedef struct {
	double h;
	double t;
	double tstart;
	double tstop;
	int IterationFlag;
	int SolutionMode;
	int intHour;
	int dblHour;
} TDynamicsRec;

typedef struct {
	void    __stdcall  GetIntValue(int &i);
	void    __stdcall  GetDblValue(double &x);
	void    __stdcall  GetStrValue(pAnsiChar s, Cardinal maxlen);
	void    __stdcall  LoadParser(pAnsiChar s, Cardinal maxlen);
	int     __stdcall  NextParam(pAnsiChar s, Cardinal maxlen);
	void    __stdcall  DoDSSCommand(pAnsiChar S, Cardinal maxlen);
	void    __stdcall  GetActiveElementBusNames(pAnsiChar Name1, Cardinal Len1, pAnsiChar Name2, Cardinal Len2);
	void    __stdcall  GetActiveElementVoltages(int &NumVoltages, pComplexArray V);
	void    __stdcall  GetActiveElementCurrents(int &NumCurrents, pComplexArray Curr);
	void    __stdcall  GetActiveElementLosses(Complex &TotalLosses, Complex &LoadLosses, Complex &NoLoadLosses);
	void    __stdcall  GetActiveElementPower(int Terminal, Complex &TotalPower);
	void    __stdcall  GetActiveElementNumCust(int &NumCust, int TotalCust);
	void    __stdcall  GetActiveElementNodeRef(int Maxsize, pIntegerArray NodeReferenceArray);
	int     __stdcall  GetActiveElementBusRef(int Terminal);
	void    __stdcall  GetActiveElementTerminalInfo(int &NumTerminals, int &NumConds, int &NumPhases);
	void    __stdcall  GetPtrToSystemVarray(Pointer &V, int &iNumNodes);
	int     __stdcall  GetActiveElementIndex();
	bool    __stdcall  IsActiveElementEnabled();
	bool    __stdcall  IsBusCoordinateDefined(int BusRef);
	void    __stdcall  GetBusCoordinate(int BusRef, double &X, double &Y);
	double  __stdcall  GetBuskVBase(int BusRef);
	double  __stdcall  GetBusDistFromMeter(int BusRef);
	void    __stdcall  GetDynamicsStruct(Pointer &pDynamicsStruct); // Returns pointer to dynamics variables structure
	double  __stdcall  GetStepSize();
	double  __stdcall  GetTimeSec();
	double  __stdcall  GetTimeHr();
	void    __stdcall  GetPublicDataPtr(Pointer &pPublicData, int &PublicDataBytes);
	int     __stdcall  GetActiveElementName(pAnsiChar FullName, Cardinal MaxNameLen);
	Pointer __stdcall  GetActiveElementPtr();
	int     __stdcall  ControlQueuePush(const int Hour, const double Sec, const int Code, const int ProxyHdl, Pointer Owner);
	void    __stdcall  GetResultStr(pAnsiChar S, Cardinal Maxlen);

} TDSSCallBacks;
typedef TDSSCallBacks *pTDSSCallBacks;

#pragma pack(pop)