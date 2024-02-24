#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x160 - 0xA8)
// BlueprintGeneratedClass RangedLightBrigandAttackTask_Ranged.RangedLightBrigandAttackTask_Ranged_C
class URangedLightBrigandAttackTask_Ranged_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        BasicAttackDistance;                               // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                WaitForAttack;                                     // 0xE0(0x28)(Edit, BlueprintVisible)
	float                                        BlockingDistance;                                  // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBoss_;                                           // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                AbortWaitAfterAttack_;                             // 0x110(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                MeleeModeKey;                                      // 0x138(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class URangedLightBrigandAttackTask_Ranged_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_RangedLightBrigandAttackTask_Ranged(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class ARangedEnemy_C* K2Node_DynamicCast_AsRanged_Enemy, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2);
};

}


