#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD7 (0x8C9 - 0x7F2)
// BlueprintGeneratedClass Projectile_TOR_Message.Projectile_TOR_Message_C
class AProjectile_TOR_Message_C : public AProj_Weapon_BaseProjectile_C
{
public:
	uint8                                        Pad_2392[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              FX;                                                // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       BounceAssist;                                      // 0x810(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         LookForTarget;                                     // 0x8C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AProjectile_TOR_Message_C* GetDefaultObj();

	void FindNearbyBounceTarget(class AActor** ResActor, bool* Res, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AActor* CallFunc_Array_Get_Item);
	void UserConstructionScript();
	void OnExplode();
	void OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void OpenBounceGate();
	void OnLastBounce(struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Projectile_TOR_Message(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, bool Temp_bool_Variable1, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable2, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, bool Temp_bool_Variable4, float Temp_float_Variable6, float Temp_float_Variable7, bool Temp_bool_Variable5, const struct FVector& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_Hit, const struct FVector& K2Node_Event_ImpactVelocity, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& K2Node_Event_ImpactResult, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_FindNearbyBounceTarget_ResActor, bool CallFunc_FindNearbyBounceTarget_Res, float K2Node_Select_Default, float K2Node_Select1_Default, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Select2_Default, float K2Node_Select3_Default, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, const struct FVector& K2Node_Select4_Default, class AActor* K2Node_Select5_Default, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1);
};

}


