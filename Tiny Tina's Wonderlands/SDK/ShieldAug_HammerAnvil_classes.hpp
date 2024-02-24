#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B8 - 0x2B8)
// BlueprintGeneratedClass ShieldAug_HammerAnvil.ShieldAug_HammerAnvil_C
class UShieldAug_HammerAnvil_C : public UShieldAugment_Damage
{
public:

	static class UClass* StaticClass();
	static class UShieldAug_HammerAnvil_C* GetDefaultObj();

	void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
	void K2_OnDamageTaken(class AShield* Shield, struct FAugmentData& StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, enum class ETeamAttitude CallFunc_GetAttitudeTowardPlayer_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
};

}


