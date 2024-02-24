#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MasteryList.WBP_MasteryList_C
// (None)

class UClass* UWBP_MasteryList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MasteryList_C");

	return Clss;
}


// WBP_MasteryList_C WBP_MasteryList.Default__WBP_MasteryList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MasteryList_C* UWBP_MasteryList_C::GetDefaultObj()
{
	static class UWBP_MasteryList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MasteryList_C*>(UWBP_MasteryList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MasteryList.WBP_MasteryList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MasteryList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryList.WBP_MasteryList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MasteryList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryList.WBP_MasteryList_C.OnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MasteryList_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryList.WBP_MasteryList_C.OnUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MasteryList_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryList.WBP_MasteryList_C.BndEvt__WBP_MasteryList_MasteryUniformRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MasteryList_C::BndEvt__WBP_MasteryList_MasteryUniformRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "BndEvt__WBP_MasteryList_MasteryUniformRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature");

	Params::UWBP_MasteryList_C_BndEvt__WBP_MasteryList_MasteryUniformRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MasteryList.WBP_MasteryList_C.Rebuild Mastery List
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MasteryList_C::Rebuild_Mastery_List()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "Rebuild Mastery List");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryList.WBP_MasteryList_C.UpdateMasteryProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MasteryList_C::UpdateMasteryProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "UpdateMasteryProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryList.WBP_MasteryList_C.UpdateLastSeenValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MasteryList_C::UpdateLastSeenValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "UpdateLastSeenValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MasteryList.WBP_MasteryList_C.ExecuteUbergraph_WBP_MasteryList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URadioButton*>        CallFunc_GetRadioButtonWidgets_ReturnValue                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MasteryItem_C*          K2Node_DynamicCast_AsWBP_Mastery_Item                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MasteryItem_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayerMastery*>      CallFunc_BPC_GetLocalMasteryLevels_ReturnValue                   (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPlayerMastery*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSettingOption              K2Node_MakeStruct_SettingOption                                  (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddRadioButton_outPanelSlot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            K2Node_DynamicCast_AsUniform_Grid_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UWBP_MasteryList_C::ExecuteUbergraph_WBP_MasteryList(int32 EntryPoint, TArray<class URadioButton*>& CallFunc_GetRadioButtonWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Value, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class URadioButton* CallFunc_Array_Get_Item, class UWBP_MasteryItem_C* K2Node_DynamicCast_AsWBP_Mastery_Item, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_MasteryItem_C* CallFunc_Create_ReturnValue, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UPlayerMastery*>& CallFunc_BPC_GetLocalMasteryLevels_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerMastery* CallFunc_Array_Get_Item_1, int32 CallFunc_Divide_IntInt_ReturnValue, const struct FSettingOption& K2Node_MakeStruct_SettingOption, int32 CallFunc_Percent_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddRadioButton_outPanelSlot, class UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MasteryList_C", "ExecuteUbergraph_WBP_MasteryList");

	Params::UWBP_MasteryList_C_ExecuteUbergraph_WBP_MasteryList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRadioButtonWidgets_ReturnValue = CallFunc_GetRadioButtonWidgets_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Mastery_Item = K2Node_DynamicCast_AsWBP_Mastery_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_BPC_GetLocalMasteryLevels_ReturnValue = CallFunc_BPC_GetLocalMasteryLevels_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SettingOption = K2Node_MakeStruct_SettingOption;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_AddRadioButton_outPanelSlot = CallFunc_AddRadioButton_outPanelSlot;
	Parms.K2Node_DynamicCast_AsUniform_Grid_Slot = K2Node_DynamicCast_AsUniform_Grid_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


