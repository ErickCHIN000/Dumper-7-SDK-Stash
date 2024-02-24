#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4E8 - 0x4D8)
// BlueprintGeneratedClass AI_NPC_Barrett_009.AI_NPC_Barrett_009_C
class AAI_NPC_Barrett_009_C : public ABaseAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(Transient, DuplicateTransient)
	class AActor*                                TargetContainer;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAI_NPC_Barrett_009_C* GetDefaultObj();

	void AI___________L____(bool InputBoolFlag, bool* L__K__, bool* ReturnValueFlag, bool CallFunc_PresetAI_ACT____________________2_______, bool CallFunc_PresetAI_ACT____________________2_ReturnValueFlag);
	void AI___________L___(bool InputBoolFlag, bool* L__K__, bool* ReturnBoolFlag, bool CallFunc_PresetAI_ACT___________________2_______, bool CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag);
	void AI___________L___(bool InputBoolFlag, bool* L__K__, bool* ReturnBoolFlag, bool CallFunc_PresetAI_ACT___________________2_______, bool CallFunc_PresetAI_ACT___________________2_ReturnBoolFlag);
	void UserConstructionScript();
	void AIInit();
	void AIHateTargetChanged(class AActor* TargetActor);
	void AIAttackFinished();
	void AIReaction(enum class ETTLAIReaction Type, const struct FTTLAIReactionParam& Param);
	void AIProcess();
	void ExecuteUbergraph_AI_NPC_Barrett_009(int32 EntryPoint, bool CallFunc_ActionNone_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_targetActor, enum class ETTLAIReaction K2Node_Event_Type, const struct FTTLAIReactionParam& K2Node_Event_param, bool CallFunc_PresetAI_ACT___________ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_PresetAI_ACT_____________________, bool CallFunc_PresetAI_ACT______________________, bool CallFunc_PresetAI_ACT_____________________1, bool CallFunc_PresetAI_ACT_______________________, bool CallFunc_PresetAI_ACT______________________1, bool CallFunc_PresetAI_ACT_______________________1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue, bool CallFunc_ActionExchangeWeapon_ReturnValue, enum class ETTLAIActionType CallFunc_IsContinuedSameAIAction_CurrentAction, bool CallFunc_IsContinuedSameAIAction_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_ActionChangeWeapon_ReturnValue, float CallFunc_GetWeaponRange_ReturnValue, bool CallFunc_NPC________Do_Routine, bool CallFunc_ActionGoAroundSide_ReturnValue, enum class ETTLAITrueFalseEnum CallFunc_BranchOnSwitch_OutputTrueFalse, bool K2Node_SwitchEnum2_CmpSuccess, class AActor* CallFunc_PresetAI_ACT________NewTargetContainer, bool CallFunc_IsActionNonParallelAttack_ReturnValue);
};

}


