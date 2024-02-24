#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options.WBP_Options_C
// (None)

class UClass* UWBP_Options_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_C");

	return Clss;
}


// WBP_Options_C WBP_Options.Default__WBP_Options_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_C* UWBP_Options_C::GetDefaultObj()
{
	static class UWBP_Options_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_C*>(UWBP_Options_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options.WBP_Options_C.BndEvt__WBP_Options_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_C::BndEvt__WBP_Options_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_C", "BndEvt__WBP_Options_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature");

	Params::UWBP_Options_C_BndEvt__WBP_Options_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options.WBP_Options_C.OnClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Options_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options.WBP_Options_C.ExecuteUbergraph_WBP_Options
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_C::ExecuteUbergraph_WBP_Options(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_Value, int32 CallFunc_Conv_StringToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_C", "ExecuteUbergraph_WBP_Options");

	Params::UWBP_Options_C_ExecuteUbergraph_WBP_Options_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


