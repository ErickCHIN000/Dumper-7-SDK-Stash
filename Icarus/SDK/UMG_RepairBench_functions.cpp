#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RepairBench.UMG_RepairBench_C
// (None)

class UClass* UUMG_RepairBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RepairBench_C");

	return Clss;
}


// UMG_RepairBench_C UMG_RepairBench.Default__UMG_RepairBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RepairBench_C* UUMG_RepairBench_C::GetDefaultObj()
{
	static class UUMG_RepairBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RepairBench_C*>(UUMG_RepairBench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RepairBench.UMG_RepairBench_C.FilteredRepair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UInventory*>          Inventories                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// class UItemManipulationComponent*  IPCManipulation_Ref                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*BPIcarusPlayerController_Ref                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     PlayerController_Ref                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      PlayerCharacter_Ref                                              (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Repair_Bench_C*          RepairBench_Ref                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQueueItem>          StackedConsumedMaterials                                         (Edit, BlueprintVisible)
// TArray<struct FRepairableItem>     CantRepairPower                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FRepairableItem>     CantRepair                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FRepairableItem>     CanRepair                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FQueueItem>          PlayerMaterials                                                  (Edit, BlueprintVisible)
// TArray<struct FRepairableItem>     RepairList_                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FQueueItem>          K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManipulationComponent*  CallFunc_GetItemManipulationComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RepairBench_ConfirmRepair_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Repair_Bench_C*          K2Node_DynamicCast_AsBP_Repair_Bench                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPoweredIndicator_IsPowered                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepairableItem             CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UUMG_RepairBench_C::FilteredRepair(const TArray<class UInventory*>& Inventories, class UItemManipulationComponent* IPCManipulation_Ref, class ABP_IcarusPlayerControllerSurvival_C* BPIcarusPlayerController_Ref, class AIcarusPlayerController* PlayerController_Ref, class AIcarusPlayerCharacter* PlayerCharacter_Ref, class ABP_Repair_Bench_C* RepairBench_Ref, const TArray<struct FQueueItem>& StackedConsumedMaterials, const TArray<struct FRepairableItem>& CantRepairPower, const TArray<struct FRepairableItem>& CantRepair, const TArray<struct FRepairableItem>& CanRepair, const TArray<struct FQueueItem>& PlayerMaterials, const TArray<struct FRepairableItem>& RepairList_, TArray<struct FQueueItem>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UItemManipulationComponent* CallFunc_GetItemManipulationComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_Create_ReturnValue, class UUMG_RepairBench_ConfirmRepair_C* CallFunc_Create_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class ABP_Repair_Bench_C* K2Node_DynamicCast_AsBP_Repair_Bench, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CheckPoweredIndicator_IsPowered, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FRepairableItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "FilteredRepair");

	Params::UUMG_RepairBench_C_FilteredRepair_Params Parms{};

	Parms.Inventories = Inventories;
	Parms.IPCManipulation_Ref = IPCManipulation_Ref;
	Parms.BPIcarusPlayerController_Ref = BPIcarusPlayerController_Ref;
	Parms.PlayerController_Ref = PlayerController_Ref;
	Parms.PlayerCharacter_Ref = PlayerCharacter_Ref;
	Parms.RepairBench_Ref = RepairBench_Ref;
	Parms.StackedConsumedMaterials = StackedConsumedMaterials;
	Parms.CantRepairPower = CantRepairPower;
	Parms.CantRepair = CantRepair;
	Parms.CanRepair = CanRepair;
	Parms.PlayerMaterials = PlayerMaterials;
	Parms.RepairList_ = RepairList_;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetItemManipulationComponent_ReturnValue = CallFunc_GetItemManipulationComponent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Repair_Bench = K2Node_DynamicCast_AsBP_Repair_Bench;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CheckPoweredIndicator_IsPowered = CallFunc_CheckPoweredIndicator_IsPowered;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue = CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid = CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.UpdateItemVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckPoweredIndicator_IsPowered                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckShelteredIndicator_IsSheltered                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::UpdateItemVisibility(bool CallFunc_CheckPoweredIndicator_IsPowered, bool CallFunc_CheckShelteredIndicator_IsSheltered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "UpdateItemVisibility");

	Params::UUMG_RepairBench_C_UpdateItemVisibility_Params Parms{};

	Parms.CallFunc_CheckPoweredIndicator_IsPowered = CallFunc_CheckPoweredIndicator_IsPowered;
	Parms.CallFunc_CheckShelteredIndicator_IsSheltered = CallFunc_CheckShelteredIndicator_IsSheltered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.UpdateButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasPower                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasShelter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::UpdateButtonVisibility(bool HasPower, bool HasShelter, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "UpdateButtonVisibility");

	Params::UUMG_RepairBench_C_UpdateButtonVisibility_Params Parms{};

	Parms.HasPower = HasPower;
	Parms.HasShelter = HasShelter;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.ItemIsDamagedEnough
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               DamagedEnough                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DamagePercentForRepair                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalItemDurabilityThreshold                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDurableData                CallFunc_GetDurableStruct_Durable                                (None)
// enum class EValid                  CallFunc_GetDurableStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::ItemIsDamagedEnough(const struct FItemData& Item, bool* DamagedEnough, float DamagePercentForRepair, float LocalItemDurabilityThreshold, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FDurableData& CallFunc_GetDurableStruct_Durable, enum class EValid CallFunc_GetDurableStruct_Paths, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "ItemIsDamagedEnough");

	Params::UUMG_RepairBench_C_ItemIsDamagedEnough_Params Parms{};

	Parms.Item = Item;
	Parms.DamagePercentForRepair = DamagePercentForRepair;
	Parms.LocalItemDurabilityThreshold = LocalItemDurabilityThreshold;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetDurableStruct_Durable = CallFunc_GetDurableStruct_Durable;
	Parms.CallFunc_GetDurableStruct_Paths = CallFunc_GetDurableStruct_Paths;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DamagedEnough != nullptr)
		*DamagedEnough = Parms.DamagedEnough;

}


// Function UMG_RepairBench.UMG_RepairBench_C.ShowPoweredIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasPower                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::ShowPoweredIndicator(bool HasPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "ShowPoweredIndicator");

	Params::UUMG_RepairBench_C_ShowPoweredIndicator_Params Parms{};

	Parms.HasPower = HasPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.CheckPoweredIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPowered                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Repair_Bench_C*          K2Node_DynamicCast_AsBP_Repair_Bench                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::CheckPoweredIndicator(bool* IsPowered, class ABP_Repair_Bench_C* K2Node_DynamicCast_AsBP_Repair_Bench, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "CheckPoweredIndicator");

	Params::UUMG_RepairBench_C_CheckPoweredIndicator_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Repair_Bench = K2Node_DynamicCast_AsBP_Repair_Bench;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPowered != nullptr)
		*IsPowered = Parms.IsPowered;

}


// Function UMG_RepairBench.UMG_RepairBench_C.ShowShelteredIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sheltered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::ShowShelteredIndicator(bool Sheltered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "ShowShelteredIndicator");

	Params::UUMG_RepairBench_C_ShowShelteredIndicator_Params Parms{};

	Parms.Sheltered = Sheltered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.CheckShelteredIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSheltered                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Repair_Bench_C*          K2Node_DynamicCast_AsBP_Repair_Bench                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIcarusDeployableRepairInterface>CallFunc_RepairHasShelter_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RepairHasShelter_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::CheckShelteredIndicator(bool* IsSheltered, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_Repair_Bench_C* K2Node_DynamicCast_AsBP_Repair_Bench, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIcarusDeployableRepairInterface> CallFunc_RepairHasShelter_self_CastInput, bool CallFunc_RepairHasShelter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "CheckShelteredIndicator");

	Params::UUMG_RepairBench_C_CheckShelteredIndicator_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Repair_Bench = K2Node_DynamicCast_AsBP_Repair_Bench;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RepairHasShelter_self_CastInput = CallFunc_RepairHasShelter_self_CastInput;
	Parms.CallFunc_RepairHasShelter_ReturnValue = CallFunc_RepairHasShelter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSheltered != nullptr)
		*IsSheltered = Parms.IsSheltered;

}


// Function UMG_RepairBench.UMG_RepairBench_C.RepairItemsInInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Armor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  Inventory_Ref                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     PlayerController_Ref                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      PlayerCharacter_Ref                                              (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Repair_Bench_C*          RepairBenchBP_Ref                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManipulationComponent*  CallFunc_GetItemManipulationComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventorySlot              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECanUseItemResult       CallFunc_CanUseItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemIsDamagedEnough_DamagedEnough                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RepairItemIsArmour_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIcarusDeployableRepairInterface>CallFunc_CanRepairItem_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanRepairItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIcarusDeployableRepairInterface>CallFunc_RepairHasShelter_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RepairHasShelter_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Repair_Bench_C*          K2Node_DynamicCast_AsBP_Repair_Bench                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::RepairItemsInInventory(class UInventory* Inventory, bool Armor, class UInventory* Inventory_Ref, class AIcarusPlayerController* PlayerController_Ref, class AIcarusPlayerCharacter* PlayerCharacter_Ref, class ABP_Repair_Bench_C* RepairBenchBP_Ref, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class UItemManipulationComponent* CallFunc_GetItemManipulationComponent_ReturnValue, const struct FInventorySlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ECanUseItemResult CallFunc_CanUseItem_ReturnValue, bool CallFunc_ItemIsDamagedEnough_DamagedEnough, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_RepairItemIsArmour_ReturnValue, TScriptInterface<class IIcarusDeployableRepairInterface> CallFunc_CanRepairItem_self_CastInput, bool CallFunc_CanRepairItem_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IIcarusDeployableRepairInterface> CallFunc_RepairHasShelter_self_CastInput, bool CallFunc_RepairHasShelter_ReturnValue, class ABP_Repair_Bench_C* K2Node_DynamicCast_AsBP_Repair_Bench, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "RepairItemsInInventory");

	Params::UUMG_RepairBench_C_RepairItemsInInventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Armor = Armor;
	Parms.Inventory_Ref = Inventory_Ref;
	Parms.PlayerController_Ref = PlayerController_Ref;
	Parms.PlayerCharacter_Ref = PlayerCharacter_Ref;
	Parms.RepairBenchBP_Ref = RepairBenchBP_Ref;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetItemManipulationComponent_ReturnValue = CallFunc_GetItemManipulationComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CanUseItem_ReturnValue = CallFunc_CanUseItem_ReturnValue;
	Parms.CallFunc_ItemIsDamagedEnough_DamagedEnough = CallFunc_ItemIsDamagedEnough_DamagedEnough;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_RepairItemIsArmour_ReturnValue = CallFunc_RepairItemIsArmour_ReturnValue;
	Parms.CallFunc_CanRepairItem_self_CastInput = CallFunc_CanRepairItem_self_CastInput;
	Parms.CallFunc_CanRepairItem_ReturnValue = CallFunc_CanRepairItem_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RepairHasShelter_self_CastInput = CallFunc_RepairHasShelter_self_CastInput;
	Parms.CallFunc_RepairHasShelter_ReturnValue = CallFunc_RepairHasShelter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Repair_Bench = K2Node_DynamicCast_AsBP_Repair_Bench;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.LinkedActorDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RepairBench_C::LinkedActorDestroyed(class AActor* DestroyedActor, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "LinkedActorDestroyed");

	Params::UUMG_RepairBench_C_LinkedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.SetupObjectInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  ContainerInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUMG_RepairBench_C::SetupObjectInventory(class UInventory* ContainerInventory, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "SetupObjectInventory");

	Params::UUMG_RepairBench_C_SetupObjectInventory_Params Parms{};

	Parms.ContainerInventory = ContainerInventory;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RepairBench_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_RepairBench_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RepairBench_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RepairBench.UMG_RepairBench_C.BndEvt__UMG_RepairBench_ButtonRepair_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RepairBench_C::BndEvt__UMG_RepairBench_ButtonRepair_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "BndEvt__UMG_RepairBench_ButtonRepair_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_RepairBench_C_BndEvt__UMG_RepairBench_ButtonRepair_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RepairBench_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "Tick");

	Params::UUMG_RepairBench_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.BndEvt__UMG_RepairBench_RepairWorkshop_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RepairBench_C::BndEvt__UMG_RepairBench_RepairWorkshop_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "BndEvt__UMG_RepairBench_RepairWorkshop_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_RepairBench_C_BndEvt__UMG_RepairBench_RepairWorkshop_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.BndEvt__UMG_RepairBench_RepairArmor_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RepairBench_C::BndEvt__UMG_RepairBench_RepairArmor_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "BndEvt__UMG_RepairBench_RepairArmor_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUMG_RepairBench_C_BndEvt__UMG_RepairBench_RepairArmor_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.AttemptRepair
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bArmor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bWorkshopOnly                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bExcludeWorkshop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UInventory*>          Inventories                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UUMG_RepairBench_C::AttemptRepair(bool bArmor, bool bWorkshopOnly, bool bExcludeWorkshop, TArray<class UInventory*>& Inventories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "AttemptRepair");

	Params::UUMG_RepairBench_C_AttemptRepair_Params Parms{};

	Parms.bArmor = bArmor;
	Parms.bWorkshopOnly = bWorkshopOnly;
	Parms.bExcludeWorkshop = bExcludeWorkshop;
	Parms.Inventories = Inventories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench.UMG_RepairBench_C.PerformRepair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RepairBench_C::PerformRepair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "PerformRepair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RepairBench.UMG_RepairBench_C.AbortRepair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RepairBench_C::AbortRepair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "AbortRepair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RepairBench.UMG_RepairBench_C.ExecuteUbergraph_UMG_RepairBench
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RepairBench_ConfirmRepair_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepairableItem             CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Repair_Bench_C*          K2Node_DynamicCast_AsBP_Repair_Bench                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRepairableItem             CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class UItemManipulationComponent*  CallFunc_GetItemManipulationComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPoweredIndicator_IsPowered                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECanUseItemResult       CallFunc_CanUseItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQueueItem>          K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_bArmor                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bWorkshopOnly                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bExcludeWorkshop                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UInventory*>          K2Node_CustomEvent_Inventories                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UInventory*>          CallFunc_Map_Values_Values_1                                     (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UInventory*>          CallFunc_Map_Values_Values_2                                     (ReferenceParm, ContainsInstancedReference)

void UUMG_RepairBench_C::ExecuteUbergraph_UMG_RepairBench(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, int32 Temp_int_Array_Index_Variable, class UUMG_RepairBench_ConfirmRepair_C* CallFunc_Create_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue_1, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRepairableItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_Repair_Bench_C* K2Node_DynamicCast_AsBP_Repair_Bench, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Array_Index_Variable_1, const struct FRepairableItem& CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class UItemManipulationComponent* CallFunc_GetItemManipulationComponent_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_CheckPoweredIndicator_IsPowered, enum class ECanUseItemResult CallFunc_CanUseItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<struct FQueueItem>& K2Node_MakeArray_Array_1, bool K2Node_CustomEvent_bArmor, bool K2Node_CustomEvent_bWorkshopOnly, bool K2Node_CustomEvent_bExcludeWorkshop, TArray<class UInventory*>& K2Node_CustomEvent_Inventories, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_2, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_2, TArray<class UInventory*>& CallFunc_Map_Values_Values, TArray<class UInventory*>& CallFunc_Map_Values_Values_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_3, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_4, TArray<class UInventory*>& CallFunc_Map_Values_Values_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_C", "ExecuteUbergraph_UMG_RepairBench");

	Params::UUMG_RepairBench_C_ExecuteUbergraph_UMG_RepairBench_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue = CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid = CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Repair_Bench = K2Node_DynamicCast_AsBP_Repair_Bench;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetItemManipulationComponent_ReturnValue = CallFunc_GetItemManipulationComponent_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_CheckPoweredIndicator_IsPowered = CallFunc_CheckPoweredIndicator_IsPowered;
	Parms.CallFunc_CanUseItem_ReturnValue = CallFunc_CanUseItem_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_bArmor = K2Node_CustomEvent_bArmor;
	Parms.K2Node_CustomEvent_bWorkshopOnly = K2Node_CustomEvent_bWorkshopOnly;
	Parms.K2Node_CustomEvent_bExcludeWorkshop = K2Node_CustomEvent_bExcludeWorkshop;
	Parms.K2Node_CustomEvent_Inventories = K2Node_CustomEvent_Inventories;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid_1 = CallFunc_GetIcarusPlayerCharacter_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_1 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid_2 = CallFunc_GetIcarusPlayerCharacter_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_2 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid_3 = CallFunc_GetIcarusPlayerCharacter_IsValid_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue_3 = CallFunc_GetIcarusPlayerCharacter_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Map_Values_Values_2 = CallFunc_Map_Values_Values_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


