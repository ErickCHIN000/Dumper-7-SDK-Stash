#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TotemNavigator.WBP_TotemNavigator_C
// (None)

class UClass* UWBP_TotemNavigator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TotemNavigator_C");

	return Clss;
}


// WBP_TotemNavigator_C WBP_TotemNavigator.Default__WBP_TotemNavigator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TotemNavigator_C* UWBP_TotemNavigator_C::GetDefaultObj()
{
	static class UWBP_TotemNavigator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TotemNavigator_C*>(UWBP_TotemNavigator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemNavigator_C::BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemNavigator_C::BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemNavigator_C::BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.BPI_Resize
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TotemNavigator_C::BPI_Resize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "BPI_Resize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemNavigator_C::BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemNavigator_C::BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "BndEvt__WBP_TotemNavigator_ArrowUpButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TotemNavigator_C::BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "BndEvt__WBP_TotemNavigator_ArrowDownButton_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TotemNavigator.WBP_TotemNavigator_C.ExecuteUbergraph_WBP_TotemNavigator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpArrowInteractable_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpArrowInteractable_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpArrowInteractable_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDownArrowInteractable_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDownArrowInteractable_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDownArrowInteractable_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TotemNavigator_C::ExecuteUbergraph_WBP_TotemNavigator(int32 EntryPoint, bool CallFunc_IsUpArrowInteractable_ReturnValue, bool CallFunc_IsUpArrowInteractable_ReturnValue_1, bool CallFunc_IsUpArrowInteractable_ReturnValue_2, bool CallFunc_IsDownArrowInteractable_ReturnValue, bool CallFunc_IsDownArrowInteractable_ReturnValue_1, bool CallFunc_IsDownArrowInteractable_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TotemNavigator_C", "ExecuteUbergraph_WBP_TotemNavigator");

	Params::UWBP_TotemNavigator_C_ExecuteUbergraph_WBP_TotemNavigator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUpArrowInteractable_ReturnValue = CallFunc_IsUpArrowInteractable_ReturnValue;
	Parms.CallFunc_IsUpArrowInteractable_ReturnValue_1 = CallFunc_IsUpArrowInteractable_ReturnValue_1;
	Parms.CallFunc_IsUpArrowInteractable_ReturnValue_2 = CallFunc_IsUpArrowInteractable_ReturnValue_2;
	Parms.CallFunc_IsDownArrowInteractable_ReturnValue = CallFunc_IsDownArrowInteractable_ReturnValue;
	Parms.CallFunc_IsDownArrowInteractable_ReturnValue_1 = CallFunc_IsDownArrowInteractable_ReturnValue_1;
	Parms.CallFunc_IsDownArrowInteractable_ReturnValue_2 = CallFunc_IsDownArrowInteractable_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


