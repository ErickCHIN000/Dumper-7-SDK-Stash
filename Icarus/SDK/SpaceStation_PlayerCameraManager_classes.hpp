#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2860 - 0x2810)
// BlueprintGeneratedClass SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C
class ASpaceStation_PlayerCameraManager_C : public APlayerCameraManager
{
public:
	float                                        InteractionAlpha;                                  // 0x2810(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_InteractionSceneBase_C*            CurrentInteraction;                                // 0x2818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            OriginalTransform;                                 // 0x2820(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        InteractionBlendSpeed;                             // 0x2850(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacterSpace*           Player;                                            // 0x2858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpaceStation_PlayerCameraManager_C* GetDefaultObj();

	void InteractionChangedCheck(class UBP_InteractionComponentBase_C* CallFunc_GetComponentByClass_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_InteractionSceneBase_C* CallFunc_GetCurrentInteraction_CurrentInteraction, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV, const struct FTransform& NewTransform, bool InteractionChanged, class AIcarusPlayerCharacterSpace* K2Node_DynamicCast_AsIcarus_Player_Character_Space, bool K2Node_DynamicCast_bSuccess, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetInteractionBlendSpeed_BlendSpeed, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue_1, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue);
};

}


