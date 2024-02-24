#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x180 - 0x180)
// BlueprintGeneratedClass BP_MenuDataEntry_Quests.BP_MenuDataEntry_Quests_C
class UBP_MenuDataEntry_Quests_C : public UNWXMenuDataEntryQuest
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuDataEntry_Quests_C* GetDefaultObj();

	void GetTaskState(enum class E_Contract_StateType* TaskState, TScriptInterface<class IQuestTrackerInterface> LQuestTracker, bool Temp_bool_Variable, enum class E_Contract_StateType Temp_byte_Variable, enum class E_Contract_StateType Temp_byte_Variable_1, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsQuestOngoing_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, enum class E_Contract_StateType K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


