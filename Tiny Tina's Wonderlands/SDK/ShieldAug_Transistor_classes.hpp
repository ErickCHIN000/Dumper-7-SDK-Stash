#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass ShieldAug_Transistor.ShieldAug_Transistor_C
class UShieldAug_Transistor_C : public UShieldAugment_Adaptive
{
public:

	static class UClass* StaticClass();
	static class UShieldAug_Transistor_C* GetDefaultObj();

	void K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData& StackData);
	void K2_OnShieldDepleted(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData);
	void ClearPreviousStatusEffect(class AShield* Shield, int32 ElementArrayIndex, int32 Temp_int_Variable, class UStatusEffectData* Temp_object_Variable, class UStatusEffectData* Temp_object_Variable1, class UStatusEffectData* Temp_object_Variable2, class UStatusEffectData* Temp_object_Variable3, class UStatusEffectData* Temp_object_Variable4, class UStatusEffectData* Temp_object_Variable5, class UStatusEffectData* K2Node_Select_Default, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
	void K2_OnDamageTaken(class AShield* Shield, struct FAugmentData& StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details, int32 Temp_int_Variable, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, enum class EOakElementalType Temp_byte_Variable, class UStatusEffectData* Temp_object_Variable, class UStatusEffectData* Temp_object_Variable1, class UStatusEffectData* Temp_object_Variable2, class UStatusEffectData* Temp_object_Variable3, class UStatusEffectData* Temp_object_Variable4, class UStatusEffectData* Temp_object_Variable5, class UStatusEffectData* K2Node_Select_Default, enum class EOakElementalType Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Select1_Default, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


