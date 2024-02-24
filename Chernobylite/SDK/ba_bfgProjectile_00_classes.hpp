#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x288 - 0x220)
// BlueprintGeneratedClass ba_bfgProjectile_00.ba_bfgProjectile_00_C
class Aba_bfgProjectile_00_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChildActorComponent*                  FlyProjectile;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ProjectileMesh;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        ProjectileSpeed;                                   // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1139[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        IgnoredActors;                                     // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        CollisionRadius;                                   // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DmgMin_Human;                                      // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DmgMax_Human;                                      // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DmgMin_Monster;                                    // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DmgMax_Monster;                                    // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        AoeRadius;                                         // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               ExplosionScale;                                    // 0x268(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               PreviousLocation;                                  // 0x274(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ExplosionParticleClass;                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_bfgProjectile_00_C* GetDefaultObj();

	void SetProjectileParticleScale(float Scale, class ABP_PS_BlackStalkerProjectile_01_01_C* K2Node_DynamicCast_AsBP_PS_Black_Stalker_Projectile_01_01, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void OnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void SpawnExplosionParticle();
	void ExecuteUbergraph_ba_bfgProjectile_00(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<class AActor*>& K2Node_MakeArray_Array, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_7, class FName CallFunc_MakeLiteralName_ReturnValue_8, TArray<class FName>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue, class ABP_PS_BlackStalkerProjectile_01_01_C* K2Node_DynamicCast_AsBP_PS_Black_Stalker_Projectile_01_01, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 K2Node_Select_Default, class FName CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, class ABP_PS_BlackStalkerProjectile_01_01_C* K2Node_DynamicCast_AsBP_PS_Black_Stalker_Projectile_01_01_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_8, int32 Temp_int_Array_Index_Variable, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess_2, enum class EAIWorldType CallFunc_GetAIWorldType_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FCGDamageEvent& K2Node_MakeStruct_CGDamageEvent, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_CGApplyDamage_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
};

}


