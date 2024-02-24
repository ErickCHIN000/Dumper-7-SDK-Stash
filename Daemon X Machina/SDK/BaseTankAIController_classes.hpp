#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x4E4 - 0x4D8)
// BlueprintGeneratedClass BaseTankAIController.BaseTankAIController_C
class ABaseTankAIController_C : public ABaseAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(Transient, DuplicateTransient)
	float                                        CombatDistance;                                    // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABaseTankAIController_C* GetDefaultObj();

	void UserConstructionScript();
	void AIProcess();
	void AIInit();
	void ExecuteUbergraph_BaseTankAIController(int32 EntryPoint, float CallFunc_GetEscapeDistance_ReturnValue, bool CallFunc_ActionKeepDistance_ReturnValue, bool CallFunc_CheckHPLessThan_ReturnValue, bool CallFunc_CheckLockedOn_ReturnValue, bool CallFunc_AttackWeaponRight_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue, enum class ETTLAIYesNoEnum CallFunc_SelectSPMove_OutputYesNo, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ActionPatrolActionArea_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ActionPatrol_ReturnValue, enum class ETTLAISlot CallFunc_GetBestEvaluateTargetPoint_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_ActionPatrolTargetPoint_ReturnValue, bool CallFunc_ActionChase_ReturnValue, bool CallFunc_ActionGoAroundSide_ReturnValue, float CallFunc_GetModifiedBattleRange_ReturnValue, bool CallFunc_Check2DDistanceLessThan_ReturnValue, bool CallFunc_CheckDistanceLessThan_ReturnValue, float CallFunc_GetCombatDistance_ReturnValue, bool CallFunc_Check2DDistanceLessThan_ReturnValue1);
};

}


