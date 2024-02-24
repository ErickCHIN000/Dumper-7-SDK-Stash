#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2E9 - 0x2A8)
// BlueprintGeneratedClass BP_Cat.BP_Cat_C
class ABP_Cat_C : public ASkeletalMeshActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Eye_Right;                                       // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Eye_Left;                                        // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor_PurrAudio_DualSense;                    // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       PurrAudio;                                         // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PlayerTrackingRange;                               // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          PlayerCharacterToLookAt;                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCatVibing;                                        // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Cat_C* GetDefaultObj();

	void CatSkin(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_TwitchDrop_ShouldUseCatSkin_bYes, bool CallFunc_TwitchDrop_ShouldUseCatSkin_bYes_1, class UMaterialInterface* K2Node_Select_Default);
	void SetCatVibing(bool CatVibing, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UCat_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCat_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess);
	void IsCharacterInRange(bool* InRange_, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void BndEvt__PlayerTrackingRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__PlayerTrackingRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnLuteMusic_Bind();
	void OnLuteMusicStop();
	void ReceiveBeginPlay();
	void OnLuteMusicStart();
	void OnSkinChanged(enum class Enum_Skins SkinChanged);
	void ExecuteUbergraph_BP_Cat(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValid_ReturnValue_2, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class ABP_ControllerAudio_C* K2Node_DynamicCast_AsBP_Controller_Audio, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsValid_ReturnValue_3, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class ABP_ControllerAudio_C* K2Node_DynamicCast_AsBP_Controller_Audio_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsCharacterInRange_InRange_, bool CallFunc_Not_PreBool_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, enum class Enum_Skins K2Node_CustomEvent_SkinChanged, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


