#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LowVRAMWarning_FullScreen.WBP_LowVRAMWarning_FullScreen_C
// (None)

class UClass* UWBP_LowVRAMWarning_FullScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LowVRAMWarning_FullScreen_C");

	return Clss;
}


// WBP_LowVRAMWarning_FullScreen_C WBP_LowVRAMWarning_FullScreen.Default__WBP_LowVRAMWarning_FullScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LowVRAMWarning_FullScreen_C* UWBP_LowVRAMWarning_FullScreen_C::GetDefaultObj()
{
	static class UWBP_LowVRAMWarning_FullScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LowVRAMWarning_FullScreen_C*>(UWBP_LowVRAMWarning_FullScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LowVRAMWarning_FullScreen.WBP_LowVRAMWarning_FullScreen_C.BndEvt__WBP_LowVRAMWarning_FullScreen_WBP_LowVRAMWarning_38_K2Node_ComponentBoundEvent_3_ClickedOkay__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LowVRAMWarning_FullScreen_C::BndEvt__WBP_LowVRAMWarning_FullScreen_WBP_LowVRAMWarning_38_K2Node_ComponentBoundEvent_3_ClickedOkay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LowVRAMWarning_FullScreen_C", "BndEvt__WBP_LowVRAMWarning_FullScreen_WBP_LowVRAMWarning_38_K2Node_ComponentBoundEvent_3_ClickedOkay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LowVRAMWarning_FullScreen.WBP_LowVRAMWarning_FullScreen_C.ExecuteUbergraph_WBP_LowVRAMWarning_FullScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LowVRAMWarning_FullScreen_C::ExecuteUbergraph_WBP_LowVRAMWarning_FullScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LowVRAMWarning_FullScreen_C", "ExecuteUbergraph_WBP_LowVRAMWarning_FullScreen");

	Params::UWBP_LowVRAMWarning_FullScreen_C_ExecuteUbergraph_WBP_LowVRAMWarning_FullScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


