#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x11E0 - 0x11D1)
// BlueprintGeneratedClass BP_Wraith_Cathedral.BP_Wraith_Cathedral_C
class ABP_Wraith_Cathedral_C : public ABP_Wraith_Base_EnemyCharacter_C
{
public:
	uint8                                        Pad_2348[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Wraith_Cathedral_C* GetDefaultObj();

	void CastSpell();
	void ExecuteUbergraph_BP_Wraith_Cathedral(int32 EntryPoint, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Wraith_Cathedral_Blood_Spell_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


