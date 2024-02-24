#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C
// (None)

class UClass* UUMG_OnProspectNotification_MissionComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OnProspectNotification_MissionComplete_C");

	return Clss;
}


// UMG_OnProspectNotification_MissionComplete_C UMG_OnProspectNotification_MissionComplete.Default__UMG_OnProspectNotification_MissionComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OnProspectNotification_MissionComplete_C* UUMG_OnProspectNotification_MissionComplete_C::GetDefaultObj()
{
	static class UUMG_OnProspectNotification_MissionComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OnProspectNotification_MissionComplete_C*>(UUMG_OnProspectNotification_MissionComplete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.GetMissionDropName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFactionMissionsRowHandle   MissionRowHandle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class FText                        MissionDropName                                                  (Parm, OutParm)
// struct FProspectListRowHandle      CallFunc_FindProspectListRowHandleFromFactionMission_FoundProspectListRowHandle(NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindProspectListRowHandleFromFactionMission_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleNone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OnProspectNotification_MissionComplete_C::GetMissionDropName(struct FFactionMissionsRowHandle& MissionRowHandle, class FText* MissionDropName, const struct FProspectListRowHandle& CallFunc_FindProspectListRowHandleFromFactionMission_FoundProspectListRowHandle, bool CallFunc_FindProspectListRowHandleFromFactionMission_ReturnValue, bool CallFunc_IsRowHandleNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_MissionComplete_C", "GetMissionDropName");

	Params::UUMG_OnProspectNotification_MissionComplete_C_GetMissionDropName_Params Parms{};

	Parms.MissionRowHandle = MissionRowHandle;
	Parms.CallFunc_FindProspectListRowHandleFromFactionMission_FoundProspectListRowHandle = CallFunc_FindProspectListRowHandleFromFactionMission_FoundProspectListRowHandle;
	Parms.CallFunc_FindProspectListRowHandleFromFactionMission_ReturnValue = CallFunc_FindProspectListRowHandleFromFactionMission_ReturnValue;
	Parms.CallFunc_IsRowHandleNone_ReturnValue = CallFunc_IsRowHandleNone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MissionDropName != nullptr)
		*MissionDropName = Parms.MissionDropName;

}


// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.SetMissionReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFactionMissionsRowHandle   Mission                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsCurrentMission                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMetaResource>       ResourcesReceived                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              RewardMulti                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class UUMG_WorkshopCostLarge_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMissionDropName_MissionDropName                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaResource               CallFunc_Array_Get_Item                                          (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrencyRowHandle      CallFunc_MakeMetaCurrency_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OnProspectNotification_MissionComplete_C::SetMissionReward(const struct FFactionMissionsRowHandle& Mission, bool IsCurrentMission, TArray<struct FMetaResource>& ResourcesReceived, float RewardMulti, class FText Temp_text_Variable, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetMissionDropName_MissionDropName, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FMetaResource& CallFunc_Array_Get_Item, bool Temp_bool_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FMetaCurrencyRowHandle& CallFunc_MakeMetaCurrency_ReturnValue, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_MissionComplete_C", "SetMissionReward");

	Params::UUMG_OnProspectNotification_MissionComplete_C_SetMissionReward_Params Parms{};

	Parms.Mission = Mission;
	Parms.IsCurrentMission = IsCurrentMission;
	Parms.ResourcesReceived = ResourcesReceived;
	Parms.RewardMulti = RewardMulti;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetMissionDropName_MissionDropName = CallFunc_GetMissionDropName_MissionDropName;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeMetaCurrency_ReturnValue = CallFunc_MakeMetaCurrency_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OnProspectNotification_MissionComplete_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_MissionComplete_C", "PreConstruct");

	Params::UUMG_OnProspectNotification_MissionComplete_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaResource               K2Node_MakeStruct_MetaResource                                   (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMetaResource               K2Node_MakeStruct_MetaResource_1                                 (None)
// TArray<struct FMetaResource>       K2Node_MakeArray_Array                                           (ReferenceParm)

void UUMG_OnProspectNotification_MissionComplete_C::ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete(int32 EntryPoint, const struct FMetaResource& K2Node_MakeStruct_MetaResource, bool K2Node_Event_IsDesignTime, const struct FMetaResource& K2Node_MakeStruct_MetaResource_1, TArray<struct FMetaResource>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_MissionComplete_C", "ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete");

	Params::UUMG_OnProspectNotification_MissionComplete_C_ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_MetaResource = K2Node_MakeStruct_MetaResource;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_MetaResource_1 = K2Node_MakeStruct_MetaResource_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


