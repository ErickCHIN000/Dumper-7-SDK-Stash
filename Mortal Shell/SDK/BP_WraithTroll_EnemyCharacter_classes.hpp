#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x11F0 - 0x11D1)
// BlueprintGeneratedClass BP_WraithTroll_EnemyCharacter.BP_WraithTroll_EnemyCharacter_C
class ABP_WraithTroll_EnemyCharacter_C : public ABP_Wraith_Base_EnemyCharacter_C
{
public:
	uint8                                        Pad_2F96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  ChildActor;                                        // 0x11E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACrypt_Troll_Gate_C*                   Gate;                                              // 0x11E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WraithTroll_EnemyCharacter_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void PlayAnim(bool Reverse);
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void CastSpell();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WraithTroll_EnemyCharacter(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_Reverse, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, bool Temp_bool_Variable, bool CallFunc_MakeLiteralBool_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float K2Node_Select_Default, class FName CallFunc_AddNGLevelToID_O, int32 CallFunc_MakeLiteralInt_ReturnValue, class FName CallFunc_AddNGLevelToID_O_1, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_Conv_IntToBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Wraith_Crypt_CastSpell_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
};

}


