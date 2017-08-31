#ifndef _KStruct
#define _KStruct

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// KStruct                                                                //
//                                                                      //
// Description of the drift Structure                                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
#include "TObject.h"
#include "TH1.h"
#include "TMath.h"
#include "TRandom.h"
#include "TArray.h"
#include "TArrayI.h"
#include "TArrayF.h"
#include "TGraph.h"
#include <stdio.h>
#include <stdlib.h>
#include "KField.h"
#include "KMaterial.h"

#define MAXPOINT 10001
#define MAXSEC 20

class KStruct {
public:
Int_t PCharge;
Int_t Steps;
Int_t DStrip;
Float_t Xlenght;
Float_t Ylenght;
Float_t Zlenght;
Float_t TTime;
Float_t TCharge;
Float_t Xtrack[MAXPOINT];
Float_t Ytrack[MAXPOINT];
Float_t Ztrack[MAXPOINT];
Float_t Charge[MAXPOINT];
Float_t Time[MAXPOINT];
Float_t Efield[MAXPOINT];
Float_t MulCar[MAXPOINT];


 KStruct();
 ~KStruct(){};
void Clear();  
void Info();
void Draw(Char_t *);
 void GetCH(TH1F *,Int_t=0,Float_t=1,Float_t=-1); //,Int_t=200, Float_t=100e-9); Changed from 2.23 -> 3.0
 Float_t GetCHMult(TH1F *,Int_t=0,Float_t=1,Float_t=-1); //,Int_t=200, Float_t=100e-9); Changed from 2.23 -> 3.0
  //void GetGraph(TGraph *,Int_t=0);
  TH1D *GetElFieldAlongTheDrift();
 
ClassDef(KStruct,1) 
};
#endif







