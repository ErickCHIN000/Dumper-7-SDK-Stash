#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GeneralAcceptButton.WBP_GeneralAcceptButton_C
// (None)

class UClass* UWBP_GeneralAcceptButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GeneralAcceptButton_C");

	return Clss;
}


// WBP_GeneralAcceptButton_C WBP_GeneralAcceptButton.Default__WBP_GeneralAcceptButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GeneralAcceptButton_C* UWBP_GeneralAcceptButton_C::GetDefaultObj()
{
	static class UWBP_GeneralAcceptButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GeneralAcceptButton_C*>(UWBP_GeneralAcceptButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GeneralAcceptButton.WBP_GeneralAcceptButton_C.Get_claimableglow_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_GeneralAcceptButton_C::Get_claimableglow_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GeneralAcceptButton_C", "Get_claimableglow_Visibility_0");

	Params::UWBP_GeneralAcceptButton_C_Get_claimableglow_Visibility_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GeneralAcceptButton.WBP_GeneralAcceptButton_C.BndEvt__WBP_GeneralAcceptButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GeneralAcceptButton_C::BndEvt__WBP_GeneralAcceptButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GeneralAcceptButton_C", "BndEvt__WBP_GeneralAcceptButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GeneralAcceptButton.WBP_GeneralAcceptButton_C.ExecuteUbergraph_WBP_GeneralAcceptButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GeneralAcceptButton_C::ExecuteUbergraph_WBP_GeneralAcceptButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GeneralAcceptButton_C", "ExecuteUbergraph_WBP_GeneralAcceptButton");

	Params::UWBP_GeneralAcceptButton_C_ExecuteUbergraph_WBP_GeneralAcceptButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GeneralAcceptButton.WBP_GeneralAcceptButton_C.Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GeneralAcceptButton_C::Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GeneralAcceptButton_C", "Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


