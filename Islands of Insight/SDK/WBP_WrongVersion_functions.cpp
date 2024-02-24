#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WrongVersion.WBP_WrongVersion_C
// (None)

class UClass* UWBP_WrongVersion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WrongVersion_C");

	return Clss;
}


// WBP_WrongVersion_C WBP_WrongVersion.Default__WBP_WrongVersion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WrongVersion_C* UWBP_WrongVersion_C::GetDefaultObj()
{
	static class UWBP_WrongVersion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WrongVersion_C*>(UWBP_WrongVersion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WrongVersion.WBP_WrongVersion_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WrongVersion_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WrongVersion_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WrongVersion.WBP_WrongVersion_C.BndEvt__WBP_WrongVersion_Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_WrongVersion_C::BndEvt__WBP_WrongVersion_Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WrongVersion_C", "BndEvt__WBP_WrongVersion_Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WrongVersion.WBP_WrongVersion_C.ExecuteUbergraph_WBP_WrongVersion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WrongVersion_C::ExecuteUbergraph_WBP_WrongVersion(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WrongVersion_C", "ExecuteUbergraph_WBP_WrongVersion");

	Params::UWBP_WrongVersion_C_ExecuteUbergraph_WBP_WrongVersion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


