#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BP_BTT_AttackTarget.BP_BTT_AttackTarget_C
class UBP_BTT_AttackTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                BB_CombatState;                                    // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_BTT_AttackTarget_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_BTT_AttackTarget(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc__GetProactiveActionMontage_AnimMontage, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


