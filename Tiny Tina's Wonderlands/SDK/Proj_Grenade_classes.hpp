#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9B1 - 0x9A8)
// BlueprintGeneratedClass Proj_Grenade.Proj_Grenade_C
class AProj_Grenade_C : public AGrenade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9A8(0x8)(Transient, DuplicateTransient)
	bool                                         AIDisarmTorgue;                                    // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AProj_Grenade_C* GetDefaultObj();

	bool AIProjectile_CanBeStolen(bool CallFunc_GrenadeUsesPayload_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GrenadeUsesPayload_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_AIProjectile_CanBeStolen_ReturnValue);
	void AIProjectileDetonate();
	void AIProjectileArm(bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UGrenadeHomingComponent* CallFunc_GetHomingComponent_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void AIProjectileDisarm(class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_GrenadeUsesPayload_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, class UGrenadeHomingComponent* CallFunc_GetHomingComponent_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue4);
	void TriggerGrenadeDodge(float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void AIProjectile_Arm();
	void AIProjectile_Detonate();
	void AIProjectile_Disarm();
	void ExecuteUbergraph_Proj_Grenade(int32 EntryPoint, const struct FHitResult& K2Node_Event_Hit, const struct FVector& K2Node_Event_ImpactVelocity, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


