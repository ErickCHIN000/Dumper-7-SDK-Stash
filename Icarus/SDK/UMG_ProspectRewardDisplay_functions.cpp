#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C
// (None)

class UClass* UUMG_ProspectRewardDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProspectRewardDisplay_C");

	return Clss;
}


// UMG_ProspectRewardDisplay_C UMG_ProspectRewardDisplay.Default__UMG_ProspectRewardDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProspectRewardDisplay_C* UUMG_ProspectRewardDisplay_C::GetDefaultObj()
{
	static class UUMG_ProspectRewardDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProspectRewardDisplay_C*>(UUMG_ProspectRewardDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C.SetMissionReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFactionMissionsRowHandle   Mission                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions                (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorkshopCost               CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFeatureLevelsRowHandle     CallFunc_GetFeatureLevel_ReturnValue                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ProspectRewardItem_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProspectRewardDisplay_C::SetMissionReward(const struct FFactionMissionsRowHandle& Mission, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FWorkshopCost& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFeatureLevelsRowHandle& CallFunc_GetFeatureLevel_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUMG_ProspectRewardItem_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectRewardDisplay_C", "SetMissionReward");

	Params::UUMG_ProspectRewardDisplay_C_SetMissionReward_Params Parms{};

	Parms.Mission = Mission;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions = CallFunc_GetFactionMissionsStruct_FactionMissions;
	Parms.CallFunc_GetFactionMissionsStruct_Paths = CallFunc_GetFactionMissionsStruct_Paths;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetFeatureLevel_ReturnValue = CallFunc_GetFeatureLevel_ReturnValue;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ProspectRewardDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectRewardDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectRewardDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectRewardDisplay_C", "PreConstruct");

	Params::UUMG_ProspectRewardDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C.ExecuteUbergraph_UMG_ProspectRewardDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectRewardDisplay_C::ExecuteUbergraph_UMG_ProspectRewardDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectRewardDisplay_C", "ExecuteUbergraph_UMG_ProspectRewardDisplay");

	Params::UUMG_ProspectRewardDisplay_C_ExecuteUbergraph_UMG_ProspectRewardDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


