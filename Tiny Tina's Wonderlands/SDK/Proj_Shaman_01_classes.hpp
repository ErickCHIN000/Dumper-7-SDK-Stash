#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x908 - 0x748)
// BlueprintGeneratedClass Proj_Shaman_01.Proj_Shaman_01_C
class AProj_Shaman_01_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           Rain;                                              // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Portal;                                            // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ProjLp;                                      // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ProjExp;                                     // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  OakCharacterPlayer;                                // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  OwnerPlayer;                                       // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ProjectileMaxTargets;                              // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1739[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ProjectileMaxTargetsHandle;                        // 0x7A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        StoredDamageMult;                                  // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_173E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 StoredDamageMultHandle;                            // 0x7C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       EQSProjectile;                                     // 0x7D8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AActor*                                DamageTarget;                                      // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DespawnFX;                                         // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StoredDamage;                                      // 0x8A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElementalProjectileDamage;                         // 0x8A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumTargets;                                        // 0x8A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjectileMinTime;                                 // 0x8AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 ProjectileMinTimeHandle;                           // 0x8B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        ProjectileMaxTime;                                 // 0x8C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_174A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ProjectileMaxTimeHandle;                           // 0x8D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        MinProjDamage;                                     // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1750[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 MinProjDamageHandle;                               // 0x8F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AProj_Shaman_01_C* GetDefaultObj();

	void GetCompanionTargetingSocket(class FName* Socket);
	void CanEnemyBeTeamSwapped(bool* Res);
	void Enemy_OnPolymorphStart(bool* Res);
	void Enemy_OnPolymorphStop(bool* Res);
	void SetElementalProjectileTimer(float NewTimer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1);
	void UserConstructionScript();
	void Player_HealthDepleted(class AOakCharacter* Character);
	void Enemy_OnPhaseLockStart();
	void Enemy_OnPhaseLockStop();
	void Enemy_OnThoughtLockStart();
	void Enemy_OnThoughtLockStop();
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void ReceiveBeginPlay();
	void OnBeginExplode();
	void SkillEnded_Explode(const struct FGameResourcePoolReference& ResourcePool);
	void CausedDamage_Store(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void Shaman_01_ElementalProjectile();
	void ExecuteUbergraph_Proj_Shaman_01(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UClass* Temp_class_Variable, const struct FRangedDistanceOverrides& K2Node_MakeStruct_RangedDistanceOverrides, class UClass* Temp_class_Variable1, class AOakCharacter* K2Node_Event_Character, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class UClass* Temp_class_Variable2, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UClass* Temp_class_Variable3, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UClass* Temp_class_Variable4, int32 Temp_int_Variable, const struct FHitResult& Temp_struct_Variable, class UClass* K2Node_Select_Default, const struct FHitResult& Temp_struct_Variable1, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, float CallFunc_GetDataTableValueFromHandle_ReturnValue3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue4);
};

}


