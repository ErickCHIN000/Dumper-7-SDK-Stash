#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x4ED - 0x4E0)
// BlueprintGeneratedClass MirageAISample.MirageAISample_C
class AMirageAISample_C : public AMirageControllerTemplate_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(Transient, DuplicateTransient)
	bool                                         LeaderIsDead;                                      // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSupportAttackEnd;                                // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TargetIsDead;                                      // 0x4EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ReserveTakeWeaponL;                                // 0x4EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ReserveTakeWeaponR;                                // 0x4EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AMirageAISample_C* GetDefaultObj();

	void UserConstructionScript();
	void AIProcess();
	void AIAttackFinished();
	void AIHateTargetChanged(class AActor* TargetActor);
	void AIReaction(enum class ETTLAIReaction Type, const struct FTTLAIReactionParam& Param);
	void AIInit();
	void ExecuteUbergraph_MirageAISample(int32 EntryPoint, bool CallFunc_FinishParallelAttack_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* K2Node_Event_targetActor, bool CallFunc_FinishParallelAttack_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDeadActor_ReturnValue, bool CallFunc_AttackWeaponAuto_ReturnValue, enum class ETTLAIReaction K2Node_Event_Type, const struct FTTLAIReactionParam& K2Node_Event_param, bool CallFunc_PresetAI_ACT___________ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, class AActor* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_AttackWeaponAuto_ReturnValue1, bool CallFunc_IsDeadActor_ReturnValue1, bool CallFunc_IsSupportTarget_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, float CallFunc_AI_________BattleDistance, bool CallFunc_ActionChase_ReturnValue, bool CallFunc_NPC________Do_Routine, bool CallFunc______________________ReturnValue, float CallFunc______________________ReturnDistance, enum class ETTLAIYesNoEnum CallFunc_BranchPercent_OutputYesNo, bool K2Node_SwitchEnum3_CmpSuccess, float CallFunc_GetEquippedWeaponRange_ReturnValue, float CallFunc_GetEquippedWeaponRange_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ETTLAIYesNoEnum CallFunc_BranchPercent_OutputYesNo1, bool K2Node_SwitchEnum4_CmpSuccess, bool CallFunc_ActionExchangeWeapon_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActionExchangeWeapon_ReturnValue1, bool CallFunc_CouldTake_ReturnValue, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_CouldTake_ReturnValue1, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_CouldTake_ReturnValue2, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_CouldTake_ReturnValue3, bool CallFunc_ActionExchangeWeapon_ReturnValue2, bool CallFunc_ActionExchangeWeapon_ReturnValue3, bool CallFunc_FinishParallelAttack_ReturnValue3);
};

}


