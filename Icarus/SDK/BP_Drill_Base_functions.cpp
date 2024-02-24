#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Drill_Base.BP_Drill_Base_C
// (Actor)

class UClass* ABP_Drill_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Drill_Base_C");

	return Clss;
}


// BP_Drill_Base_C BP_Drill_Base.Default__BP_Drill_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Drill_Base_C* ABP_Drill_Base_C::GetDefaultObj()
{
	static class ABP_Drill_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Drill_Base_C*>(ABP_Drill_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Drill_Base.BP_Drill_Base_C.SaveDrillData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDrillSaveData              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// struct FDrillSaveData              K2Node_MakeStruct_DrillSaveData                                  (NoDestructor)

struct FDrillSaveData ABP_Drill_Base_C::SaveDrillData(const struct FDrillSaveData& K2Node_MakeStruct_DrillSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "SaveDrillData");

	Params::ABP_Drill_Base_C_SaveDrillData_Params Parms{};

	Parms.K2Node_MakeStruct_DrillSaveData = K2Node_MakeStruct_DrillSaveData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Drill_Base.BP_Drill_Base_C.ConditionalEnergyDrillRestart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace(ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnergyComponent*            CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::ConditionalEnergyDrillRestart(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining, bool CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "ConditionalEnergyDrillRestart");

	Params::ABP_Drill_Base_C_ConditionalEnergyDrillRestart_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining = CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining;
	Parms.CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace = CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.ConditionalGeneratorDrillRestart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::ConditionalGeneratorDrillRestart(enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "ConditionalGeneratorDrillRestart");

	Params::ABP_Drill_Base_C_ConditionalGeneratorDrillRestart_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace = CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace;
	Parms.CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining = CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.HasAnyRemainingInventorySpaceForOre
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasAnyRemainingSpace                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_OreDeposit_C*            K2Node_DynamicCast_AsBP_Ore_Deposit                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOreDeposit                 CallFunc_GetOreDepositStruct_OreDeposit                          (None)
// enum class EValid                  CallFunc_GetOreDepositStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_CreateItem_ReturnValue                                  (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckAutoPlacement_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::HasAnyRemainingInventorySpaceForOre(bool* HasAnyRemainingSpace, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, const struct FItemData& CallFunc_CreateItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CheckAutoPlacement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "HasAnyRemainingInventorySpaceForOre");

	Params::ABP_Drill_Base_C_HasAnyRemainingInventorySpaceForOre_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Ore_Deposit = K2Node_DynamicCast_AsBP_Ore_Deposit;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOreDepositStruct_OreDeposit = CallFunc_GetOreDepositStruct_OreDeposit;
	Parms.CallFunc_GetOreDepositStruct_Paths = CallFunc_GetOreDepositStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.CallFunc_CreateItem_ReturnValue = CallFunc_CreateItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CheckAutoPlacement_ReturnValue = CallFunc_CheckAutoPlacement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAnyRemainingSpace != nullptr)
		*HasAnyRemainingSpace = Parms.HasAnyRemainingSpace;

}


// Function BP_Drill_Base.BP_Drill_Base_C.SetDrillActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::SetDrillActive(bool Active, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "SetDrillActive");

	Params::ABP_Drill_Base_C_SetDrillActive_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.UpdateMiningRateFromResourceType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_OreDeposit_C*            K2Node_DynamicCast_AsBP_Ore_Deposit                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOreDeposit                 CallFunc_GetOreDepositStruct_OreDeposit                          (None)
// enum class EValid                  CallFunc_GetOreDepositStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Drill_Base_C::UpdateMiningRateFromResourceType(int32 CallFunc_GetStat_ReturnValue, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "UpdateMiningRateFromResourceType");

	Params::ABP_Drill_Base_C_UpdateMiningRateFromResourceType_Params Parms{};

	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Ore_Deposit = K2Node_DynamicCast_AsBP_Ore_Deposit;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOreDepositStruct_OreDeposit = CallFunc_GetOreDepositStruct_OreDeposit;
	Parms.CallFunc_GetOreDepositStruct_Paths = CallFunc_GetOreDepositStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.HasAnyResourcesRemaining
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasResourcesRemaining                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_OreDeposit_C*            K2Node_DynamicCast_AsBP_Ore_Deposit                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::HasAnyResourcesRemaining(bool* HasResourcesRemaining, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "HasAnyResourcesRemaining");

	Params::ABP_Drill_Base_C_HasAnyResourcesRemaining_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Ore_Deposit = K2Node_DynamicCast_AsBP_Ore_Deposit;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasResourcesRemaining != nullptr)
		*HasResourcesRemaining = Parms.HasResourcesRemaining;

}


// Function BP_Drill_Base.BP_Drill_Base_C.PlayGenerateItemSFX
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::PlayGenerateItemSFX(const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "PlayGenerateItemSFX");

	Params::ABP_Drill_Base_C_PlayGenerateItemSFX_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.GenerateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTemplateRowHandle      Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateRowHandle      Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateRowHandle      Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateRowHandle      Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateRowHandle      Temp_struct_Variable_4                                           (NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UExtractionSubsystem*        CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateRowHandle      Temp_struct_Variable_5                                           (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExtractionSubsystem*        CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemTemplateRowHandle      K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_CreateItem_ReturnValue                                  (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AutomaticallyPlaceItem_PlacedLocation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutomaticallyPlaceItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_OreDeposit_C*            K2Node_DynamicCast_AsBP_Ore_Deposit                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOreDeposit                 CallFunc_GetOreDepositStruct_OreDeposit                          (None)
// enum class EValid                  CallFunc_GetOreDepositStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate_1                    (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_CreateItem_ReturnValue_1                                (ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AutomaticallyPlaceItem_PlacedLocation_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutomaticallyPlaceItem_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::GenerateItem(bool Success, const struct FItemTemplateRowHandle& Temp_struct_Variable, const struct FItemTemplateRowHandle& Temp_struct_Variable_1, const struct FItemTemplateRowHandle& Temp_struct_Variable_2, const struct FItemTemplateRowHandle& Temp_struct_Variable_3, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, const struct FItemTemplateRowHandle& Temp_struct_Variable_4, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UExtractionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FItemTemplateRowHandle& Temp_struct_Variable_5, int32 Temp_int_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UExtractionSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FItemTemplateRowHandle& K2Node_Select_Default, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_CreateItem_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation, bool CallFunc_AutomaticallyPlaceItem_ReturnValue, int32 Temp_int_Variable_1, class ABP_OreDeposit_C* K2Node_DynamicCast_AsBP_Ore_Deposit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue, const struct FOreDeposit& CallFunc_GetOreDepositStruct_OreDeposit, enum class EValid CallFunc_GetOreDepositStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_1, enum class EValid CallFunc_GetItemTemplateStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FItemData& CallFunc_CreateItem_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation_1, bool CallFunc_AutomaticallyPlaceItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "GenerateItem");

	Params::ABP_Drill_Base_C_GenerateItem_Params Parms{};

	Parms.Success = Success;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CreateItem_ReturnValue = CallFunc_CreateItem_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_AutomaticallyPlaceItem_PlacedLocation = CallFunc_AutomaticallyPlaceItem_PlacedLocation;
	Parms.CallFunc_AutomaticallyPlaceItem_ReturnValue = CallFunc_AutomaticallyPlaceItem_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_Ore_Deposit = K2Node_DynamicCast_AsBP_Ore_Deposit;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue = CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue;
	Parms.CallFunc_GetOreDepositStruct_OreDeposit = CallFunc_GetOreDepositStruct_OreDeposit;
	Parms.CallFunc_GetOreDepositStruct_Paths = CallFunc_GetOreDepositStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate_1 = CallFunc_GetItemTemplateStruct_ItemTemplate_1;
	Parms.CallFunc_GetItemTemplateStruct_Paths_1 = CallFunc_GetItemTemplateStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_CreateItem_ReturnValue_1 = CallFunc_CreateItem_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AutomaticallyPlaceItem_PlacedLocation_1 = CallFunc_AutomaticallyPlaceItem_PlacedLocation_1;
	Parms.CallFunc_AutomaticallyPlaceItem_ReturnValue_1 = CallFunc_AutomaticallyPlaceItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::OnRep_IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnRep_IsActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.ActiveStateUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::ActiveStateUpdated(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "ActiveStateUpdated");

	Params::ABP_Drill_Base_C_ActiveStateUpdated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusCharacter*            K2Node_DynamicCast_AsIcarus_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::Deployable_Interact(class AActor* Interactor, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "Deployable_Interact");

	Params::ABP_Drill_Base_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsIcarus_Character = K2Node_DynamicCast_AsIcarus_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnEnergyStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::OnEnergyStateUpdated(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnEnergyStateUpdated");

	Params::ABP_Drill_Base_C_OnEnergyStateUpdated_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnGeneratorActiveStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::OnGeneratorActiveStateUpdated(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnGeneratorActiveStateUpdated");

	Params::ABP_Drill_Base_C_OnGeneratorActiveStateUpdated_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.MULTI_PlayGenerateItemFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::MULTI_PlayGenerateItemFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "MULTI_PlayGenerateItemFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnOutOfResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::OnOutOfResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnOutOfResources");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnOutOfInventorySpace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::OnOutOfInventorySpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnOutOfInventorySpace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnGainedInventorySpace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::OnGainedInventorySpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnGainedInventorySpace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.RestartDrill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::RestartDrill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "RestartDrill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.ShutdownDrill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Drill_Base_C::ShutdownDrill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "ShutdownDrill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnInventoryModified
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Drill_Base_C::OnInventoryModified(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnInventoryModified");

	Params::ABP_Drill_Base_C_OnInventoryModified_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.LoadDrillData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDrillSaveData              DrillData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_Drill_Base_C::LoadDrillData(struct FDrillSaveData& DrillData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "LoadDrillData");

	Params::ABP_Drill_Base_C_LoadDrillData_Params Parms{};

	Parms.DrillData = DrillData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.OnRestoreFoundationFromDatabase
// (Event, Public, BlueprintEvent)
// Parameters:
// class AIcarusActor*                FoundationFromDatabase                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Drill_Base_C::OnRestoreFoundationFromDatabase(class AIcarusActor* FoundationFromDatabase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "OnRestoreFoundationFromDatabase");

	Params::ABP_Drill_Base_C_OnRestoreFoundationFromDatabase_Params Parms{};

	Parms.FoundationFromDatabase = FoundationFromDatabase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.DeployableTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Drill_Base_C::DeployableTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "DeployableTick");

	Params::ABP_Drill_Base_C_DeployableTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Drill_Base.BP_Drill_Base_C.ExecuteUbergraph_BP_Drill_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsActive                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsActive_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnergyComponent*            CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnergyComponent*            CallFunc_GetTrait_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActivateResourceComponent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_1        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_2        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActivateGenerator_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_3        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_4                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDrillSaveData              K2Node_Event_DrillData                                           (ConstParm, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                K2Node_Event_FoundationFromDatabase                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Drill_Base_C::ExecuteUbergraph_BP_Drill_Base(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_IsActive, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_IsActive_1, enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining, enum class EValid CallFunc_GetTrait_Paths_2, class UEnergyComponent* CallFunc_GetTrait_ReturnValue_2, bool CallFunc_ActivateResourceComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_2, bool CallFunc_Not_PreBool_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_3, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_3, bool CallFunc_ActivateGenerator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_Greater_FloatFloat_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_3, bool CallFunc_BooleanAND_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_4, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_4, const struct FDrillSaveData& K2Node_Event_DrillData, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, class AIcarusActor* K2Node_Event_FoundationFromDatabase, bool CallFunc_IsServer_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Drill_Base_C", "ExecuteUbergraph_BP_Drill_Base");

	Params::ABP_Drill_Base_C_ExecuteUbergraph_BP_Drill_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_IsActive = K2Node_Event_IsActive;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_IsActive_1 = K2Node_Event_IsActive_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining = CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining;
	Parms.CallFunc_GetTrait_Paths_2 = CallFunc_GetTrait_Paths_2;
	Parms.CallFunc_GetTrait_ReturnValue_2 = CallFunc_GetTrait_ReturnValue_2;
	Parms.CallFunc_ActivateResourceComponent_ReturnValue = CallFunc_ActivateResourceComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_1 = CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_2 = CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_3 = CallFunc_GetTrait_Paths_3;
	Parms.CallFunc_GetTrait_ReturnValue_3 = CallFunc_GetTrait_ReturnValue_3;
	Parms.CallFunc_ActivateGenerator_ReturnValue = CallFunc_ActivateGenerator_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace = CallFunc_HasAnyRemainingInventorySpaceForOre_HasAnyRemainingSpace;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_3 = CallFunc_HasAnyResourcesRemaining_HasResourcesRemaining_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_4 = CallFunc_GetTrait_Paths_4;
	Parms.CallFunc_GetTrait_ReturnValue_4 = CallFunc_GetTrait_ReturnValue_4;
	Parms.K2Node_Event_DrillData = K2Node_Event_DrillData;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_Event_FoundationFromDatabase = K2Node_Event_FoundationFromDatabase;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


