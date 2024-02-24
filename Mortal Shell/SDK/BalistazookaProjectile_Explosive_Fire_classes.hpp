#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7C (0x3EC - 0x370)
// BlueprintGeneratedClass BalistazookaProjectile_Explosive_Fire.BalistazookaProjectile_Explosive_Fire_C
class ABalistazookaProjectile_Explosive_Fire_C : public ABalistazookaProjectile_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Fire_Bolt;                                       // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Bolt_Trail;                                      // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Explode_Radius;                                    // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B63[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AEnemyCharacter_C*>             EnemiesArray;                                      // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FVector>                       ImpactNormal;                                      // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     CurrentEnemy;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     Enemy;                                             // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Emitter;                                           // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Emitter_Scale;                                     // 0x3C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B70[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sound_Pitch;                                       // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpecialEffect_Enabled;                             // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_B75[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpecialEffect_XValue;                              // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABalistazookaProjectile_Explosive_Fire_C* GetDefaultObj();

	void SpawnExplosionEmitter(const struct FVector& Location, const struct FVector& Normal, bool CallFunc_Not_PreBool_ReturnValue);
	bool IsEnemyAlive(class AEnemyCharacter_C* Target, bool CallFunc_Not_PreBool_ReturnValue);
	bool ShouldEnableEffect(class AEnemyCharacter_C* Enemy, bool CallFunc_IsEnemyAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6);
	void DebugHitEnemy(class UObject* Actor, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void ExplodeFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void ExplodeTrace(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void OnBoltStop(const struct FHitResult& ImpactHit);
	void OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal);
	void OnBoltAttachedToActor();
	void OnBoltGrabDeadEnemy();
	void ExecuteUbergraph_BalistazookaProjectile_Explosive_Fire(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_ImpactHit, class AEnemyCharacter_C* K2Node_CustomEvent_Enemy, const struct FVector& K2Node_CustomEvent_ImpactNormal, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, bool CallFunc_ShouldEnableEffect_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable);
};

}


