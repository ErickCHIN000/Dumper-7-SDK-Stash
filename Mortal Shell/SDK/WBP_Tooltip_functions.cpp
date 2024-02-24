#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Tooltip.WBP_Tooltip_C
// (None)

class UClass* UWBP_Tooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Tooltip_C");

	return Clss;
}


// WBP_Tooltip_C WBP_Tooltip.Default__WBP_Tooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Tooltip_C* UWBP_Tooltip_C::GetDefaultObj()
{
	static class UWBP_Tooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Tooltip_C*>(UWBP_Tooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Tooltip.WBP_Tooltip_C.Get_TextBlock_Tooltip_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWBP_Tooltip_C::Get_TextBlock_Tooltip_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Tooltip_C", "Get_TextBlock_Tooltip_Text_0");

	Params::UWBP_Tooltip_C_Get_TextBlock_Tooltip_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


