#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD6 (0x3E8 - 0x312)
// BlueprintGeneratedClass BP_DeathShell.BP_DeathShell_C
class ABP_DeathShell_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_845[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                 RadialForce;                                       // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSkeletalMesh;                                // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_StoneFormEffect_TimeDilation_0569B1274A5B19EF6754798B64950BEF; // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_StoneFormEffect__Direction_0569B1274A5B19EF6754798B64950BEF; // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_855[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_StoneFormEffect;                          // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseSnapshot                         PoseToUse;                                         // 0x348(0x38)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USkeletalMesh*                         EquippedWeaponSKMesh;                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EArmorTypes                       PlayerArmorWhenCreated;                            // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_85B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         PlayerPoseToBlendToOnUse;                          // 0x390(0x38)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector                               IntialStatueLoc;                                   // 0x3C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_863[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBuffObject_C*>                 Buffs;                                             // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeathShell_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success);
	void Timeline_StoneFormEffect__FinishedFunc();
	void Timeline_StoneFormEffect__UpdateFunc();
	void ReceiveBeginPlay();
	void JoinShell();
	void EffectsAndForceFeedback();
	void InterpStatueToPlayer();
	void HandleBuffsAfterSpawn();
	void HandleBuffsOnRegain();
	void RemoveBuff(class UBuffObject_C*& Item);
	void ExecuteUbergraph_BP_DeathShell(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UDeathShell_AnimBP_C* K2Node_DynamicCast_AsDeath_Shell_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, int32 Temp_int_Loop_Counter_Variable_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UDeathShell_AnimBP_C* K2Node_DynamicCast_AsDeath_Shell_Anim_BP_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UBuffObject_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UBuffObject_C* CallFunc_Array_Get_Item_1, class UBuffObject_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UBuffObject_C* K2Node_CustomEvent_Item, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4);
};

}


