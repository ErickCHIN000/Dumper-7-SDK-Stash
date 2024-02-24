#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xC9 - 0xA0)
// BlueprintGeneratedClass BTD_CanDestroyBlockingActor.BTD_CanDestroyBlockingActor_C
class UBTD_CanDestroyBlockingActor_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                ActorToDestroy;                                    // 0xA0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShouldCheckActorToDestroy;                         // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTD_CanDestroyBlockingActor_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CanDestroySpecifiedActor, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetStat_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanTargetActorBeAttacked_CanAttack, bool CallFunc_BooleanAND_ReturnValue);
};

}


