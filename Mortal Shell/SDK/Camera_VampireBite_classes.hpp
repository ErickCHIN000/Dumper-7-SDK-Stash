#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x279 - 0x220)
// BlueprintGeneratedClass Camera_VampireBite.Camera_VampireBite_C
class ACamera_VampireBite_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FOV_CameraFollowInterpSpeed_073525AB4A30970F59C529BF9BA98A16; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FOV_FOV_073525AB4A30970F59C529BF9BA98A16;          // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FOV__Direction_073525AB4A30970F59C529BF9BA98A16;   // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FOV;                                               // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          Character;                                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DesiredLookAtRotation;                             // 0x258(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        CameraRotationInterpSpeed;                         // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTranslationInterpSpeed;                      // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2288[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVampire_EnemyChar_C*                  Vamp;                                              // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCameraActive;                                     // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACamera_VampireBite_C* GetDefaultObj();

	void Debug(const class FString& InString);
	void UpdateCameraReference(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	struct FVector GetDesiredCamLocation(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_VInterpTo_ReturnValue);
	struct FRotator GetDesiredCameraRotation(float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue);
	void SetCameraSettings(class AZero_Base_C* Self2);
	void FOV__FinishedFunc();
	void FOV__UpdateFunc();
	void SetupVampireBiteCam(class AZero_Base_C* Character, class AVampire_EnemyChar_C* Vamp);
	void StopBiteCam(class AZero_Base_C* Character);
	void StopCameraEffect();
	void ReceiveTick(float DeltaSeconds);
	void UpdateCamera();
	void ExecuteUbergraph_Camera_VampireBite(int32 EntryPoint, class AZero_Base_C* K2Node_CustomEvent_Character, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode__1, class AZero_Base_C* K2Node_CustomEvent_Character_1, class AVampire_EnemyChar_C* K2Node_CustomEvent_Vamp, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetDesiredCameraRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetDesiredCamLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2);
};

}


