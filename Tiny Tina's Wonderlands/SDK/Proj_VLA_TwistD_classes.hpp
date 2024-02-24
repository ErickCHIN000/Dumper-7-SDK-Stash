#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x830 - 0x7F2)
// BlueprintGeneratedClass Proj_VLA_TwistD.Proj_VLA_TwistD_C
class AProj_VLA_TwistD_C : public AProj_Weapon_BaseProjectile_C
{
public:
	uint8                                        Pad_27[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F8(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           Twister;                                           // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Trail;                                             // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TwisterForce;                                      // 0x818(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           TwisterAudioEvent_Loop;                            // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           TwisterAudioEvent_LoopStop;                        // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_VLA_TwistD_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnExplode();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Proj_VLA_TwistD(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* K2Node_Event_OtherActor, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, bool CallFunc_IsHostile_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


