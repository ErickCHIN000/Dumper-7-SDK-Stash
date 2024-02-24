#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x264 - 0x220)
// BlueprintGeneratedClass bp_imrod_helmet.bp_imrod_helmet_C
class Abp_imrod_helmet_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Mesh;                                              // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             AudioCueOnHit;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             AudioCueOnHit_DualSense;                           // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestructibleMesh*                     DestructibleMesh;                                  // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             AudioCueOnDestroy;                                 // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioCueOnDestroyVolume;                           // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDestroyed;                                       // 0x25C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_260F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AudioCueOnHitVolume;                               // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_imrod_helmet_C* GetDefaultObj();

	void DualSense_HitAudioCue(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SpawnHitAudioCue(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void Destroy();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_bp_imrod_helmet(int32 EntryPoint, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_IsClosed_Variable, class AActor* K2Node_Event_OtherActor, const struct FVector& CallFunc_GetVelocity_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsSimulatingPhysics_ReturnValue);
};

}


