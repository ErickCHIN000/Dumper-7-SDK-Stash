#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x814 - 0x7F2)
// BlueprintGeneratedClass Proj_VLA_SR_Rocket.Proj_VLA_SR_Rocket_C
class AProj_VLA_SR_Rocket_C : public AProj_Weapon_BaseProjectile_C
{
public:
	uint8                                        Pad_4080[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Trail;                                             // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ProjectileEndLocation;                             // 0x808(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_VLA_SR_Rocket_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnExplode();
	void ReceiveBeginPlay();
	void WeaponProjectileExplode();
	void ExecuteUbergraph_Proj_VLA_SR_Rocket(int32 EntryPoint, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
};

}


