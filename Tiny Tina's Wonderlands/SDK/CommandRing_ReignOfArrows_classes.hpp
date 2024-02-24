#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4E0 - 0x4B0)
// BlueprintGeneratedClass CommandRing_ReignOfArrows.CommandRing_ReignOfArrows_C
class ACommandRing_ReignOfArrows_C : public ACommandRing
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              PS_VLA_Mortar_Command_Ring_Target;                 // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxTrajectometerComponent*            GbxTrajectometer;                                  // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  OwnerPlayer;                                       // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACommandRing_ReignOfArrows_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar(struct FHitResult& HitResult);
	void Handle_Turret_Enter(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void Handle_Turret_Exit(class UPawnAttachSlotComponent* PawnAttachSlotComponent);
	void Handle_WeaponChange(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void ExecuteUbergraph_CommandRing_ReignOfArrows(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UPawnAttachSlotComponent* K2Node_CustomEvent_PawnAttachSlotComponent1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPawnAttachSlotComponent* K2Node_CustomEvent_PawnAttachSlotComponent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AWeapon* K2Node_CustomEvent_NewWeapon, class AWeapon* K2Node_CustomEvent_LastWeapon);
};

}


