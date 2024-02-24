#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B8 - 0x2B8)
// BlueprintGeneratedClass ShieldAug_Afterburner.ShieldAug_Afterburner_C
class UShieldAug_Afterburner_C : public UShieldAugment_Damage
{
public:

	static class UClass* StaticClass();
	static class UShieldAug_Afterburner_C* GetDefaultObj();

	void K2_OnShieldFilled(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
	void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData, float CallFunc_GetValueFromStackCount_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, float CallFunc_GetValueFromStackCount_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_GetBaseShieldDamage_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}


