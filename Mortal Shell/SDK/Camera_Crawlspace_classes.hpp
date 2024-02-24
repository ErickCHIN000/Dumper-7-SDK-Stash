#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0x255 - 0x220)
// BlueprintGeneratedClass Camera_Crawlspace.Camera_Crawlspace_C
class ACamera_Crawlspace_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          Character;                                         // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DesiredLookAtRotation;                             // 0x240(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        CameraRotationInterpSpeed;                         // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTranslationInterpSpeed;                      // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLerpToBCameraSocket;                              // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACamera_Crawlspace_C* GetDefaultObj();

	void SetCameraSettings(class AZero_Base_C* Self2);
	void SetupCrawlCam(class AZero_Base_C* Character);
	void StopCrawlCamera(class AZero_Base_C* Character);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Camera_Crawlspace(int32 EntryPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AZero_Base_C* K2Node_CustomEvent_Character, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AZero_Base_C* K2Node_CustomEvent_Character_1, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


