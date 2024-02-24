#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Skull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Skull_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Skull_C WBP_CC_DynamicSubPanel_Skull.Default__WBP_CC_DynamicSubPanel_Skull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Skull_C* UWBP_CC_DynamicSubPanel_Skull_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Skull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Skull_C*>(UWBP_CC_DynamicSubPanel_Skull_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Skull_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_Skull_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Skull_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Skull_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.InitializeSliders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::InitializeSliders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "InitializeSliders");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Skull_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Skull_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.BndEvt__WBP_CC_DynamicSubPanel_Skull_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::BndEvt__WBP_CC_DynamicSubPanel_Skull_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "BndEvt__WBP_CC_DynamicSubPanel_Skull_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.BndEvt__WBP_CC_DynamicSubPanel_Skull_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnRandomizeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::BndEvt__WBP_CC_DynamicSubPanel_Skull_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnRandomizeSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "BndEvt__WBP_CC_DynamicSubPanel_Skull_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnRandomizeSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Skull_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Skull.WBP_CC_DynamicSubPanel_Skull_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Skull
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_CC_sw_Morph2dSlider_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_CC_sw_Morph2dSlider_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UWBP_CC_sw_Morph2dSlider_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CC_sw_Morph2dSlider_C*  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Skull_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Skull(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, TArray<class UWBP_CC_sw_Morph2dSlider_C*>& K2Node_MakeArray_Array, TArray<class UWBP_CC_sw_Morph2dSlider_C*>& K2Node_MakeArray_Array_1, class UWBP_CC_sw_Morph2dSlider_C* CallFunc_Array_Get_Item, class UWBP_CC_sw_Morph2dSlider_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Skull_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Skull");

	Params::UWBP_CC_DynamicSubPanel_Skull_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Skull_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


