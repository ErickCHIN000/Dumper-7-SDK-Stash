#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncyclopediaLoreModalWindow.WBP_EncyclopediaLoreModalWindow_C
// (None)

class UClass* UWBP_EncyclopediaLoreModalWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncyclopediaLoreModalWindow_C");

	return Clss;
}


// WBP_EncyclopediaLoreModalWindow_C WBP_EncyclopediaLoreModalWindow.Default__WBP_EncyclopediaLoreModalWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncyclopediaLoreModalWindow_C* UWBP_EncyclopediaLoreModalWindow_C::GetDefaultObj()
{
	static class UWBP_EncyclopediaLoreModalWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncyclopediaLoreModalWindow_C*>(UWBP_EncyclopediaLoreModalWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EncyclopediaLoreModalWindow.WBP_EncyclopediaLoreModalWindow_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_EncyclopediaLoreModalWindow_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaLoreModalWindow_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncyclopediaLoreModalWindow.WBP_EncyclopediaLoreModalWindow_C.BndEvt__WBP_EncyclopediaModalWindow_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_EncyclopediaLoreModalWindow_C::BndEvt__WBP_EncyclopediaModalWindow_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaLoreModalWindow_C", "BndEvt__WBP_EncyclopediaModalWindow_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncyclopediaLoreModalWindow.WBP_EncyclopediaLoreModalWindow_C.Build
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EncyclopediaLoreModalWindow_C::Build()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaLoreModalWindow_C", "Build");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncyclopediaLoreModalWindow.WBP_EncyclopediaLoreModalWindow_C.ExecuteUbergraph_WBP_EncyclopediaLoreModalWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULore*                       K2Node_DynamicCast_AsLore                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSubtitleInfo               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ExcyclopediaLoreText_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncyclopediaLoreModalWindow_C::ExecuteUbergraph_WBP_EncyclopediaLoreModalWindow(int32 EntryPoint, class ULore* K2Node_DynamicCast_AsLore, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FSubtitleInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_ExcyclopediaLoreText_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncyclopediaLoreModalWindow_C", "ExecuteUbergraph_WBP_EncyclopediaLoreModalWindow");

	Params::UWBP_EncyclopediaLoreModalWindow_C_ExecuteUbergraph_WBP_EncyclopediaLoreModalWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsLore = K2Node_DynamicCast_AsLore;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


