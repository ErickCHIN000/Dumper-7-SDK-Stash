#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4E0 - 0x4D8)
// BlueprintGeneratedClass SampleAIController.SampleAIController_C
class ASampleAIController_C : public ABaseAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASampleAIController_C* GetDefaultObj();

	void UserConstructionScript();
	void AIProcess();
	void AIInit();
	void AIReaction(enum class ETTLAIReaction Type, const struct FTTLAIReactionParam& Param);
	void RunOnServerAIProcess();
	void ExecuteUbergraph_SampleAIController(int32 EntryPoint, bool CallFunc_CheckHPLessThan_ReturnValue, bool CallFunc_CheckDistanceLessThan_ReturnValue, bool CallFunc_CheckMoveType_ReturnValue, bool CallFunc_CheckMoveType_ReturnValue1, bool CallFunc_ActionChangeMoveType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue, bool CallFunc_ActionKeepDistance_ReturnValue, bool CallFunc_GetAIFlag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ETTLAIReaction K2Node_Event_Type, const struct FTTLAIReactionParam& K2Node_Event_param, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_AI_________BattleDistance, bool CallFunc_ActionGoAroundSide_ReturnValue);
};

}


