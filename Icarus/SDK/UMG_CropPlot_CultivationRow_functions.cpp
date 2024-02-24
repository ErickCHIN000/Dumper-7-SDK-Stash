#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C
// (None)

class UClass* UUMG_CropPlot_CultivationRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CropPlot_CultivationRow_C");

	return Clss;
}


// UMG_CropPlot_CultivationRow_C UMG_CropPlot_CultivationRow.Default__UMG_CropPlot_CultivationRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CropPlot_CultivationRow_C* UUMG_CropPlot_CultivationRow_C::GetDefaultObj()
{
	static class UUMG_CropPlot_CultivationRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CropPlot_CultivationRow_C*>(UUMG_CropPlot_CultivationRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.CalculateMaturityPercentage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              PercentMature                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedGrowthTime                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlantGrowthStates      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthStatesRowHandleTemp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthStatesRowHandleTemp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthStatesRowHandleTemp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthStatesRowHandleTemp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingGrowthState         CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates        (None)
// enum class EValid                  CallFunc_GetFarmingGrowthStatesStruct_Paths                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFarmingGrowthStatesRowHandleK2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingGrowthState         CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates_1      (None)
// enum class EValid                  CallFunc_GetFarmingGrowthStatesStruct_Paths_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CropPlot_CultivationRow_C::CalculateMaturityPercentage(float* PercentMature, float ElapsedGrowthTime, enum class EPlantGrowthStates Temp_byte_Variable, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable_1, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable_2, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths, const struct FFarmingGrowthStatesRowHandle& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates_1, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CropPlot_CultivationRow_C", "CalculateMaturityPercentage");

	Params::UUMG_CropPlot_CultivationRow_C_CalculateMaturityPercentage_Params Parms{};

	Parms.ElapsedGrowthTime = ElapsedGrowthTime;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates = CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_Paths = CallFunc_GetFarmingGrowthStatesStruct_Paths;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates_1 = CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates_1;
	Parms.CallFunc_GetFarmingGrowthStatesStruct_Paths_1 = CallFunc_GetFarmingGrowthStatesStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PercentMature != nullptr)
		*PercentMature = Parms.PercentMature;

}


// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.SetupIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards                        (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewardEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CropPlot_CultivationRow_C::SetupIcon(bool CallFunc_IsValid_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FItemRewardEntry& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CropPlot_CultivationRow_C", "SetupIcon");

	Params::UUMG_CropPlot_CultivationRow_C_SetupIcon_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards = CallFunc_GetItemRewardsStruct_ItemRewards;
	Parms.CallFunc_GetItemRewardsStruct_Paths = CallFunc_GetItemRewardsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CropPlot_CultivationRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CropPlot_CultivationRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CropPlot_CultivationRow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CropPlot_CultivationRow_C", "Tick");

	Params::UUMG_CropPlot_CultivationRow_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C.ExecuteUbergraph_UMG_CropPlot_CultivationRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateMaturityPercentage_PercentMature               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CropPlot_CultivationRow_C::ExecuteUbergraph_UMG_CropPlot_CultivationRow(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_CalculateMaturityPercentage_PercentMature, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CropPlot_CultivationRow_C", "ExecuteUbergraph_UMG_CropPlot_CultivationRow");

	Params::UUMG_CropPlot_CultivationRow_C_ExecuteUbergraph_UMG_CropPlot_CultivationRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_CalculateMaturityPercentage_PercentMature = CallFunc_CalculateMaturityPercentage_PercentMature;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


