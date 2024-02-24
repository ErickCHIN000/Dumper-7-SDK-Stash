#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x950 - 0x8F8)
// BlueprintGeneratedClass BP_Event_GoatTower.BP_Event_GoatTower_C
class ABP_Event_GoatTower_C : public ABP_Event_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class ABP_ThroneRoom_Scanner_C> ThroneRoomScannerRef;                              // 0x900(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_StretchGoal_Base_C> FirstStretchgoalRef;                               // 0x928(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Event_GoatTower_C* GetDefaultObj();

	void ThroneRoomOpened(class AGGGoat* Goat);
	void GoatTowerSynched(class AGGGoat* Goat);
	void PlayerEnteredThroneRoom(class AGGGoat* Goat, class AGGGoatTower* GoatTower);
	void OnIntroFinished(class AGGIntro* Intro);
	void FirstStretchgoalUnlocked();
	void OnStartedSyncing(class AGGGoat* Goat);
	void BindEventCallbacks();
	void OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted);
	void ExecuteUbergraph_BP_Event_GoatTower(int32 EntryPoint, bool CallFunc_IsDemoBuild_ReturnValue, bool CallFunc_IsDemoBuild_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGGoat* K2Node_CustomEvent_Goat_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat_2, TArray<class ABP_GoatTower_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGGoat* K2Node_CustomEvent_Goat_1, class AGGGoatTower* K2Node_CustomEvent_GoatTower, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_1, class AGGIntro* K2Node_CustomEvent_Intro, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_StretchGoal_Base_C* K2Node_DynamicCast_AsBP_Stretch_Goal_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDemoBuild_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGGGoat* K2Node_CustomEvent_Goat, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABP_ThroneRoom_Scanner_C* K2Node_DynamicCast_AsBP_Throne_Room_Scanner, bool K2Node_DynamicCast_bSuccess_1, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_1, bool CallFunc_IsQuestStepCompleted_ReturnValue, bool CallFunc_IsQuestStepCompleted_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsQuestStepCompleted_ReturnValue_2, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_2, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_3, bool CallFunc_IsQuestStepCompleted_ReturnValue_3, bool CallFunc_IsQuestStepCompleted_ReturnValue_4, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_4, bool CallFunc_IsQuestStepCompleted_ReturnValue_5, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_3, class ABP_GoatTower_C* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue_2, bool K2Node_Event_bSaveExisted, bool K2Node_Event_bWasCompleted, bool CallFunc_HasEverBeenDiscovered_ReturnValue);
};

}


