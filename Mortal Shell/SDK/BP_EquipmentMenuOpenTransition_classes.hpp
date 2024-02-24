#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2B0 - 0x220)
// BlueprintGeneratedClass BP_EquipmentMenuOpenTransition.BP_EquipmentMenuOpenTransition_C
class ABP_EquipmentMenuOpenTransition_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_ExposureCompensation_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Grain_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Vignette_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Gain_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_FogDistance_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_DistortionDistance_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ConsumeEffect_Blendweight_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ConsumeEffect__Direction_9927FD834FF1C96FF54DBFB16BCD4C48; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ConsumeEffect;                                     // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorTransitionEffectTimeline_Gain_A1E3BB0A4498FC1308CCAEB54EDBFE4E; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorTransitionEffectTimeline_FogDistance_A1E3BB0A4498FC1308CCAEB54EDBFE4E; // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorTransitionEffectTimeline_DistortionDistance_A1E3BB0A4498FC1308CCAEB54EDBFE4E; // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoorTransitionEffectTimeline_Blendweight_A1E3BB0A4498FC1308CCAEB54EDBFE4E; // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DoorTransitionEffectTimeline__Direction_A1E3BB0A4498FC1308CCAEB54EDBFE4E; // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DoorTransitionEffectTimeline;                      // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PPMaterial;                                        // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTransitionFinished;                              // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          TransitionTimerHandle;                             // 0x298(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTransitionEnd;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_EquipmentMenuOpenTransition_C* GetDefaultObj();

	void DoorTransitionEffectTimeline__FinishedFunc();
	void DoorTransitionEffectTimeline__UpdateFunc();
	void ConsumeEffect__FinishedFunc();
	void ConsumeEffect__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayConsumeEffect();
	void PlayHalfTransitionEffect();
	void Transition();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_EquipmentMenuOpenTransition(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1);
	void OnTransitionEnd__DelegateSignature();
	void OnTransitionFinished__DelegateSignature();
};

}


