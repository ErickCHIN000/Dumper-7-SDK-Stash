#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C
// (None)

class UClass* UWBP_ConfirmationModalFinal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConfirmationModalFinal_C");

	return Clss;
}


// WBP_ConfirmationModalFinal_C WBP_ConfirmationModalFinal.Default__WBP_ConfirmationModalFinal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConfirmationModalFinal_C* UWBP_ConfirmationModalFinal_C::GetDefaultObj()
{
	static class UWBP_ConfirmationModalFinal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConfirmationModalFinal_C*>(UWBP_ConfirmationModalFinal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C.AddModalToViewport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConfirmationModalFinal_C::AddModalToViewport(const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalFinal_C", "AddModalToViewport");

	Params::UWBP_ConfirmationModalFinal_C_AddModalToViewport_Params Parms{};

	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ConfirmationModalFinal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalFinal_C", "PreConstruct");

	Params::UWBP_ConfirmationModalFinal_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C.BndEvt__WBP_ConfirmationModalFinal_YesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ConfirmationModalFinal_C::BndEvt__WBP_ConfirmationModalFinal_YesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalFinal_C", "BndEvt__WBP_ConfirmationModalFinal_YesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C.BndEvt__WBP_ConfirmationModalFinal_NoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ConfirmationModalFinal_C::BndEvt__WBP_ConfirmationModalFinal_NoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalFinal_C", "BndEvt__WBP_ConfirmationModalFinal_NoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C.ExecuteUbergraph_WBP_ConfirmationModalFinal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConfirmationModalFinal_C::ExecuteUbergraph_WBP_ConfirmationModalFinal(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalFinal_C", "ExecuteUbergraph_WBP_ConfirmationModalFinal");

	Params::UWBP_ConfirmationModalFinal_C_ExecuteUbergraph_WBP_ConfirmationModalFinal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C.ClickedNo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ConfirmationModalFinal_C::ClickedNo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalFinal_C", "ClickedNo__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationModalFinal.WBP_ConfirmationModalFinal_C.ClickedYes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ConfirmationModalFinal_C::ClickedYes__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalFinal_C", "ClickedYes__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


