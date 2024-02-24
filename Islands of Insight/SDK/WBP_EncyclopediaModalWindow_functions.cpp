#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncyclopediaModalWindow.WBP_EncyclopediaModalWindow_C
// (None)

class UClass* UWBP_EncyclopediaModalWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncyclopediaModalWindow_C");

	return Clss;
}


// WBP_EncyclopediaModalWindow_C WBP_EncyclopediaModalWindow.Default__WBP_EncyclopediaModalWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncyclopediaModalWindow_C* UWBP_EncyclopediaModalWindow_C::GetDefaultObj()
{
	static class UWBP_EncyclopediaModalWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncyclopediaModalWindow_C*>(UWBP_EncyclopediaModalWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EncyclopediaModalWindow.WBP_EncyclopediaModalWindow_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_EncyclopediaModalWindow_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaModalWindow_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncyclopediaModalWindow.WBP_EncyclopediaModalWindow_C.BndEvt__WBP_EncyclopediaModalWindow_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_EncyclopediaModalWindow_C::BndEvt__WBP_EncyclopediaModalWindow_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaModalWindow_C", "BndEvt__WBP_EncyclopediaModalWindow_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncyclopediaModalWindow.WBP_EncyclopediaModalWindow_C.Build
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EncyclopediaModalWindow_C::Build()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaModalWindow_C", "Build");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncyclopediaModalWindow.WBP_EncyclopediaModalWindow_C.ExecuteUbergraph_WBP_EncyclopediaModalWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInsight*                    K2Node_DynamicCast_AsInsight                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UObject*                     CallFunc_GetBrushResource_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncyclopediaModalWindow_C::ExecuteUbergraph_WBP_EncyclopediaModalWindow(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UInsight* K2Node_DynamicCast_AsInsight, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaModalWindow_C", "ExecuteUbergraph_WBP_EncyclopediaModalWindow");

	Params::UWBP_EncyclopediaModalWindow_C_ExecuteUbergraph_WBP_EncyclopediaModalWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsInsight = K2Node_DynamicCast_AsInsight;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetBrushResource_ReturnValue = CallFunc_GetBrushResource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


