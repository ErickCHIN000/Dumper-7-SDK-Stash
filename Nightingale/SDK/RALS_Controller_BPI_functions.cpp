#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RALS_Controller_BPI.RALS_Controller_BPI_C
// (None)

class UClass* IRALS_Controller_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RALS_Controller_BPI_C");

	return Clss;
}


// RALS_Controller_BPI_C RALS_Controller_BPI.Default__RALS_Controller_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IRALS_Controller_BPI_C* IRALS_Controller_BPI_C::GetDefaultObj()
{
	static class IRALS_Controller_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IRALS_Controller_BPI_C*>(IRALS_Controller_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RALS_Controller_BPI.RALS_Controller_BPI_C.BPI_Get_DebugInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  DebugFocusCharacter                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               DebugView                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowHUD                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowTraces                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowDebugShapes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowLayerColors                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Slomo                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowCharacterInfo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IRALS_Controller_BPI_C::BPI_Get_DebugInfo(class ACharacter** DebugFocusCharacter, bool* DebugView, bool* ShowHUD, bool* ShowTraces, bool* ShowDebugShapes, bool* ShowLayerColors, bool* Slomo, bool* ShowCharacterInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RALS_Controller_BPI_C", "BPI_Get_DebugInfo");

	Params::IRALS_Controller_BPI_C_BPI_Get_DebugInfo_Params Parms{};


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


