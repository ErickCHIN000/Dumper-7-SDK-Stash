#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C
// (None)

class UClass* UUMG_Mission_Communicator_Upgradable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Mission_Communicator_Upgradable_C");

	return Clss;
}


// UMG_Mission_Communicator_Upgradable_C UMG_Mission_Communicator_Upgradable.Default__UMG_Mission_Communicator_Upgradable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Mission_Communicator_Upgradable_C* UUMG_Mission_Communicator_Upgradable_C::GetDefaultObj()
{
	static class UUMG_Mission_Communicator_Upgradable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Mission_Communicator_Upgradable_C*>(UUMG_Mission_Communicator_Upgradable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.PlayProspectAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UDialogueSystem*             CallFunc_GetDialogueSystem_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogueSystem*             CallFunc_GetDialogueSystem_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDialogueSystem*             CallFunc_GetDialogueSystem_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions                (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogue                   CallFunc_GetDialogueStruct_Dialogue                              (None)
// enum class EValid                  CallFunc_GetDialogueStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionInfo                CallFunc_GetFactionInfoStruct_FactionInfo                        (None)
// enum class EValid                  CallFunc_GetFactionInfoStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mission_Communicator_Upgradable_C::PlayProspectAudio(const struct FFProspectServerInfo& Prospect, class UDialogueSystem* CallFunc_GetDialogueSystem_ReturnValue, class UDialogueSystem* CallFunc_GetDialogueSystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UDialogueSystem* CallFunc_GetDialogueSystem_ReturnValue_2, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FDialogue& CallFunc_GetDialogueStruct_Dialogue, enum class EValid CallFunc_GetDialogueStruct_Paths, const struct FFactionInfo& CallFunc_GetFactionInfoStruct_FactionInfo, enum class EValid CallFunc_GetFactionInfoStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "PlayProspectAudio");

	Params::UUMG_Mission_Communicator_Upgradable_C_PlayProspectAudio_Params Parms{};

	Parms.Prospect = Prospect;
	Parms.CallFunc_GetDialogueSystem_ReturnValue = CallFunc_GetDialogueSystem_ReturnValue;
	Parms.CallFunc_GetDialogueSystem_ReturnValue_1 = CallFunc_GetDialogueSystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDialogueSystem_ReturnValue_2 = CallFunc_GetDialogueSystem_ReturnValue_2;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions = CallFunc_GetFactionMissionsStruct_FactionMissions;
	Parms.CallFunc_GetFactionMissionsStruct_Paths = CallFunc_GetFactionMissionsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetDialogueStruct_Dialogue = CallFunc_GetDialogueStruct_Dialogue;
	Parms.CallFunc_GetDialogueStruct_Paths = CallFunc_GetDialogueStruct_Paths;
	Parms.CallFunc_GetFactionInfoStruct_FactionInfo = CallFunc_GetFactionInfoStruct_FactionInfo;
	Parms.CallFunc_GetFactionInfoStruct_Paths = CallFunc_GetFactionInfoStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.StopProspectAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueSystem*             CallFunc_GetDialogueSystem_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mission_Communicator_Upgradable_C::StopProspectAudio(class UDialogueSystem* CallFunc_GetDialogueSystem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "StopProspectAudio");

	Params::UUMG_Mission_Communicator_Upgradable_C_StopProspectAudio_Params Parms{};

	Parms.CallFunc_GetDialogueSystem_ReturnValue = CallFunc_GetDialogueSystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.GetArchetypeForCurrentProspectData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// bool                               CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mission_Communicator_Upgradable_C::GetArchetypeForCurrentProspectData(struct FTalentArchetypesRowHandle* Archetype, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "GetArchetypeForCurrentProspectData");

	Params::UUMG_Mission_Communicator_Upgradable_C_GetArchetypeForCurrentProspectData_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue = CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Archetype != nullptr)
		*Archetype = std::move(Parms.Archetype);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.UpdateMissionStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowMissions                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSessionFlag_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectListRowHandle      K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeployableBase_C*        K2Node_DynamicCast_AsBP_Deployable_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimeLockedMissionInfo      CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  CallFunc_GetIcarusMap_Archetype                                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FTalentArchetypesRowHandleFTalentArchetypesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mission_Communicator_Upgradable_C::UpdateMissionStart(bool bShowMissions, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasSessionFlag_ReturnValue, const struct FProspectListRowHandle& K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FTimeLockedMissionInfo& CallFunc_Array_Get_Item, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue, bool CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTalentArchetypesRowHandle& CallFunc_GetIcarusMap_Archetype, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, bool CallFunc_EqualEqual_FTalentArchetypesRowHandleFTalentArchetypesRowHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "UpdateMissionStart");

	Params::UUMG_Mission_Communicator_Upgradable_C_UpdateMissionStart_Params Parms{};

	Parms.bShowMissions = bShowMissions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_HasSessionFlag_ReturnValue = CallFunc_HasSessionFlag_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Deployable_Base = K2Node_DynamicCast_AsBP_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue = CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside = CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusMap_Archetype = CallFunc_GetIcarusMap_Archetype;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;
	Parms.CallFunc_EqualEqual_FTalentArchetypesRowHandleFTalentArchetypesRowHandle_ReturnValue = CallFunc_EqualEqual_FTalentArchetypesRowHandleFTalentArchetypesRowHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.GetIcarusMap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTalentArchetypesRowHandle  Archetype                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// bool                               CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mission_Communicator_Upgradable_C::GetIcarusMap(struct FTalentArchetypesRowHandle* Archetype, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "GetIcarusMap");

	Params::UUMG_Mission_Communicator_Upgradable_C_GetIcarusMap_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue = CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Archetype != nullptr)
		*Archetype = std::move(Parms.Archetype);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.GetQuestCancelDelay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayConfigRowHandle    Config                                                           (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayConfig             CallFunc_GetGameplayConfigStruct_GameplayConfig                  (None)
// enum class EValid                  CallFunc_GetGameplayConfigStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUMG_Mission_Communicator_Upgradable_C::GetQuestCancelDelay(const struct FGameplayConfigRowHandle& Config, const struct FGameplayConfig& CallFunc_GetGameplayConfigStruct_GameplayConfig, enum class EValid CallFunc_GetGameplayConfigStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FCeil_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "GetQuestCancelDelay");

	Params::UUMG_Mission_Communicator_Upgradable_C_GetQuestCancelDelay_Params Parms{};

	Parms.Config = Config;
	Parms.CallFunc_GetGameplayConfigStruct_GameplayConfig = CallFunc_GetGameplayConfigStruct_GameplayConfig;
	Parms.CallFunc_GetGameplayConfigStruct_Paths = CallFunc_GetGameplayConfigStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_Mission_Communicator_Upgradable_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.SelectedQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestsRowHandle     Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::SelectedQuest(const struct FDynamicQuestsRowHandle& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "SelectedQuest");

	Params::UUMG_Mission_Communicator_Upgradable_C_SelectedQuest_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_Mission_Communicator_Upgradable_C_BndEvt__UMG_Mission_Communicator_T2_UMG_BasicButton_2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.CancelQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::CancelQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "CancelQuest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.Nothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::Nothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "Nothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "Tick");

	Params::UUMG_Mission_Communicator_Upgradable_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.RefreshAbandonedText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::RefreshAbandonedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "RefreshAbandonedText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_4_StartMission__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FFactionMissionsRowHandle   Mission                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_4_StartMission__DelegateSignature(const struct FFactionMissionsRowHandle& Mission, const struct FProspectListRowHandle& Prospect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_4_StartMission__DelegateSignature");

	Params::UUMG_Mission_Communicator_Upgradable_C_BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_4_StartMission__DelegateSignature_Params Parms{};

	Parms.Mission = Mission;
	Parms.Prospect = Prospect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_5_DismissOverlay__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_5_DismissOverlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "BndEvt__UMG_Mission_Communicator_T2_UMG_PriorityMissionOverlay_K2Node_ComponentBoundEvent_5_DismissOverlay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.TalentProspectSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::TalentProspectSelected(const struct FFProspectServerInfo& ProspectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "TalentProspectSelected");

	Params::UUMG_Mission_Communicator_Upgradable_C_TalentProspectSelected_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.BndEvt__UMG_Mission_Communicator_Upgradable_Operations_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::BndEvt__UMG_Mission_Communicator_Upgradable_Operations_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "BndEvt__UMG_Mission_Communicator_Upgradable_Operations_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.BndEvt__UMG_Mission_Communicator_Upgradable_SMPL3Quests_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::BndEvt__UMG_Mission_Communicator_Upgradable_SMPL3Quests_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "BndEvt__UMG_Mission_Communicator_Upgradable_SMPL3Quests_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.OnInventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::OnInventoryUpdated(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "OnInventoryUpdated");

	Params::UUMG_Mission_Communicator_Upgradable_C_OnInventoryUpdated_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.OperationSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_Mission_Communicator_Upgradable_C::OperationSelected(const struct FFProspectServerInfo& ProspectInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "OperationSelected");

	Params::UUMG_Mission_Communicator_Upgradable_C_OperationSelected_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.OperationCancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mission_Communicator_Upgradable_C::OperationCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "OperationCancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mission_Communicator_Upgradable.UMG_Mission_Communicator_Upgradable_C.ExecuteUbergraph_UMG_Mission_Communicator_Upgradable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UUMG_DynamicQuestOption_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NetworkProxyComponentSurvival_C*K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSessionFlag_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Mission_Communication_Upgradeable_C*K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     K2Node_CustomEvent_Quest                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_NetworkProxyComponentSurvival_C*K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival_1       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQuestManager*               CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestManager*               CallFunc_GetQuestManager_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuestCancelDelay_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeployableBase_C*        K2Node_DynamicCast_AsBP_Deployable_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSheltered_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFactionMissionsRowHandle   K2Node_ComponentBoundEvent_Mission                               (NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      K2Node_ComponentBoundEvent_Prospect                              (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFProspectServerInfo        K2Node_CustomEvent_ProspectInfo_1                                (HasGetValueTypeHash)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetView_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentViewInterface*        CallFunc_GetView_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentView_Prospect_C*  K2Node_DynamicCast_AsUMG_Talent_View_Prospect                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentArchetypesRowHandle  CallFunc_GetArchetypeForCurrentProspectData_Archetype            (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class ABP_Mission_Communication_Upgradeable_C*K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFProspectServerInfo        K2Node_CustomEvent_ProspectInfo                                  (HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionMissionsRowHandle   CallFunc_MakeFactionMissions_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mission_Communicator_Upgradable_C::ExecuteUbergraph_UMG_Mission_Communicator_Upgradable(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMG_DynamicQuestOption_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UBP_NetworkProxyComponentSurvival_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, bool CallFunc_HasSessionFlag_ReturnValue, class ABP_Mission_Communication_Upgradeable_C* K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable, bool K2Node_DynamicCast_bSuccess_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDynamicQuestsRowHandle& K2Node_CustomEvent_Quest, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_3, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_3, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_3, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_4, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_4, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_5, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_5, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_3, bool K2Node_DynamicCast_bSuccess_5, class UBP_NetworkProxyComponentSurvival_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival_1, bool K2Node_DynamicCast_bSuccess_6, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, bool Temp_bool_Has_Been_Initd_Variable, class AQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AQuestManager* CallFunc_GetQuestManager_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_GetQuestCancelDelay_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside, bool CallFunc_IsSheltered_ReturnValue, const struct FFactionMissionsRowHandle& K2Node_ComponentBoundEvent_Mission, const struct FProspectListRowHandle& K2Node_ComponentBoundEvent_Prospect, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_6, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_6, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_4, bool K2Node_DynamicCast_bSuccess_8, bool K2Node_SwitchEnum_CmpSuccess_6, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_9, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FFProspectServerInfo& K2Node_CustomEvent_ProspectInfo_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetView_self_CastInput, class UTalentViewInterface* CallFunc_GetView_ReturnValue, class UUMG_TalentView_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_View_Prospect, bool K2Node_DynamicCast_bSuccess_10, class UPanelSlot* CallFunc_SetContent_ReturnValue, const struct FTalentArchetypesRowHandle& CallFunc_GetArchetypeForCurrentProspectData_Archetype, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_7, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_7, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_5, bool K2Node_DynamicCast_bSuccess_11, bool K2Node_SwitchEnum_CmpSuccess_7, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_5, bool CallFunc_IsVisible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ABP_Mission_Communication_Upgradeable_C* K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable_1, bool K2Node_DynamicCast_bSuccess_12, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_8, bool K2Node_SwitchEnum_CmpSuccess_9, bool K2Node_SwitchEnum_CmpSuccess_10, bool K2Node_SwitchEnum_CmpSuccess_11, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsWithEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FDynamicQuestsRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, enum class EDynamicQuestDifficulty CallFunc_Array_Get_Item_1, const struct FFProspectServerInfo& K2Node_CustomEvent_ProspectInfo, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFactionMissionsRowHandle& CallFunc_MakeFactionMissions_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mission_Communicator_Upgradable_C", "ExecuteUbergraph_UMG_Mission_Communicator_Upgradable");

	Params::UUMG_Mission_Communicator_Upgradable_C_ExecuteUbergraph_UMG_Mission_Communicator_Upgradable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival = K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_2 = CallFunc_GetIcarusPlayerController_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_HasSessionFlag_ReturnValue = CallFunc_HasSessionFlag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable = K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_3 = CallFunc_GetIcarusPlayerController_IsValid_3;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_3 = CallFunc_GetIcarusPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsUIController_Interface_2 = K2Node_DynamicCast_AsUIController_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetUserInterface_UserInterface_2 = CallFunc_GetUserInterface_UserInterface_2;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_4 = CallFunc_GetIcarusPlayerController_IsValid_4;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_4 = CallFunc_GetIcarusPlayerController_ReturnValue_4;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_5 = CallFunc_GetIcarusPlayerController_IsValid_5;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_5 = CallFunc_GetIcarusPlayerController_ReturnValue_5;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue_1 = CallFunc_GetNetworkProxyComponent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface_3 = K2Node_DynamicCast_AsUIController_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival_1 = K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetUserInterface_UserInterface_3 = CallFunc_GetUserInterface_UserInterface_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetQuestManager_ReturnValue_1 = CallFunc_GetQuestManager_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_GetQuestCancelDelay_ReturnValue = CallFunc_GetQuestCancelDelay_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_Base = K2Node_DynamicCast_AsBP_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside = CallFunc_Is_Actor_Required_To_Be_Outside_MustBeOutside;
	Parms.CallFunc_IsSheltered_ReturnValue = CallFunc_IsSheltered_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Mission = K2Node_ComponentBoundEvent_Mission;
	Parms.K2Node_ComponentBoundEvent_Prospect = K2Node_ComponentBoundEvent_Prospect;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_6 = CallFunc_GetIcarusPlayerController_IsValid_6;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_6 = CallFunc_GetIcarusPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsUIController_Interface_4 = K2Node_DynamicCast_AsUIController_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_GetUserInterface_UserInterface_4 = CallFunc_GetUserInterface_UserInterface_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.K2Node_CustomEvent_ProspectInfo_1 = K2Node_CustomEvent_ProspectInfo_1;
	Parms.CallFunc_GetView_self_CastInput = CallFunc_GetView_self_CastInput;
	Parms.CallFunc_GetView_ReturnValue = CallFunc_GetView_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Prospect = K2Node_DynamicCast_AsUMG_Talent_View_Prospect;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_GetArchetypeForCurrentProspectData_Archetype = CallFunc_GetArchetypeForCurrentProspectData_Archetype;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_7 = CallFunc_GetIcarusPlayerController_IsValid_7;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_7 = CallFunc_GetIcarusPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsUIController_Interface_5 = K2Node_DynamicCast_AsUIController_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_GetUserInterface_UserInterface_5 = CallFunc_GetUserInterface_UserInterface_5;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable_1 = K2Node_DynamicCast_AsBP_Mission_Communication_Upgradeable_1;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_ItemDataValid_Paths_1 = CallFunc_ItemDataValid_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.K2Node_SwitchEnum_CmpSuccess_11 = K2Node_SwitchEnum_CmpSuccess_11;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CustomEvent_ProspectInfo = K2Node_CustomEvent_ProspectInfo;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeFactionMissions_ReturnValue = CallFunc_MakeFactionMissions_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


