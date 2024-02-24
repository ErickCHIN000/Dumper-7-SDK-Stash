#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x52 (0x5E2 - 0x590)
// BlueprintGeneratedClass BP_PartBase.BP_PartBase_C
class ABP_PartBase_C : public AIcarusRocketPart
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x590(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UShelteredModifierComponent*           ShelteredModifier;                                 // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavModifierComponent*                 NavModifier;                                       // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_DropShip_C*                        AssociatedDropShip;                                // 0x5A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            SyncedTransform;                                   // 0x5B0(0x30)(Edit, BlueprintVisible, Net, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn)
	bool                                         ClientSync;                                        // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Collision;                                         // 0x5E1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_PartBase_C* GetDefaultObj();

	void Update_Fmod_Dropship_State(enum class EDropshipDescentStateFMODParam DropshipSequenceState);
	void ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer);
	void AssembledByDatabase();
	void OnRep_Collision(class UPrimitiveComponent* CallFunc_GetMesh_Mesh);
	void OnRep_SyncedTransform(const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult);
	void ReadyCheck(bool* Success);
	void TriggerEvent(const struct FDropShipActionsEnum& Actions);
	void GetMesh(class UPrimitiveComponent** Mesh);
	void ReceiveBeginPlay();
	void SetEditorHighlight(bool Highlight);
	void SetEditorInteractable(bool Interactable);
	void Enable_Interactable_Collision();
	void OnHighlightChanged(class UHighlightableComponent* Highlightable, class UPrimitiveComponent* Component, bool bHighlighted);
	void Multi_PlayAnimation(class USkeletalMeshComponent* SkeletalMesh, class UAnimationAsset* Animation, float StartingPosition, bool Reverse);
	void Debug_PrintTransformLocation();
	void ExecuteUbergraph_BP_PartBase(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool K2Node_Event_Highlight, const class FString& CallFunc_Conv_RotatorToString_ReturnValue, bool K2Node_Event_Interactable, class UHighlightableComponent* K2Node_CustomEvent_Highlightable, class UPrimitiveComponent* K2Node_CustomEvent_Component, bool K2Node_CustomEvent_bHighlighted, enum class EValid CallFunc_GetTrait_Paths, class UHighlightableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USkeletalMeshComponent* K2Node_CustomEvent_SkeletalMesh, class UAnimationAsset* K2Node_CustomEvent_Animation, float K2Node_CustomEvent_StartingPosition, bool K2Node_CustomEvent_Reverse, class UPrimitiveComponent* CallFunc_GetMesh_Mesh, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const class FString& CallFunc_Conv_RotatorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
};

}


