#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x278 - 0x268)
// BlueprintGeneratedClass BP_homingProj.BP_homingProj_C
class ABP_homingProj_C : public ABP_Base_Projectile_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABaseCharacter_C*                      Target;                                            // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_homingProj_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void MulticastProjectileFX(const struct FVector& Location);
	void ExecuteUbergraph_BP_homingProj(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_Event_OtherActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_Location);
};

}


