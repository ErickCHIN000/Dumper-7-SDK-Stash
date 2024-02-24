#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2B0 - 0x220)
// BlueprintGeneratedClass BP_FancyNotification.BP_FancyNotification_C
class ABP_FancyNotification_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 ScreenDistortion;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Opacity_27AF5EDB4E71F03B5CC8E59CEB667BF4; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_SmokeRetainerEffect_27AF5EDB4E71F03B5CC8E59CEB667BF4; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_27AF5EDB4E71F03B5CC8E59CEB667BF4; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_27AF5EDB4E71F03B5CC8E59CEB667BF4; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFancyNotificationWidget_C*            FancyNotificationWidget;                           // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNotificationFinished;                            // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              ScreenDistortionMat;                               // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Heading;                                           // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Text;                                              // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         UnknownShellRetrievedMessage;                      // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1AA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFancyNotificationWidget_UnknownShellRetrieved_C* FancyNotificationWidgetUnknownShellRetrieved;      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FancyNotification_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_FancyNotification(int32 EntryPoint, class UFancyNotificationWidget_UnknownShellRetrieved_C* CallFunc_Create_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UFancyNotificationWidget_C* CallFunc_Create_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARadialBlurCustomCurve_UnlockNotification_C* CallFunc_FinishSpawningActor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ARadialBlurCustomCurve_UnlockNotification_C* CallFunc_FinishSpawningActor_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnNotificationFinished__DelegateSignature();
};

}


