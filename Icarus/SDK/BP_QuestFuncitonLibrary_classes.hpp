#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_QuestFuncitonLibrary.BP_QuestFuncitonLibrary_C
class UBP_QuestFuncitonLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestFuncitonLibrary_C* GetDefaultObj();

	void TriggerNewDynamicFactionMission(struct FFactionMissionsRowHandle& Mission, struct FProspectListRowHandle& MissionProspect, class UObject* __WorldContext, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponentSurvival_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_Survival, bool K2Node_DynamicCast_bSuccess);
	void TriggerNewDynamicQuest(const struct FDynamicQuestsRowHandle& DynamicQuest, enum class EDynamicQuestDifficulty Difficulty, class UObject* __WorldContext, class AQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_GenerateNewDynamicQuestSeed_ReturnValue);
	int32 GenerateNewDynamicQuestSeed(class UObject* __WorldContext, int32 CallFunc_RollMax_ReturnValue, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue);
	TSoftClassPtr<class UQuestModifierBase> GetDefaultQuestModifierClass(const struct FQuestModifiersMultiRowHandle& RowHandle, class UObject* __WorldContext, enum class EQuestModifiersTableType Temp_byte_Variable, enum class EQuestModifiersTableType CallFunc_Break_OutEnum, class FName CallFunc_Break_OutName, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable_1, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable_2, TSoftClassPtr<class UQuestModifierBase> Temp_softclass_Variable_3, TSoftClassPtr<class UQuestModifierBase> K2Node_Select_Default);
	TSoftClassPtr<class UQuestModifierBase> GetQuestModifierClass(const struct FQuestModifiersMultiRowHandle& RowHandle, class UObject* __WorldContext, bool Temp_bool_Variable, TSoftClassPtr<class UQuestModifierBase> CallFunc_GetDefaultQuestModifierClass_ReturnValue, TSoftClassPtr<class UQuestModifierBase> CallFunc_GetQuestModifierClassFromRow_OutQuestModifierClass, bool CallFunc_GetQuestModifierClassFromRow_ReturnValue, TSoftClassPtr<class UQuestModifierBase> K2Node_Select_Default);
};

}


