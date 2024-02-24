#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x188 - 0xA8)
// BlueprintGeneratedClass RangedMelee_attacktask.RangedMelee_attacktask_C
class URangedMelee_attacktask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                WaitForAttack;                                     // 0xD8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                AbortWaitAfterAttack_;                             // 0x100(0x28)(Edit, BlueprintVisible)
	class ABasicMeleeEnemy_C*                    BaseMeleeEnemyCharReference;                       // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                CurrentAttackDistance;                             // 0x130(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                CustomAttackWait;                                  // 0x158(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class ARangedEnemy_C*                        RangedEnemyCharRef;                                // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URangedMelee_attacktask_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_RangedMelee_attacktask(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class ARangedEnemy_C* K2Node_DynamicCast_AsRanged_Enemy, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}


