#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x270 - 0x220)
// BlueprintGeneratedClass BP_DeathEffect.BP_DeathEffect_C
class ABP_DeathEffect_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_ScreenDistortion_53A57AEF420603EB918F3DB391B1C6F5; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_Darkening_53A57AEF420603EB918F3DB391B1C6F5; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_VignetteStrength_53A57AEF420603EB918F3DB391B1C6F5; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_Desaturation_53A57AEF420603EB918F3DB391B1C6F5; // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_Depth_53A57AEF420603EB918F3DB391B1C6F5; // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_EffectAlpha_53A57AEF420603EB918F3DB391B1C6F5; // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EffectTimeline__Direction_53A57AEF420603EB918F3DB391B1C6F5; // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EffectTimeline;                                    // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PP_Mat;                                            // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Sound_DeathTransition;                             // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeathEffect_C* GetDefaultObj();

	void EffectTimeline__FinishedFunc();
	void EffectTimeline__UpdateFunc();
	void EffectTimeline__FadeOut__EventFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DeathEffect(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, const struct FLinearColor& CallFunc_Conv_FloatToLinearColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue);
};

}


