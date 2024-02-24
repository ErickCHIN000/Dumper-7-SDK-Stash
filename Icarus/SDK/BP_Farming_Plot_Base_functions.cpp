#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Farming_Plot_Base.BP_Farming_Plot_Base_C
// (Actor)

class UClass* ABP_Farming_Plot_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Farming_Plot_Base_C");

	return Clss;
}


// BP_Farming_Plot_Base_C BP_Farming_Plot_Base.Default__BP_Farming_Plot_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Farming_Plot_Base_C* ABP_Farming_Plot_Base_C::GetDefaultObj()
{
	static class ABP_Farming_Plot_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Farming_Plot_Base_C*>(ABP_Farming_Plot_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetFarmingPlotValues
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bIsSeededRecord                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsHarvestableRecord                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentGrowthStageRecord                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentTimeRecord                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedsRowHandle      CurrentSeedRowRecord                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// float                              NextStageTimeRecord                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GrowthCompleteTimeRecord                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::GetFarmingPlotValues(bool* bIsSeededRecord, bool* bIsHarvestableRecord, int32* CurrentGrowthStageRecord, float* CurrentTimeRecord, struct FFarmingSeedsRowHandle* CurrentSeedRowRecord, float* NextStageTimeRecord, float* GrowthCompleteTimeRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GetFarmingPlotValues");

	Params::ABP_Farming_Plot_Base_C_GetFarmingPlotValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsSeededRecord != nullptr)
		*bIsSeededRecord = Parms.bIsSeededRecord;

	if (bIsHarvestableRecord != nullptr)
		*bIsHarvestableRecord = Parms.bIsHarvestableRecord;

	if (CurrentGrowthStageRecord != nullptr)
		*CurrentGrowthStageRecord = Parms.CurrentGrowthStageRecord;

	if (CurrentTimeRecord != nullptr)
		*CurrentTimeRecord = Parms.CurrentTimeRecord;

	if (CurrentSeedRowRecord != nullptr)
		*CurrentSeedRowRecord = std::move(Parms.CurrentSeedRowRecord);

	if (NextStageTimeRecord != nullptr)
		*NextStageTimeRecord = Parms.NextStageTimeRecord;

	if (GrowthCompleteTimeRecord != nullptr)
		*GrowthCompleteTimeRecord = Parms.GrowthCompleteTimeRecord;

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetWidgetClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::GetWidgetClass(class UClass** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GetWidgetClass");

	Params::ABP_Farming_Plot_Base_C_GetWidgetClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnRep_SoilWet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::OnRep_SoilWet(bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnRep_SoilWet");

	Params::ABP_Farming_Plot_Base_C_OnRep_SoilWet_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateSoilMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::UpdateSoilMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "UpdateSoilMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetGreenhouseEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Multiplier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::GetGreenhouseEffect(float* Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GetGreenhouseEffect");

	Params::ABP_Farming_Plot_Base_C_GetGreenhouseEffect_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_1 = CallFunc_EqualEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PostLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RecalculateTotalElapsedTime_ElapsedTime                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::PostLoad(bool CallFunc_NotEqual_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_RecalculateTotalElapsedTime_ElapsedTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PostLoad");

	Params::ABP_Farming_Plot_Base_C_PostLoad_Params Parms{};

	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RecalculateTotalElapsedTime_ElapsedTime = CallFunc_RecalculateTotalElapsedTime_ElapsedTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.RecalculateTotalElapsedTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ElapsedTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeAccum                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFarmingGrowthStatesRowHandle>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFarmingGrowthStatesRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthState         CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates        (None)
// enum class EValid                  CallFunc_GetFarmingGrowthStatesStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::RecalculateTotalElapsedTime(float* ElapsedTime, float TimeAccum, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFarmingGrowthStatesRowHandle>& K2Node_MakeArray_Array, const struct FFarmingGrowthStatesRowHandle& CallFunc_Array_Get_Item, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "RecalculateTotalElapsedTime");

	Params::ABP_Farming_Plot_Base_C_RecalculateTotalElapsedTime_Params Parms{};

	Parms.TimeAccum = TimeAccum;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates = CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_Paths = CallFunc_GetFarmingGrowthStatesStruct_Paths;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ElapsedTime != nullptr)
		*ElapsedTime = Parms.ElapsedTime;

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateTimeOfDayStat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeOfDayEnum              CallFunc_GetTimeOfDayEnum_ReturnValue                            (HasGetValueTypeHash)
// bool                               CallFunc_RemoveStats_BP_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StructToInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FStatsEnum, int32>     K2Node_MakeMap_Map                                               (ConstParm)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::UpdateTimeOfDayStat(class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FTimeOfDayEnum& CallFunc_GetTimeOfDayEnum_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue, int32 CallFunc_StructToInt_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, bool CallFunc_AddStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "UpdateTimeOfDayStat");

	Params::ABP_Farming_Plot_Base_C_UpdateTimeOfDayStat_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetTimeOfDayEnum_ReturnValue = CallFunc_GetTimeOfDayEnum_ReturnValue;
	Parms.CallFunc_RemoveStats_BP_ReturnValue = CallFunc_RemoveStats_BP_ReturnValue;
	Parms.CallFunc_StructToInt_ReturnValue = CallFunc_StructToInt_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ConsumeFertilizer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DealDamageToInventoryItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::ConsumeFertilizer(int32 CallFunc_GetStat_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_DealDamageToInventoryItem_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "ConsumeFertilizer");

	Params::ABP_Farming_Plot_Base_C_ConsumeFertilizer_Params Parms{};

	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_DealDamageToInventoryItem_ReturnValue = CallFunc_DealDamageToInventoryItem_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.FertilizerUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveStats_BP_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::FertilizerUpdated(class UInventory* Inventory, int32 Location, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_AddStats_BP_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "FertilizerUpdated");

	Params::ABP_Farming_Plot_Base_C_FertilizerUpdated_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;
	Parms.CallFunc_RemoveStats_BP_ReturnValue = CallFunc_RemoveStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetAdditionalStats
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FIcarusStatReplicated>Array                                                            (Parm, OutParm)
// struct FIcarusStatReplicated       K2Node_MakeStruct_IcarusStatReplicated                           (None)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusStatReplicated       K2Node_MakeStruct_IcarusStatReplicated_1                         (None)
// TArray<struct FIcarusStatReplicated>K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_Farming_Plot_Base_C::GetAdditionalStats(TArray<struct FIcarusStatReplicated>* Array, const struct FIcarusStatReplicated& K2Node_MakeStruct_IcarusStatReplicated, int32 CallFunc_GetStat_ReturnValue, const struct FIcarusStatReplicated& K2Node_MakeStruct_IcarusStatReplicated_1, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GetAdditionalStats");

	Params::ABP_Farming_Plot_Base_C_GetAdditionalStats_Params Parms{};

	Parms.K2Node_MakeStruct_IcarusStatReplicated = K2Node_MakeStruct_IcarusStatReplicated;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusStatReplicated_1 = K2Node_MakeStruct_IcarusStatReplicated_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ModifyByGrowthSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ModifiedTime                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGreenhouseEffect_Multiplier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::ModifyByGrowthSpeed(float Time, float* ModifiedTime, float CallFunc_GetGreenhouseEffect_Multiplier, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "ModifyByGrowthSpeed");

	Params::ABP_Farming_Plot_Base_C_ModifyByGrowthSpeed_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_GetGreenhouseEffect_Multiplier = CallFunc_GetGreenhouseEffect_Multiplier;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedTime != nullptr)
		*ModifiedTime = Parms.ModifiedTime;

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.CalculateTotalGrowthTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFarmingGrowthStatesRowHandle>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFarmingGrowthStatesRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthState         CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates        (None)
// enum class EValid                  CallFunc_GetFarmingGrowthStatesStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::CalculateTotalGrowthTime(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFarmingGrowthStatesRowHandle>& K2Node_MakeArray_Array, const struct FFarmingGrowthStatesRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Add_FloatFloat_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "CalculateTotalGrowthTime");

	Params::ABP_Farming_Plot_Base_C_CalculateTotalGrowthTime_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates = CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_Paths = CallFunc_GetFarmingGrowthStatesStruct_Paths;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.SeedAddedToInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventorySlot              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_ConsumeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSeedTypes_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::SeedAddedToInventory(class UInventory* Inventory, int32 Location, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventorySlot& CallFunc_Array_Get_Item, bool CallFunc_ConsumeItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValidSeedTypes_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "SeedAddedToInventory");

	Params::ABP_Farming_Plot_Base_C_SeedAddedToInventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ConsumeItem_ReturnValue = CallFunc_ConsumeItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValidSeedTypes_Success = CallFunc_IsValidSeedTypes_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ProcessItemRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CropsDecayed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   GeneratedItem                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAlterationsEnum>    K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards                        (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewardEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_RemoveItemProperty_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GenerateItemFromReward_ReturnValue                      (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ManuallyForcePlaceItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIcarusStatReplicated>CallFunc_GetAdditionalStats_Array                                (ReferenceParm)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_CreateCustomItem_ReturnValue                            (ContainsInstancedReference)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ManuallyForcePlaceItem_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards_1                      (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewardEntry            CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GenerateItemFromReward_ReturnValue_1                    (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::ProcessItemRewards(bool CropsDecayed, const struct FItemData& GeneratedItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FAlterationsEnum>& K2Node_MakeArray_Array, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewardEntry& CallFunc_Array_Get_Item, bool CallFunc_RemoveItemProperty_ReturnValue, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ManuallyForcePlaceItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, int32 Temp_int_Loop_Counter_Variable_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FIcarusStatReplicated>& CallFunc_GetAdditionalStats_Array, int32 CallFunc_GetStat_ReturnValue, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_ManuallyForcePlaceItem_ReturnValue_1, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards_1, enum class EValid CallFunc_GetItemRewardsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FItemRewardEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_5, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "ProcessItemRewards");

	Params::ABP_Farming_Plot_Base_C_ProcessItemRewards_Params Parms{};

	Parms.CropsDecayed = CropsDecayed;
	Parms.GeneratedItem = GeneratedItem;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards = CallFunc_GetItemRewardsStruct_ItemRewards;
	Parms.CallFunc_GetItemRewardsStruct_Paths = CallFunc_GetItemRewardsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RemoveItemProperty_ReturnValue = CallFunc_RemoveItemProperty_ReturnValue;
	Parms.CallFunc_GenerateItemFromReward_ReturnValue = CallFunc_GenerateItemFromReward_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ManuallyForcePlaceItem_ReturnValue = CallFunc_ManuallyForcePlaceItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAdditionalStats_Array = CallFunc_GetAdditionalStats_Array;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_CreateCustomItem_ReturnValue = CallFunc_CreateCustomItem_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths_1 = CallFunc_ItemDataValid_Paths_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_ManuallyForcePlaceItem_ReturnValue_1 = CallFunc_ManuallyForcePlaceItem_ReturnValue_1;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards_1 = CallFunc_GetItemRewardsStruct_ItemRewards_1;
	Parms.CallFunc_GetItemRewardsStruct_Paths_1 = CallFunc_GetItemRewardsStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GenerateItemFromReward_ReturnValue_1 = CallFunc_GenerateItemFromReward_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetAudioData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFarmingSeedAudioData       Data                                                             (Parm, OutParm)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::GetAudioData(struct FFarmingSeedAudioData* Data, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GetAudioData");

	Params::ABP_Farming_Plot_Base_C_GetAudioData_Params Parms{};

	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnRep_CurrentSeedRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::OnRep_CurrentSeedRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnRep_CurrentSeedRow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFarmingGrowthStatesRowHandle>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFarmingGrowthStatesRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthState         CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates        (None)
// enum class EValid                  CallFunc_GetFarmingGrowthStatesStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::UpdateMesh(TArray<struct FFarmingGrowthStatesRowHandle>& K2Node_MakeArray_Array, const struct FFarmingGrowthStatesRowHandle& CallFunc_Array_Get_Item, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "UpdateMesh");

	Params::ABP_Farming_Plot_Base_C_UpdateMesh_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates = CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_Paths = CallFunc_GetFarmingGrowthStatesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnRep_CurrentGrowthStage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::OnRep_CurrentGrowthStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnRep_CurrentGrowthStage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.DebugPlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue_2                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue_3                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue_4                           (None)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue_5                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::DebugPlot(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_BoolToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_BoolToText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, class FText CallFunc_Conv_BoolToText_ReturnValue_4, class FText CallFunc_Conv_BoolToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "DebugPlot");

	Params::ABP_Farming_Plot_Base_C_DebugPlot_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_BoolToText_ReturnValue_1 = CallFunc_Conv_BoolToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_BoolToText_ReturnValue_2 = CallFunc_Conv_BoolToText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue_3 = CallFunc_Conv_BoolToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_Conv_BoolToText_ReturnValue_4 = CallFunc_Conv_BoolToText_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToText_ReturnValue_5 = CallFunc_Conv_BoolToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlaySound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                  FMODEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::PlaySound(class UFMODEvent* FMODEvent, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PlaySound");

	Params::ABP_Farming_Plot_Base_C_PlaySound_Params Parms{};

	Parms.FMODEvent = FMODEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ResetPlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasHarvested                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::ResetPlot(bool WasHarvested, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "ResetPlot");

	Params::ABP_Farming_Plot_Base_C_ResetPlot_Params Parms{};

	Parms.WasHarvested = WasHarvested;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "Deployable_Interact");

	Params::ABP_Farming_Plot_Base_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GrowthComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::GrowthComplete(int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GrowthComplete");

	Params::ABP_Farming_Plot_Base_C_GrowthComplete_Params Parms{};

	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.UpdateGrowthStage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SetGrowthStage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFarmingGrowthStatesRowHandle>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFarmingGrowthStatesRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingGrowthState         CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates        (None)
// enum class EValid                  CallFunc_GetFarmingGrowthStatesStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::UpdateGrowthStage(int32 SetGrowthStage, bool* Success, TArray<struct FFarmingGrowthStatesRowHandle>& K2Node_MakeArray_Array, const struct FFarmingGrowthStatesRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "UpdateGrowthStage");

	Params::ABP_Farming_Plot_Base_C_UpdateGrowthStage_Params Parms{};

	Parms.SetGrowthStage = SetGrowthStage;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates = CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_Paths = CallFunc_GetFarmingGrowthStatesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GetSeedType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   InputItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FFarmingSeedsRowHandle      SeedRow                                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFarmableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmableData               CallFunc_GetFarmableData_OutData                                 (None)
// bool                               CallFunc_GetFarmableData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedsRowHandle      CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::GetSeedType(const struct FItemData& InputItem, struct FFarmingSeedsRowHandle* SeedRow, enum class EValid CallFunc_GetTrait_Paths, class UFarmableComponent* CallFunc_GetTrait_ReturnValue, const struct FFarmableData& CallFunc_GetFarmableData_OutData, bool CallFunc_GetFarmableData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FFarmingSeedsRowHandle& CallFunc_Array_Get_Item, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GetSeedType");

	Params::ABP_Farming_Plot_Base_C_GetSeedType_Params Parms{};

	Parms.InputItem = InputItem;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetFarmableData_OutData = CallFunc_GetFarmableData_OutData;
	Parms.CallFunc_GetFarmableData_ReturnValue = CallFunc_GetFarmableData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue = CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SeedRow != nullptr)
		*SeedRow = std::move(Parms.SeedRow);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlantSeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   PlantSeedItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FFarmingSeedsRowHandle      CallFunc_GetSeedType_SeedRow                                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateGrowthStage_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::PlantSeed(const struct FItemData& PlantSeedItem, const struct FFarmingSeedsRowHandle& CallFunc_GetSeedType_SeedRow, bool CallFunc_UpdateGrowthStage_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PlantSeed");

	Params::ABP_Farming_Plot_Base_C_PlantSeed_Params Parms{};

	Parms.PlantSeedItem = PlantSeedItem;
	Parms.CallFunc_GetSeedType_SeedRow = CallFunc_GetSeedType_SeedRow;
	Parms.CallFunc_UpdateGrowthStage_Success = CallFunc_UpdateGrowthStage_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.IsValidSeedTypes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   SeedValidCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFarmableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmableData               CallFunc_GetFarmableData_OutData                                 (None)
// bool                               CallFunc_GetFarmableData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedsRowHandle      CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::IsValidSeedTypes(const struct FItemData& SeedValidCheck, bool* Success, enum class EValid CallFunc_GetTrait_Paths, class UFarmableComponent* CallFunc_GetTrait_ReturnValue, const struct FFarmableData& CallFunc_GetFarmableData_OutData, bool CallFunc_GetFarmableData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FFarmingSeedsRowHandle& CallFunc_Array_Get_Item, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "IsValidSeedTypes");

	Params::ABP_Farming_Plot_Base_C_IsValidSeedTypes_Params Parms{};

	Parms.SeedValidCheck = SeedValidCheck;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetFarmableData_OutData = CallFunc_GetFarmableData_OutData;
	Parms.CallFunc_GetFarmableData_ReturnValue = CallFunc_GetFarmableData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue = CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4");

	Params::ABP_Farming_Plot_Base_C_OnLoaded_F380CEBD4EFB81B062277E990A5C4EF4_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnLoaded_D606FF354BF0D2CADE3A28BC7D9FF72D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::OnLoaded_D606FF354BF0D2CADE3A28BC7D9FF72D(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnLoaded_D606FF354BF0D2CADE3A28BC7D9FF72D");

	Params::ABP_Farming_Plot_Base_C_OnLoaded_D606FF354BF0D2CADE3A28BC7D9FF72D_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Snow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::Snow(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "Snow");

	Params::ABP_Farming_Plot_Base_C_Snow_Params Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.LoadMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UStaticMesh>  StaticMeshSoft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVector                     Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::LoadMesh(TSoftObjectPtr<class UStaticMesh> StaticMeshSoft, const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "LoadMesh");

	Params::ABP_Farming_Plot_Base_C_LoadMesh_Params Parms{};

	Parms.StaticMeshSoft = StaticMeshSoft;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ClearMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::ClearMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "ClearMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlaySeedPlantedFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::PlaySeedPlantedFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PlaySeedPlantedFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayHarvestFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::PlayHarvestFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PlayHarvestFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayClearPlotFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::PlayClearPlotFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PlayClearPlotFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.SetFarmingPlotValues
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSeededRecord                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsHarvestableRecord                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentGrowthStageRecord                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentTimeRecord                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedsRowHandle      CurrentSeedRowRecord                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              NextStageTimeRecord                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GrowthCompleteTimeRecord                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::SetFarmingPlotValues(bool bIsSeededRecord, bool bIsHarvestableRecord, int32 CurrentGrowthStageRecord, float CurrentTimeRecord, const struct FFarmingSeedsRowHandle& CurrentSeedRowRecord, float NextStageTimeRecord, float GrowthCompleteTimeRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "SetFarmingPlotValues");

	Params::ABP_Farming_Plot_Base_C_SetFarmingPlotValues_Params Parms{};

	Parms.bIsSeededRecord = bIsSeededRecord;
	Parms.bIsHarvestableRecord = bIsHarvestableRecord;
	Parms.CurrentGrowthStageRecord = CurrentGrowthStageRecord;
	Parms.CurrentTimeRecord = CurrentTimeRecord;
	Parms.CurrentSeedRowRecord = CurrentSeedRowRecord;
	Parms.NextStageTimeRecord = NextStageTimeRecord;
	Parms.GrowthCompleteTimeRecord = GrowthCompleteTimeRecord;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.MULTI_PlaySound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                  FMODEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::MULTI_PlaySound(class UFMODEvent* FMODEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "MULTI_PlaySound");

	Params::ABP_Farming_Plot_Base_C_MULTI_PlaySound_Params Parms{};

	Parms.FMODEvent = FMODEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnItemAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::OnItemAdded(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnItemAdded");

	Params::ABP_Farming_Plot_Base_C_OnItemAdded_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnItemRemovedVerbose
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_Farming_Plot_Base_C::OnItemRemovedVerbose(class UInventory* Inventory, int32 Location, struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnItemRemovedVerbose");

	Params::ABP_Farming_Plot_Base_C_OnItemRemovedVerbose_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.GrowthTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::GrowthTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "GrowthTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.AsyncOutdoorCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::AsyncOutdoorCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "AsyncOutdoorCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.Rain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Millilitres                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::Rain(int32 Millilitres)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "Rain");

	Params::ABP_Farming_Plot_Base_C_Rain_Params Parms{};

	Parms.Millilitres = Millilitres;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.WaterComponentActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::WaterComponentActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "WaterComponentActive");

	Params::ABP_Farming_Plot_Base_C_WaterComponentActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnFertilizerAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::OnFertilizerAdded(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnFertilizerAdded");

	Params::ABP_Farming_Plot_Base_C_OnFertilizerAdded_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.MULTI_PlayItemAddedAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::MULTI_PlayItemAddedAudio(const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "MULTI_PlayItemAddedAudio");

	Params::ABP_Farming_Plot_Base_C_MULTI_PlayItemAddedAudio_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayFertilizerFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Farming_Plot_Base_C::PlayFertilizerFX(const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PlayFertilizerFX");

	Params::ABP_Farming_Plot_Base_C_PlayFertilizerFX_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.OnModifierUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UModifierStateComponent*     Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRemoved                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Farming_Plot_Base_C::OnModifierUpdated(class UModifierStateComponent* Component, bool bRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "OnModifierUpdated");

	Params::ABP_Farming_Plot_Base_C_OnModifierUpdated_Params Parms{};

	Parms.Component = Component;
	Parms.bRemoved = bRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.PlayWateringFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::PlayWateringFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "PlayWateringFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ManuallyWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::ManuallyWater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "ManuallyWater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Farming_Plot_Base_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Farming_Plot_Base.BP_Farming_Plot_Base_C.ExecuteUbergraph_BP_Farming_Plot_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAlterationsEnum>    K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Intensity                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UStaticMesh>  K2Node_CustomEvent_StaticMeshSoft                                (HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateGrowthStage_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSeededRecord                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsHarvestableRecord                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_CurrentGrowthStageRecord                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_CurrentTimeRecord                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedsRowHandle      K2Node_Event_CurrentSeedRowRecord                                (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NextStageTimeRecord                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_GrowthCompleteTimeRecord                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedAudioData       CallFunc_GetAudioData_Data                                       (None)
// struct FFarmingSeedAudioData       CallFunc_GetAudioData_Data_1                                     (None)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedAudioData       CallFunc_GetAudioData_Data_2                                     (None)
// class UFMODEvent*                  K2Node_CustomEvent_FMODEvent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryIDEnum>    CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FInventoryIDEnum            CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemData>           CallFunc_GetAllItems_ReturnValue                                 (ReferenceParm, ContainsInstancedReference)
// class UInventory*                  K2Node_CustomEvent_Inventory_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// int32                              CallFunc_GetItemStackCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsIcarus_Item                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParametersAdvancedK2Node_MakeStruct_IcarusItemSpawnParametersAdvanced              (None)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// class UInventory*                  K2Node_CustomEvent_Inventory_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_CustomEvent_Item_2                                        (ConstParm, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItems_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ModifyByGrowthSpeed_ModifiedTime                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingGrowthState         CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates        (None)
// enum class EValid                  CallFunc_GetFarmingGrowthStatesStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds_1                    (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FFarmingGrowthStatesRowHandleFFarmingGrowthStatesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds_2                    (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_2                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Millilitres                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsActive                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier_1                                     (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingBase*               K2Node_DynamicCast_AsBuilding_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBuildableData              CallFunc_GetBuildableData_BuildableData                          (None)
// enum class EDataValid              CallFunc_GetBuildableData_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FBuildingTypesRowHandleFBuildingTypesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemsStaticRowHandle       K2Node_CustomEvent_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_CustomEvent_Item                                          (NoDestructor, HasGetValueTypeHash)
// class UModifierStateComponent*     K2Node_CustomEvent_Component                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bRemoved                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UModifierStateComponent*     CallFunc_GetModifierStateByUID_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFarmingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckOutdoorsAndGreenhouse_bIsOutdoors                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckOutdoorsAndGreenhouse_GreenhousePieceCount         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRowIndex_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds_3                    (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusStatReplicated       K2Node_MakeStruct_IcarusStatReplicated                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FIcarusStatReplicated>K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<struct FIcarusStatReplicated>K2Node_MakeArray_Array_4                                         (ReferenceParm)
// TArray<struct FAlterationsEnum>    K2Node_MakeArray_Array_5                                         (ReferenceParm)
// struct FItemsStaticRowHandle       CallFunc_Map_Find_Value_1                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_CreateCustomItem_ReturnValue                            (ContainsInstancedReference)
// struct FItemData                   K2Node_MakeStruct_ItemData_1                                     (ContainsInstancedReference)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_CreateCustomItem_ReturnValue_1                          (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Crop_Plot_Base_C*        K2Node_DynamicCast_AsBP_Crop_Plot_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDeployableData             CallFunc_GetDeployableStruct_Deployable                          (None)
// enum class EValid                  CallFunc_GetDeployableStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlantSeed_Planted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDeployableSetupRowHandle   CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDeployableSetup            CallFunc_GetDeployableSetupStruct_DeployableSetup                (None)
// enum class EValid                  CallFunc_GetDeployableSetupStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void ABP_Farming_Plot_Base_C::ExecuteUbergraph_BP_Farming_Plot_Base(int32 EntryPoint, TArray<struct FAlterationsEnum>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_Intensity, TSoftObjectPtr<class UStaticMesh> K2Node_CustomEvent_StaticMeshSoft, const struct FVector& K2Node_CustomEvent_Scale, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_UpdateGrowthStage_Success, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_Event_bIsSeededRecord, bool K2Node_Event_bIsHarvestableRecord, int32 K2Node_Event_CurrentGrowthStageRecord, float K2Node_Event_CurrentTimeRecord, const struct FFarmingSeedsRowHandle& K2Node_Event_CurrentSeedRowRecord, float K2Node_Event_NextStageTimeRecord, float K2Node_Event_GrowthCompleteTimeRecord, bool CallFunc_BooleanAND_ReturnValue_1, const struct FFarmingSeedAudioData& CallFunc_GetAudioData_Data, const struct FFarmingSeedAudioData& CallFunc_GetAudioData_Data_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent_1, bool K2Node_DynamicCast_bSuccess_1, const struct FFarmingSeedAudioData& CallFunc_GetAudioData_Data_2, class UFMODEvent* K2Node_CustomEvent_FMODEvent, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent_2, bool K2Node_DynamicCast_bSuccess_2, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, const struct FItemData& K2Node_MakeStruct_ItemData, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FInventoryIDEnum>& CallFunc_Map_Keys_Keys, const struct FInventoryIDEnum& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UInventory* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FItemData>& CallFunc_GetAllItems_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory_2, int32 K2Node_CustomEvent_Location_2, const struct FItemData& CallFunc_Array_Get_Item_1, int32 CallFunc_GetItemStackCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_IsServer_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsIcarus_Item, bool K2Node_ClassDynamicCast_bSuccess, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_Location_1, const struct FItemData& K2Node_CustomEvent_Item_2, int32 Temp_int_Variable, bool CallFunc_HasItems_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, float CallFunc_ModifyByGrowthSpeed_ModifiedTime, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UObject* Temp_object_Variable, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_SetStaticMesh_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue_3, class UObject* K2Node_CustomEvent_Loaded_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds_1, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_EqualEqual_FFarmingGrowthStatesRowHandleFFarmingGrowthStatesRowHandle_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds_2, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths_2, bool K2Node_SwitchEnum_CmpSuccess_4, int32 Temp_int_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, TArray<class AActor*>& Temp_object_Variable_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 K2Node_Event_Millilitres, bool CallFunc_Greater_IntInt_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 Temp_int_Variable_2, int32 CallFunc_AddModifierState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool K2Node_CustomEvent_IsActive, const struct FModifier& K2Node_MakeStruct_Modifier_1, int32 CallFunc_AddModifierState_ReturnValue_1, bool CallFunc_RemoveModifierState_ReturnValue, int32 CallFunc_GetStat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_2, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, float CallFunc_FMax_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABuildingBase* K2Node_DynamicCast_AsBuilding_Base, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FBuildableData& CallFunc_GetBuildableData_BuildableData, enum class EDataValid CallFunc_GetBuildableData_Paths, int32 CallFunc_Array_Length_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_5, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_FBuildingTypesRowHandleFBuildingTypesRowHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, const struct FItemData& CallFunc_GetItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_6, const struct FItemsStaticRowHandle& K2Node_CustomEvent_Item_1, const struct FItemsStaticRowHandle& K2Node_CustomEvent_Item, class UModifierStateComponent* K2Node_CustomEvent_Component, bool K2Node_CustomEvent_bRemoved, bool CallFunc_Not_PreBool_ReturnValue_4, class UModifierStateComponent* CallFunc_GetModifierStateByUID_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanOR_ReturnValue, class UFarmingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CheckOutdoorsAndGreenhouse_bIsOutdoors, int32 CallFunc_CheckOutdoorsAndGreenhouse_GreenhousePieceCount, float CallFunc_Conv_IntToFloat_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_5, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_GetRowIndex_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds_3, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths_3, const struct FIcarusStatReplicated& K2Node_MakeStruct_IcarusStatReplicated, bool K2Node_SwitchEnum_CmpSuccess_7, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array_3, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array_4, TArray<struct FAlterationsEnum>& K2Node_MakeArray_Array_5, const struct FItemsStaticRowHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue, const struct FItemData& K2Node_MakeStruct_ItemData_1, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_8, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess_5, const struct FDeployableData& CallFunc_GetDeployableStruct_Deployable, enum class EValid CallFunc_GetDeployableStruct_Paths, bool CallFunc_PlantSeed_Planted, bool K2Node_SwitchEnum_CmpSuccess_9, const struct FDeployableSetupRowHandle& CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FDeployableSetup& CallFunc_GetDeployableSetupStruct_DeployableSetup, enum class EValid CallFunc_GetDeployableSetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_10, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_Base_C", "ExecuteUbergraph_BP_Farming_Plot_Base");

	Params::ABP_Farming_Plot_Base_C_ExecuteUbergraph_BP_Farming_Plot_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_Intensity = K2Node_Event_Intensity;
	Parms.K2Node_CustomEvent_StaticMeshSoft = K2Node_CustomEvent_StaticMeshSoft;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_UpdateGrowthStage_Success = CallFunc_UpdateGrowthStage_Success;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_bIsSeededRecord = K2Node_Event_bIsSeededRecord;
	Parms.K2Node_Event_bIsHarvestableRecord = K2Node_Event_bIsHarvestableRecord;
	Parms.K2Node_Event_CurrentGrowthStageRecord = K2Node_Event_CurrentGrowthStageRecord;
	Parms.K2Node_Event_CurrentTimeRecord = K2Node_Event_CurrentTimeRecord;
	Parms.K2Node_Event_CurrentSeedRowRecord = K2Node_Event_CurrentSeedRowRecord;
	Parms.K2Node_Event_NextStageTimeRecord = K2Node_Event_NextStageTimeRecord;
	Parms.K2Node_Event_GrowthCompleteTimeRecord = K2Node_Event_GrowthCompleteTimeRecord;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetAudioData_Data = CallFunc_GetAudioData_Data;
	Parms.CallFunc_GetAudioData_Data_1 = CallFunc_GetAudioData_Data_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFMODEvent_1 = K2Node_DynamicCast_AsFMODEvent_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAudioData_Data_2 = CallFunc_GetAudioData_Data_2;
	Parms.K2Node_CustomEvent_FMODEvent = K2Node_CustomEvent_FMODEvent;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFMODEvent_2 = K2Node_DynamicCast_AsFMODEvent_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllItems_ReturnValue = CallFunc_GetAllItems_ReturnValue;
	Parms.K2Node_CustomEvent_Inventory_2 = K2Node_CustomEvent_Inventory_2;
	Parms.K2Node_CustomEvent_Location_2 = K2Node_CustomEvent_Location_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetItemStackCount_ReturnValue = CallFunc_GetItemStackCount_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsIcarus_Item = K2Node_ClassDynamicCast_AsIcarus_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced = K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.K2Node_CustomEvent_Inventory_1 = K2Node_CustomEvent_Inventory_1;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CustomEvent_Item_2 = K2Node_CustomEvent_Item_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_HasItems_ReturnValue = CallFunc_HasItems_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_ModifyByGrowthSpeed_ModifiedTime = CallFunc_ModifyByGrowthSpeed_ModifiedTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates = CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_Paths = CallFunc_GetFarmingGrowthStatesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds_1 = CallFunc_GetFarmingSeedsStruct_FarmingSeeds_1;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths_1 = CallFunc_GetFarmingSeedsStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_EqualEqual_FFarmingGrowthStatesRowHandleFFarmingGrowthStatesRowHandle_ReturnValue = CallFunc_EqualEqual_FFarmingGrowthStatesRowHandleFFarmingGrowthStatesRowHandle_ReturnValue;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds_2 = CallFunc_GetFarmingSeedsStruct_FarmingSeeds_2;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths_2 = CallFunc_GetFarmingSeedsStruct_Paths_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_Event_Millilitres = K2Node_Event_Millilitres;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_IsActive = K2Node_CustomEvent_IsActive;
	Parms.K2Node_MakeStruct_Modifier_1 = K2Node_MakeStruct_Modifier_1;
	Parms.CallFunc_AddModifierState_ReturnValue_1 = CallFunc_AddModifierState_ReturnValue_1;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Base = K2Node_DynamicCast_AsBuilding_Base;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBuildableData_BuildableData = CallFunc_GetBuildableData_BuildableData;
	Parms.CallFunc_GetBuildableData_Paths = CallFunc_GetBuildableData_Paths;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_FBuildingTypesRowHandleFBuildingTypesRowHandle_ReturnValue = CallFunc_EqualEqual_FBuildingTypesRowHandleFBuildingTypesRowHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Component = K2Node_CustomEvent_Component;
	Parms.K2Node_CustomEvent_bRemoved = K2Node_CustomEvent_bRemoved;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetModifierStateByUID_ReturnValue = CallFunc_GetModifierStateByUID_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CheckOutdoorsAndGreenhouse_bIsOutdoors = CallFunc_CheckOutdoorsAndGreenhouse_bIsOutdoors;
	Parms.CallFunc_CheckOutdoorsAndGreenhouse_GreenhousePieceCount = CallFunc_CheckOutdoorsAndGreenhouse_GreenhousePieceCount;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue_1 = CallFunc_GetLevelTimeElapsedSec_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetRowIndex_ReturnValue = CallFunc_GetRowIndex_ReturnValue;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds_3 = CallFunc_GetFarmingSeedsStruct_FarmingSeeds_3;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths_3 = CallFunc_GetFarmingSeedsStruct_Paths_3;
	Parms.K2Node_MakeStruct_IcarusStatReplicated = K2Node_MakeStruct_IcarusStatReplicated;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_CreateCustomItem_ReturnValue = CallFunc_CreateCustomItem_ReturnValue;
	Parms.K2Node_MakeStruct_ItemData_1 = K2Node_MakeStruct_ItemData_1;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.CallFunc_CreateCustomItem_ReturnValue_1 = CallFunc_CreateCustomItem_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Crop_Plot_Base = K2Node_DynamicCast_AsBP_Crop_Plot_Base;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetDeployableStruct_Deployable = CallFunc_GetDeployableStruct_Deployable;
	Parms.CallFunc_GetDeployableStruct_Paths = CallFunc_GetDeployableStruct_Paths;
	Parms.CallFunc_PlantSeed_Planted = CallFunc_PlantSeed_Planted;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetDeployableSetupStruct_DeployableSetup = CallFunc_GetDeployableSetupStruct_DeployableSetup;
	Parms.CallFunc_GetDeployableSetupStruct_Paths = CallFunc_GetDeployableSetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


