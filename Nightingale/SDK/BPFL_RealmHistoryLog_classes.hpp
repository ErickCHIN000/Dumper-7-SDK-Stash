#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_RealmHistoryLog.BPFL_RealmHistoryLog_C
class UBPFL_RealmHistoryLog_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_RealmHistoryLog_C* GetDefaultObj();

	void IsCurrentRealmInfo(struct FS_Persisted_RealmVisitedInfo& RealmInfo, class UObject* __WorldContext, bool* IsCurrentRealm, bool CallFunc_GetCurrentRealmID_Success, const class FString& CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetRealmInfo_CurrentRealm(class UObject* __WorldContext, bool* Success, struct FS_Persisted_RealmVisitedInfo* RealmInfo, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower, bool CallFunc_GetCurrentInfluenceLevels_Success, const struct FRealmInfluenceValues& CallFunc_GetCurrentInfluenceLevels_Influence_Levels, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, bool CallFunc_GetCurrentRealmID_Success, const class FString& CallFunc_GetCurrentRealmID_RealmID__Deployment_Id_, bool CallFunc_BooleanAND_ReturnValue, const struct FS_Persisted_RealmVisitedInfo& K2Node_MakeStruct_S_Persisted_RealmVisitedInfo, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void GetCurrentRealmID(class UObject* __WorldContext, bool* Success, class FString* RealmID__Deployment_Id_, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess);
	void GetRealmInfo_ViaRealmID(const class FString& RealmID, class UObject* __WorldContext, bool* Success, bool* IsRespiteRealm, struct FS_Persisted_RealmVisitedInfo* RealmInfo, int32 Temp_int_Array_Index_Variable, bool CallFunc_GetRealmHistory_VisitedRealms_Success, TArray<struct FS_Persisted_RealmVisitedInfo>& CallFunc_GetRealmHistory_VisitedRealms_VisitedRealmInfo, const struct FS_Persisted_RealmVisitedInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_GetRealmHistory_RespiteRealmInfo_Success, const struct FVector& CallFunc_GetRealmHistory_RespiteRealmInfo_Respite_Level_Location, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmHistory_RespiteRealmInfo_RealmInfo, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetRealmHistory_RespiteRealmInfo(class UObject* __WorldContext, bool* Success, struct FVector* Respite_Level_Location, struct FS_Persisted_RealmVisitedInfo* RealmInfo, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, const struct FS_Persisted_RealmVisitedInfo& K2Node_MakeStruct_S_Persisted_RealmVisitedInfo);
	void GetRealmHistory_VisitedRealms(class UObject* __WorldContext, bool* Success, TArray<struct FS_Persisted_RealmVisitedInfo>* VisitedRealmInfo, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success);
	void GetRealmHistoryComponent(class UObject* __WorldContext, class UBP_RealmHistory_Persistence_C** Realm_History_Persistence_Component, bool* Success, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_RealmHistory_Persistence_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


