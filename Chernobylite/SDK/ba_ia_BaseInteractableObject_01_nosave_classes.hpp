#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x2D1 - 0x220)
// BlueprintGeneratedClass ba_ia_BaseInteractableObject_01_nosave.ba_ia_BaseInteractableObject_01_nosave_C
class Aba_ia_BaseInteractableObject_01_nosave_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetComponent*                      InteractIcon;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInteractionUnlocked;                            // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_196A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       ComponentBeignInteratedOn;                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_IndicationCategory           IndicatorCategory;                                 // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1970[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInteractionStarted;                              // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bIsObjectVisible;                                  // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1986[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NearInteractionDistance;                           // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FarInteractionDistance;                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_198C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInteractionFinished;                             // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  CustomName;                                        // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  CustomAction;                                      // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector2D                             InteractionAngle;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  CustomNameRowName;                                 // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  CustomActionRowName;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  PCAction;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DisableInFight;                                    // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class Aba_ia_BaseInteractableObject_01_nosave_C* GetDefaultObj();

	bool GetItemFromDistributor();
	class FName GetComponentTagToSkipWhenOverlappingSphere();
	bool GetSkipChildComponentWhenOverlapping();
	float GetOverrideMaxInteractionDistance();
	bool GetShouldOverrideMaxInteractionDistance();
	struct FVector2D GetActorInteractionAngle();
	float GetFarInteractionDistance();
	float GetNearInteractionDistance();
	bool SupportsOnlyFocusEvents();
	bool IsInteractionUnlocked();
	bool IsObjectVisible();
	float MaxInteractionDistance();
	void Get_Interaction_Widget(class UWid_col_ViewableObjectInteractivePoint_01_C** Widget, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess);
	void InternalAbortInteraction(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess);
	void InternalShowNearInteractIcon(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess);
	void InternalDefaultPressedComponentImplementation(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void InternalHideInteractIcon(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess);
	void InternalShowInteractIcon(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess);
	void InternalOnObjectVisibleStateChanged();
	void InternalSetInteractIcon(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable_1, const struct FSt_Interactable_Label& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSt_Interactable_Label& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess);
	void InternalFinishInteraction(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess);
	void InternalOnInteractionLockedStateChanged();
	void UserConstructionScript(bool CallFunc_IsInEditor_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1);
	void SetItemAndAmount(enum class EResourceType Type, float Amount, class UStaticMesh* SM, float BaseAmountValue);
	void SetItemFromDistributor();
	void OnInteractionReleasedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentPlayerWasInteractingWith);
	void LockInteraction();
	void UnlockInteraction();
	void SetInteractionLocked(bool bLocked);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void ReceiveBeginPlay();
	void SetObjectVisible(bool bVisible);
	void OnPlayerNearFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerNearFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void ExecuteUbergraph_ba_ia_BaseInteractableObject_01_nosave(int32 EntryPoint, bool K2Node_Event_bLocked, class AMainPawnCpp* K2Node_Event_PlayerPawn_5, class UActorComponent* K2Node_Event_ComponentPlayerWasInteractingWith, class AMainPawnCpp* K2Node_Event_PlayerPawn_4, class UActorComponent* K2Node_Event_ComponentHit_4, class AMainPawnCpp* K2Node_Event_PlayerPawn_3, class UActorComponent* K2Node_Event_ComponentHit_3, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, bool K2Node_Event_bVisible, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EResourceType K2Node_Event_Type, float K2Node_Event_Amount, class UStaticMesh* K2Node_Event_SM, float K2Node_Event_BaseAmountValue, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit);
	void OnInteractionFinished__DelegateSignature();
	void OnInteractionStarted__DelegateSignature(class Aba_ia_BaseInteractableObject_01_C* Sender);
};

}


