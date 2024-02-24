#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x250 - 0x198)
// BlueprintGeneratedClass ShieldAug_TrickMirror.ShieldAug_TrickMirror_C
class UShieldAug_TrickMirror_C : public UShieldAugment_Attribute
{
public:
	struct FEnvQueryParams                       ReflectEQS;                                        // 0x198(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UShieldAug_TrickMirror_C* GetDefaultObj();

	void K2_OnDamageTaken(class AShield* Shield, struct FAugmentData& StackData, class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, struct FReceivedDamageDetails& Details, bool NoTargetsFound, class AActor* HomingTarget, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, const struct FRotator& Temp_struct_Variable, const struct FRotator& Temp_struct_Variable1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable1, bool CallFunc_Less_IntInt_ReturnValue, const struct FRotator& K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable2, float K2Node_Select1_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, class AActor* CallFunc_GetOwner_ReturnValue2, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1);
};

}


