#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// BlueprintGeneratedClass Projectile_Player_Dagger_Throwable.Projectile_Player_Dagger_Throwable_C
class AProjectile_Player_Dagger_Throwable_C : public AProjectile_Player_Dagger_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AProjectile_Player_Dagger_Throwable_C* GetDefaultObj();

	void ActivateDagger(const struct FVector& InherithedVelocity);
	void ExecuteUbergraph_Projectile_Player_Dagger_Throwable(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_InherithedVelocity, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
};

}


