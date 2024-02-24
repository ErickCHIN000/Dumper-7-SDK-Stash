#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x428 - 0x220)
// BlueprintGeneratedClass ba_UpgradeSystem_Base_00.ba_UpgradeSystem_Base_00_C
class Aba_UpgradeSystem_Base_00_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                DummyAnimationMesh;                                // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class Ubc_UpgradeSystem_New_02_C*            UpgradeSystem_sceneComp;                           // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MovingMesh;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       MovingMeshTarget;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCameraComponent*                      UpgradeSystemCamera;                               // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               FlourishTimeline_RotationOffset_6DC765F447C741258C4C7B84F9DCD990; // 0x268(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlourishTimeline_Z_Offset_6DC765F447C741258C4C7B84F9DCD990; // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        FlourishTimeline_movement_6DC765F447C741258C4C7B84F9DCD990; // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                FlourishTimeline__Direction_6DC765F447C741258C4C7B84F9DCD990; // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_1430[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FlourishTimeline;                                  // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CraftingEnd;                                       // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Locked;                                            // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CraftingStart;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         BlendPending;                                      // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_144E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CameraDefaultLocation;                             // 0x2B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CameraDefaultRotation;                             // 0x2C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1454[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EUpgradeType, struct FVector> HackCameraOffsets;                                 // 0x2D0(0x50)(Edit, BlueprintVisible)
	TMap<enum class EUpgradeType, struct FRotator> HackCameraOffsetsRotation;                         // 0x320(0x50)(Edit, BlueprintVisible)
	TMap<enum class EUpgradeType, struct FVector> HackMeshOffsets;                                   // 0x370(0x50)(Edit, BlueprintVisible)
	TMap<enum class EUpgradeType, struct FRotator> HackMeshOffsetsRotation;                           // 0x3C0(0x50)(Edit, BlueprintVisible)
	struct FRotator                              MeshDefaultRotation;                               // 0x410(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               MeshDefaultLocation;                               // 0x41C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_UpgradeSystem_Base_00_C* GetDefaultObj();

	void FlourishTimeline__FinishedFunc();
	void FlourishTimeline__UpdateFunc();
	void InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key);
	void Back();
	void GoBack();
	void Flourish(class FName UniqID, class ACGActiveItem* Item, class FName Name);
	void LeftItem();
	void RightTab();
	void LeftTab();
	void End();
	void SpamParticles(const struct FVector& NewParam);
	void Craft();
	void Start(enum class EGunChoice GunType, bool IsOnField);
	void RightItem();
	void InputAnyKeyboard();
	void InputAnyGamepad();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ba_UpgradeSystem_Base_00(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TSubclassOf<class ACGMovementState> Temp_class_Variable, const struct FKey& K2Node_InputActionEvent_Key, class FName K2Node_CustomEvent_UniqID, class ACGActiveItem* K2Node_CustomEvent_Item, class FName K2Node_CustomEvent_Name, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, TSubclassOf<class ACGMovementState> Temp_class_Variable_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& K2Node_CustomEvent_NewParam, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, bool Temp_bool_Variable, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FVector& CallFunc_GetUpgradeLocation_ReturnValue, enum class EGunChoice K2Node_CustomEvent_GunType, bool K2Node_CustomEvent_IsOnField, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_4, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_VLerp_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_HideShowActiveItem_OutActionSuccessful, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TSubclassOf<class ACGMovementState> K2Node_Select_Default, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_3);
	void CraftingStart__DelegateSignature();
	void CraftingEnd__DelegateSignature();
};

}


