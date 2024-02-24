#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x129 (0x349 - 0x220)
// BlueprintGeneratedClass BP_RuneFancyNotification.BP_RuneFancyNotification_C
class ABP_RuneFancyNotification_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 ScreenDistortion;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FancyNotification_Opacity_0739AAAB4870B892DD8B24B945339C1B; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FancyNotification_SmokeRetainerEffect_0739AAAB4870B892DD8B24B945339C1B; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FancyNotification_Distortion_0739AAAB4870B892DD8B24B945339C1B; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_FancyNotification__Direction_0739AAAB4870B892DD8B24B945339C1B; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_FancyNotification;                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNotificationFinished;                            // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              ScreenDistortionMat;                               // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Rune                          RuneForNotify;                                     // 0x268(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_RuneFancyNotification_C*           UI_RuneFancyNotification;                          // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_StormMode_C*               GameplayPC_StormMode;                              // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsBonusRune;                                       // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_RuneFancyNotification_C* GetDefaultObj();

	void Timeline_FancyNotification__FinishedFunc();
	void Timeline_FancyNotification__UpdateFunc();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void StartEffect();
	void ExecuteUbergraph_BP_RuneFancyNotification(int32 EntryPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UUI_RuneFancyNotification_C* CallFunc_Create_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARadialBlurCustomCurve_UnlockNotification_C* CallFunc_FinishSpawningActor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ARadialBlurCustomCurve_UnlockNotification_C* CallFunc_FinishSpawningActor_ReturnValue_1);
	void OnNotificationFinished__DelegateSignature();
};

}


