#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x2C1 - 0x220)
// BlueprintGeneratedClass ba_Crafting_Base_02.ba_Crafting_Base_02_C
class Aba_Crafting_Base_02_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  MovingMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       MovingMeshTarget;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubc_Crafting_New_C*                    bc_Crafting_New;                                   // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FlourishTimeline_RotationOffset_723981D14C29F32C9E444F96D638F28F; // 0x260(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlourishTimeline_Z_Offset_723981D14C29F32C9E444F96D638F28F; // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        FlourishTimeline_movement_723981D14C29F32C9E444F96D638F28F; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                FlourishTimeline__Direction_723981D14C29F32C9E444F96D638F28F; // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_CB0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FlourishTimeline;                                  // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CraftingEnd;                                       // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Locked;                                            // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CraftingStart;                                     // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         BlendPending;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CBC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CraftingEndDelayed;                                // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowCraftingTutorial;                              // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class Aba_Crafting_Base_02_C* GetDefaultObj();

	void FlourishTimeline__FinishedFunc();
	void FlourishTimeline__UpdateFunc();
	void InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key);
	void End();
	void LeftTab();
	void RightTab();
	void LeftItem();
	void RightItem();
	void Craft();
	void Back();
	void GoBack();
	void Flourish(class FName ItemId);
	void Start();
	void SpamParticles();
	void InputAnyGamepad();
	void InputAnyKeyboard();
	void ExecuteUbergraph_ba_Crafting_Base_02(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, bool Temp_bool_Variable, TSubclassOf<class ACGMovementState> Temp_class_Variable, TSubclassOf<class ACGMovementState> Temp_class_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class FName K2Node_CustomEvent_ItemID, bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, int32 Temp_int_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, TSubclassOf<class ACGMovementState> K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_2, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance);
	void CraftingEndDelayed__DelegateSignature();
	void CraftingStart__DelegateSignature();
	void CraftingEnd__DelegateSignature();
};

}


