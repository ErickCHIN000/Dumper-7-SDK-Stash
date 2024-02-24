#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C
// (None)

class UClass* UWBP_NPC_Encounter_Escort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NPC_Encounter_Escort_C");

	return Clss;
}


// WBP_NPC_Encounter_Escort_C WBP_NPC_Encounter_Escort.Default__WBP_NPC_Encounter_Escort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NPC_Encounter_Escort_C* UWBP_NPC_Encounter_Escort_C::GetDefaultObj()
{
	static class UWBP_NPC_Encounter_Escort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NPC_Encounter_Escort_C*>(UWBP_NPC_Encounter_Escort_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C.BP_GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_NPC_Encounter_Escort_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Encounter_Escort_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_NPC_Encounter_Escort_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C.GetEncounterButtonToFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Encounter_Escort_C::GetEncounterButtonToFocus(class UWidget** Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Encounter_Escort_C", "GetEncounterButtonToFocus");

	Params::UWBP_NPC_Encounter_Escort_C_GetEncounterButtonToFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C.SetupMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NPC_Encounter_Escort_C::SetupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Encounter_Escort_C", "SetupMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C.BndEvt__WBP_NPC_Encounter_Escort_CBU_button_base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Encounter_Escort_C::BndEvt__WBP_NPC_Encounter_Escort_CBU_button_base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Encounter_Escort_C", "BndEvt__WBP_NPC_Encounter_Escort_CBU_button_base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_NPC_Encounter_Escort_C_BndEvt__WBP_NPC_Encounter_Escort_CBU_button_base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NPC_Encounter_Escort_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Encounter_Escort_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C.ExecuteUbergraph_WBP_NPC_Encounter_Escort
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_QuestGiverComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UEncounterProgressTracker*   CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterDynamicData>CallFunc_GetAllDynamicData_OutData                               (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_NPC_C*          K2Node_DynamicCast_AsBP_Creature_NPC_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNPCNameText_NPCName                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterDynamicData       CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_EncounterDetailsDataAsset_C*K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterProgressTracker*   CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_NPC_Encounter_Escort_C::ExecuteUbergraph_WBP_NPC_Encounter_Escort(int32 EntryPoint, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_GuidToString_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC_1, bool K2Node_DynamicCast_bSuccess_1, class UBP_QuestGiverComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FEncounterDynamicData>& CallFunc_GetAllDynamicData_OutData, bool CallFunc_IsValid_ReturnValue_1, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC_2, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetNPCNameText_NPCName, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FEncounterDynamicData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UDA_EncounterDetailsDataAsset_C* K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue_3, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Encounter_Escort_C", "ExecuteUbergraph_WBP_NPC_Encounter_Escort");

	Params::UWBP_NPC_Encounter_Escort_C_ExecuteUbergraph_WBP_NPC_Encounter_Escort_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC = K2Node_DynamicCast_AsBP_Creature_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_1 = K2Node_DynamicCast_AsBP_Creature_NPC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllDynamicData_OutData = CallFunc_GetAllDynamicData_OutData;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_NPC_2 = K2Node_DynamicCast_AsBP_Creature_NPC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetNPCNameText_NPCName = CallFunc_GetNPCNameText_NPCName;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset = K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C.On Encounter Interaction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NPC_Encounter_Escort_C::On_Encounter_Interaction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NPC_Encounter_Escort_C", "On Encounter Interaction__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


