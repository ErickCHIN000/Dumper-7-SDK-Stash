#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x1E8 - 0x110)
// BlueprintGeneratedClass BP_UIProjectionComponent_Tooltip.BP_UIProjectionComponent_Tooltip_C
class UBP_UIProjectionComponent_Tooltip_C : public UBP_UIProjectionComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsAlive;                                           // 0x118(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_966[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   Player;                                            // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SettingsEnable;                                    // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StatAbilityEnable;                                 // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_96E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DotToSee;                                          // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangeToDotSee;                                     // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangeToCloseCircleSee;                             // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DotSeeEnable;                                      // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CircleCloseSee;                                    // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_977[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusActor*                          CurrentItem;                                       // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightOffset;                                       // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpOffset;                                          // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnItemChanged;                                     // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FHitResult                            CurrentInteractableHit;                            // 0x160(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_Tooltip_C* GetDefaultObj();

	void TryUpdateWidgetClass(TSoftClassPtr<class UHuntingWidget> OverrideClass, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_SoftClassReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IBP_TooltipWidgetInterface_C> K2Node_DynamicCast_AsBP_Tooltip_Widget_Interface, bool K2Node_DynamicCast_bSuccess, TSoftClassPtr<class UHuntingWidget> CallFunc_GetTooltipClassOverride_ClassOverride, bool CallFunc_IsValidSoftClassReference_ReturnValue_1);
	void GatherBounds();
	struct FVector GetProjectionLocation(class APawn* CallFunc_GetPlayerPawn_ReturnValue, TScriptInterface<class IBP_TooltipWidgetInterface_C> K2Node_DynamicCast_AsBP_Tooltip_Widget_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetTooltipRenderLocation_WorldLocation, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FInteractableRowHandle& CallFunc_MakeLiteralInteractable_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInteractableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_FRowHandleFRowHandle_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_VSizeXY_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, class UBP_UIProjectionLocation_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void UpdateWidget(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
	void UpdateEnabled(bool CurrentItemChanged, class AIcarusActor* IcarusActor, bool ToolTIpVisible, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetTrait_Paths, class UItemableComponent* CallFunc_GetTrait_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInteractableComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsActive_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_2, class UHighlightableComponent* CallFunc_GetTrait_ReturnValue_2, const struct FHighlightableData& CallFunc_GetHighlightableData_OutData, bool CallFunc_GetHighlightableData_ReturnValue, bool CallFunc_IsActive_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_4, class UInteractableBehaviour* CallFunc_GetCurrentInteractForType_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_2, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetProjectionLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2);
	void OnRep_IsAlive();
	void GetWidgetLocation(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetWidgetLocation_Location, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_UIProjectionComponent_Tooltip(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
	void OnItemChanged__DelegateSignature();
};

}


