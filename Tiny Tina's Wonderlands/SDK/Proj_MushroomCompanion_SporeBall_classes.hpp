#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x7E9 - 0x748)
// BlueprintGeneratedClass Proj_MushroomCompanion_SporeBall.Proj_MushroomCompanion_SporeBall_C
class AProj_MushroomCompanion_SporeBall_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              PS_Mushrooms_SporeBall;                            // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x758(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  WwiseAudio;                                        // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ExplosiveMesh;                                     // 0x768(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x770(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PrimedFX;                                          // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MyDamageData;                                      // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bAutoPrimeWhenThrown;                              // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bAutoPlayAudio;                                    // 0x789(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2EFA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MantisOverrideDmgType;                             // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_ProjLp;                                      // 0x798(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class EOakElementalType                 SporeBallElement;                                  // 0x7E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_MushroomCompanion_SporeBall_C* GetDefaultObj();

	void CheckClawElement(class UGbxAbility* ClawAbility, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, TScriptInterface<class IBPI_ClawArmor_C> K2Node_DynamicCast_AsBPI_Claw_Armor, bool K2Node_DynamicCast_bSuccess, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UClass* CallFunc_GetClawArmorElement_Res, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
	void UserConstructionScript();
	void OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void BndEvt__MolotovMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Proj_PsychoMale_Shared_Molotov(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownExplosive_Grenade(struct FHitResult& ImpactResult);
	void OnExplode();
	void HNT_Prime();
	void HNT_Drop();
	void HNT_Throw();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_MushroomCompanion_SporeBall(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, class UParticleSystem* Temp_object_Variable5, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_Hit, const struct FVector& K2Node_Event_ImpactVelocity, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, const struct FHitResult& Temp_struct_Variable, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, class AActor* CallFunc_GetOwner_ReturnValue, enum class EOakElementalType Temp_byte_Variable, bool CallFunc_IsPlaying_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UParticleSystem* K2Node_Select_Default, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1);
};

}


