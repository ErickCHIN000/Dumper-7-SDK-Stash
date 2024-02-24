#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAA (0x2CA - 0x220)
// BlueprintGeneratedClass BP_StormModeMainMenuTransition.BP_StormModeMainMenuTransition_C
class ABP_StormModeMainMenuTransition_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Deactivate_Early_Alpha_FF81E53D446FB89E7FEA7DB8B6437E3F; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Deactivate_Early__Direction_FF81E53D446FB89E7FEA7DB8B6437E3F; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Deactivate_Early;                         // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Transition_Effect_Gain_519CEF2F453077F4D7B3BB935E20264D; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Transition_Effect_FogDistance_519CEF2F453077F4D7B3BB935E20264D; // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Transition_Effect_DistortionDistance_519CEF2F453077F4D7B3BB935E20264D; // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Transition_Effect_Blendweight_519CEF2F453077F4D7B3BB935E20264D; // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Transition_Effect__Direction_519CEF2F453077F4D7B3BB935E20264D; // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Transition_Effect;                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_ExposureCompensation_D78B230F41CE9F735FEEC6B771CB3A60; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Grain_D78B230F41CE9F735FEEC6B771CB3A60; // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Vignette_D78B230F41CE9F735FEEC6B771CB3A60; // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Gain_D78B230F41CE9F735FEEC6B771CB3A60; // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_FogDistance_D78B230F41CE9F735FEEC6B771CB3A60; // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_DistortionDistance_D78B230F41CE9F735FEEC6B771CB3A60; // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Blendweight_D78B230F41CE9F735FEEC6B771CB3A60; // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ConsumeEffect__Direction_D78B230F41CE9F735FEEC6B771CB3A60; // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ConsumeEffect;                                     // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PPMaterial;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTransitionFinished;                              // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          TransitionTimerHandle;                             // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTransitionEnd;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AutoActivate;                                      // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AlmostFinished;                                    // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_StormModeMainMenuTransition_C* GetDefaultObj();

	void Timeline_Transition_Effect__FinishedFunc();
	void Timeline_Transition_Effect__UpdateFunc();
	void Timeline_Transition_Effect__AlmostFinished__EventFunc();
	void ConsumeEffect__FinishedFunc();
	void ConsumeEffect__UpdateFunc();
	void Timeline_Deactivate_Early__FinishedFunc();
	void Timeline_Deactivate_Early__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayConsumeEffect();
	void PlayHalfTransitionEffect();
	void Transition();
	void ReceiveDestroyed();
	void DeactivateEarly();
	void ExecuteUbergraph_BP_StormModeMainMenuTransition(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, bool CallFunc_Not_PreBool_ReturnValue);
	void OnTransitionEnd__DelegateSignature();
	void OnTransitionFinished__DelegateSignature();
};

}


