#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x351 - 0x2C0)
// BlueprintGeneratedClass BP_HuntingClue.BP_HuntingClue_C
class ABP_HuntingClue_C : public AHuntingClue
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         InteractionBox;                                    // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                Interactable;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHighlightableComponent*               Highlightable;                                     // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      Spline;                                            // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ClueUpdated;                                       // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        LifeTime;                                          // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_57B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_HuntingClue_C*                     NextHuntingClue;                                   // 0x308(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       SplineLocations;                                   // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACharacter*                            AIReference;                                       // 0x320(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Focused;                                           // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EHuntingClueState                 CurrentState;                                      // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlighted;                                       // 0x32A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57DC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHuntingClueSetupRowHandle            HuntingClueRow;                                    // 0x32C(0x18)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_57EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HuntingManager_C*                  HuntingManagerRef;                                 // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTrail;                                          // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_HuntingClue_C* GetDefaultObj();

	void GetHuntingWidgetLocation(struct FVector* Location);
	void GatherSplineLocations(bool* Return, TArray<struct FVector>* Locations, const TArray<struct FVector>& NewSplineLocations, const struct FVector& SegmentDistance, int32 Segments, const struct FVector& Distance, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FHuntingClueSetup& CallFunc_GetHuntingClueSetupStruct_HuntingClueSetup, enum class EValid CallFunc_GetHuntingClueSetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, class UNavigationSystemV1* CallFunc_GetNavigationSystem_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue);
	void UpdatePerceptionState();
	void UpdateStateVisuals();
	void InitVisuals();
	void UpdateState(bool Highlight, enum class EHuntingClueState OldState, bool Temp_bool_Variable, enum class EHuntingClueState Temp_byte_Variable, bool Temp_bool_Variable_1, enum class EHuntingClueState Temp_byte_Variable_1, enum class EHuntingClueState Temp_byte_Variable_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UBP_HuntingManager_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EHuntingClueState K2Node_Select_Default, enum class EHuntingClueState K2Node_Select_Default_1);
	void FocusUpdated(class AActor* Actor, bool NewFocused, bool CurrentlyFocused, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnRep_SplineLocations();
	void RequestSplineLocations(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UBP_HuntingManager_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void UpdateTrail();
	void OnRep_NextHuntingClue();
	void UpdateVisuals();
	void SetNextClue(class ABP_HuntingClue_C* Clue);
	void RegisterHuntingWidget();
	void GetNextClueDistance(float* Distance);
	void SendSplineLocations(TArray<struct FVector>& Locations);
	void BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature(class UHighlightableComponent* Highlightable, class UPrimitiveComponent* Component, bool bHighlighted);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HuntingClue(int32 EntryPoint, TArray<struct FVector>& K2Node_Event_Locations, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHighlightableComponent* K2Node_ComponentBoundEvent_Highlightable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, bool K2Node_ComponentBoundEvent_bHighlighted, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_HuntingManager_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void ClueUpdated__DelegateSignature();
};

}


