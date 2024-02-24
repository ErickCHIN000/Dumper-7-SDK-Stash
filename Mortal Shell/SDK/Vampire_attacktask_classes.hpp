#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x158 - 0xA8)
// BlueprintGeneratedClass Vampire_attacktask.Vampire_attacktask_C
class UVampire_attacktask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                WaitForAttack;                                     // 0xD8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                AbortWaitAfterAttack_;                             // 0x100(0x28)(Edit, BlueprintVisible)
	class ABasicMeleeEnemy_C*                    BaseMeleeEnemyCharReference;                       // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                CurrentAttackDistance;                             // 0x130(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UVampire_attacktask_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_Vampire_attacktask(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class ABasicMeleeEnemy_C* K2Node_DynamicCast_AsBasic_Melee_Enemy, bool K2Node_DynamicCast_bSuccess_1, class AVampire_EnemyChar_C* K2Node_DynamicCast_AsVampire_Enemy_Char, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float K2Node_Select_Default);
};

}


