#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass CustomMoveTo.CustomMoveTo_C
class UCustomMoveTo_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        SpecialAtkDistance;                                // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OptimalRange;                                      // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCustomMoveTo_C* GetDefaultObj();

	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_CustomMoveTo(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue_1);
};

}


