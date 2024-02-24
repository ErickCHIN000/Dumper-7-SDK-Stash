#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x72 (0x638 - 0x5C6)
// BlueprintGeneratedClass BP_SkeletalItem_Wood_Flare.BP_SkeletalItem_Wood_Flare_C
class ABP_SkeletalItem_Wood_Flare_C : public ABP_SkeletalItem_LightBase_C
{
public:
	uint8                                        Pad_DD3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusPointLight_C*                BP_IcarusPointLight;                               // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     FireSettingCapsule;                                // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TorchFire;                                      // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Fill;                                   // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Fire_Loop;                                    // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Hit;                                               // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AudioParamUpdateHandle;                            // 0x600(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocLast;                                           // 0x608(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FxFireLastCamRot;                                  // 0x614(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        DurabilityDelay;                                   // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Flamey;                                        // 0x624(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent_Ignite;                                  // 0x628(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_Douse;                                   // 0x630(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Wood_Flare_C* GetDefaultObj();

	void GetStateChangeAudioOneshot(bool IsLit, class UFMODEvent** OneshotEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Variable, class UFMODEvent* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void StopAudioParameterUpdates();
	void SetLightAudioState(bool IsLit, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFMODEvent* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
	void UpdateLightSlotPosition(const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult);
	void AudioUpdateIntensity(const struct FVector& LocCurrent, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void LightUpdated(float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, bool CallFunc_IsLit_Lit, bool Temp_bool_Variable_2, float K2Node_Select_Default, bool CallFunc_IsLit_Lit_1, float K2Node_Select_Default_1, bool CallFunc_IsLit_Lit_2, float K2Node_Select_Default_2);
	void UserConstructionScript(float CallFunc_RandomFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void DurabilityDamage();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Flare(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_2, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Dot_VectorVector_ReturnValue_3, float CallFunc_FClamp_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsLit_Lit, bool CallFunc_DealSelfDamage_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


