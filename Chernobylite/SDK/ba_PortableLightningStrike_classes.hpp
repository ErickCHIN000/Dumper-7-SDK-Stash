#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD2 (0x2F2 - 0x220)
// BlueprintGeneratedClass ba_PortableLightningStrike.ba_PortableLightningStrike_C
class Aba_PortableLightningStrike_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPostProcessComponent*                 DOF;                                               // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Lightning_01_01;                                // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPaperSpriteComponent*                 PaperSprite;                                       // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Timeline_0_Light_645FA50F41FEDBF9713AD5AE7D213F0C; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_DOFLerp_645FA50F41FEDBF9713AD5AE7D213F0C; // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Linear_645FA50F41FEDBF9713AD5AE7D213F0C; // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_PostProcessBlend_645FA50F41FEDBF9713AD5AE7D213F0C; // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_645FA50F41FEDBF9713AD5AE7D213F0C; // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_425[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableLightningStrike;                             // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         EnableLitFireParticles;                            // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_42A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       FireParticleSystem;                                // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LitFireParticleSystem;                             // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveFireAfterDelay;                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_430[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayToDestroyFire;                                // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AddLiquidatorSpawnSmoke;                           // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_436[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CurrentFireParticle;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          Ak_Component;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FireParticleReference;                             // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UParticleSystem>        CustomLightningParticle;                           // 0x2C0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bCustomLightningParticle;                          // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bDestroyLightOnComplete;                           // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bUnboundDOF;                                       // 0x2EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_43E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PPRadius;                                          // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bOptimizeForStorm;                                 // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         EnableSound;                                       // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class Aba_PortableLightningStrike_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__SmallParticle__EventFunc();
	void OnLoaded_083A97574D9BF00766807FA1A034E0EB(class UObject* Loaded);
	void ReceiveBeginPlay();
	void Strike();
	void DestroyFire();
	void ToDelete();
	void ReceiveDestroyed();
	void DeactivateFireSound();
	void ExecuteUbergraph_ba_PortableLightningStrike(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable, int32 CallFunc_PostAkEvent_ReturnValue_1);
};

}


