#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x138 - 0xA8)
// BlueprintGeneratedClass NecroKnightAttackTask.NecroKnightAttackTask_C
class UNecroKnightAttackTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        BasicAttackDistance;                               // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                WaitForAttack;                                     // 0xE0(0x28)(Edit, BlueprintVisible)
	float                                        BlockingDistance;                                  // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBoss_;                                           // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                AbortWaitAfterAttack_;                             // 0x110(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UNecroKnightAttackTask_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_NecroKnightAttackTask(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchInteger_CmpSuccess, class AHeavyEnemy_C* K2Node_DynamicCast_AsHeavy_Enemy, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}


