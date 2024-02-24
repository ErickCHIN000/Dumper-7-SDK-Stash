#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x281 - 0x220)
// BlueprintGeneratedClass BP_bell.BP_bell_C
class ABP_bell_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene_DualSense_Audio;                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoopingAudio;                                      // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         HitWithSwordSoundCollider;                         // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMeshComponent0;                            // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SharedRoot;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent0;                              // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BellAnim_NewTrack_0_8E9C9FCE45A3279749DE1F8BD8CE9978; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BellAnim__Direction_8E9C9FCE45A3279749DE1F8BD8CE9978; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BellAnim;                                          // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitFromNegativeSide;                               // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_76[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitterActor;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Looping;                                           // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_bell_C* GetDefaultObj();

	void BellAnim__FinishedFunc();
	void BellAnim__UpdateFunc();
	void SpawnDualSenseAudio_Full2D(class USoundBase* Sound, float Volume, float Pitch, float StartTime);
	void HitWithSword();
	void BndEvt__HitWithSwordSoundCollider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void StartRingingGland();
	void SpawnDualSenseAudio(const struct FVector& Location, enum class Enum_ControllerAudio_Type SoundType, class USoundBase* Sound, float SoundVolume, enum class Enum_ControllerAudio_Type VibrationType, class USoundBase* Vibration, float VibrationVolume, bool AttachToComponent, bool UseSocketLocation, class FName SocketName);
	void ExecuteUbergraph_BP_bell(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable, class USoundBase* K2Node_Event_Sound_1, float K2Node_Event_Volume, float K2Node_Event_Pitch, float K2Node_Event_StartTime, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BellHitSound_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, const struct FVector& K2Node_Event_Location, enum class Enum_ControllerAudio_Type K2Node_Event_SoundType, class USoundBase* K2Node_Event_Sound, float K2Node_Event_SoundVolume, enum class Enum_ControllerAudio_Type K2Node_Event_VibrationType, class USoundBase* K2Node_Event_Vibration, float K2Node_Event_VibrationVolume, bool K2Node_Event_AttachToComponent, bool K2Node_Event_UseSocketLocation, class FName K2Node_Event_SocketName, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue_1);
};

}


