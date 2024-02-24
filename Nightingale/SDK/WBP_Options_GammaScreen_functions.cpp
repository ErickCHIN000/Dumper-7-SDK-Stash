#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_GammaScreen.WBP_Options_GammaScreen_C
// (None)

class UClass* UWBP_Options_GammaScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_GammaScreen_C");

	return Clss;
}


// WBP_Options_GammaScreen_C WBP_Options_GammaScreen.Default__WBP_Options_GammaScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_GammaScreen_C* UWBP_Options_GammaScreen_C::GetDefaultObj()
{
	static class UWBP_Options_GammaScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_GammaScreen_C*>(UWBP_Options_GammaScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options_GammaScreen.WBP_Options_GammaScreen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_GammaScreen_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_GammaScreen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Options_GammaScreen_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


