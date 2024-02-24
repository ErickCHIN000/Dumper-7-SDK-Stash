#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_Quest.BP_RewardBehaviour_Quest_C
class UBP_RewardBehaviour_Quest_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UQuestDataAsset>        Quest_Accepted;                                    // 0x38(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_Quest_C* GetDefaultObj();

	void GrantQuestReward(class APlayerState* PlayerState, class UObject* SenderContextObject, const struct FQuestAssetReference& AssetReference, TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, const struct FGuid& CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, TArray<struct FQuestAssetReference>& CallFunc_GetOngoingQuests_OutOngoingQuests, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_1, bool CallFunc_IsQuestCompleted_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void GetDebugText(class FText* DebugText, class FText QuestText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class FText CallFunc_Format_ReturnValue, class UQuestDataAsset* K2Node_DynamicCast_AsQuest_Data_Asset, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectNameOrNone_Name, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_Quest(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


