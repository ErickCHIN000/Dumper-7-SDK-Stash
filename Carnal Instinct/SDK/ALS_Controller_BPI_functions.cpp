#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ALS_Controller_BPI.ALS_Controller_BPI_C
// (None)

class UClass* IALS_Controller_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_Controller_BPI_C");

	return Clss;
}


// ALS_Controller_BPI_C ALS_Controller_BPI.Default__ALS_Controller_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALS_Controller_BPI_C* IALS_Controller_BPI_C::GetDefaultObj()
{
	static class IALS_Controller_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALS_Controller_BPI_C*>(IALS_Controller_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_Controller_BPI.ALS_Controller_BPI_C.BPI_Get_DebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  DebugFocusCharacter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DebugView                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowHUD                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowTraces                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDebugShapes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowLayerColors                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Slomo                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowCharacterInfo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IALS_Controller_BPI_C::BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_Controller_BPI_C", "BPI_Get_DebugInfo");

	Params::IALS_Controller_BPI_C_BPI_Get_DebugInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DebugFocusCharacter != nullptr)
		*DebugFocusCharacter = Parms.DebugFocusCharacter;

	if (DebugView != nullptr)
		*DebugView = Parms.DebugView;

	if (ShowHUD != nullptr)
		*ShowHUD = Parms.ShowHUD;

	if (ShowTraces != nullptr)
		*ShowTraces = Parms.ShowTraces;

	if (ShowDebugShapes != nullptr)
		*ShowDebugShapes = Parms.ShowDebugShapes;

	if (ShowLayerColors != nullptr)
		*ShowLayerColors = Parms.ShowLayerColors;

	if (Slomo != nullptr)
		*Slomo = Parms.Slomo;

	if (ShowCharacterInfo != nullptr)
		*ShowCharacterInfo = Parms.ShowCharacterInfo;

}

}


