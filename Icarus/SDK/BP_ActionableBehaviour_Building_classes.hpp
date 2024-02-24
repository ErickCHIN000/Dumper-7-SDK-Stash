#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x338 - 0x328)
// BlueprintGeneratedClass BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C
class UBP_ActionableBehaviour_Building_C : public UBP_ActionableBehaviour_Radial_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          ReloadTimer;                                       // 0x330(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Building_C* GetDefaultObj();

	void GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems, bool RestrictVariations, bool LockVariations, const TArray<struct FContextMenuItemData>& ContextMenuItems, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FSessionFlagsRowHandle& CallFunc_MakeLiteralSessionFlags_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasSessionFlag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSessionFlagsRowHandle& CallFunc_MakeLiteralSessionFlags_ReturnValue_1, bool CallFunc_HasSessionFlag_ReturnValue_1, bool K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess_1, const struct FBuildableData& CallFunc_GetBuildableData_BuildableData, enum class EDataValid CallFunc_GetBuildableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FBuildingVariation& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FBuildingPiece& CallFunc_GetBuildingPiecesStruct_BuildingPieces, enum class EValid CallFunc_GetBuildingPiecesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasCraftingRequirements_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Icon_or_Missing_Output, bool CallFunc_BooleanAND_ReturnValue, const struct FBuildingLookup& CallFunc_GetBuildingLookupStruct_BuildingLookup, enum class EValid CallFunc_GetBuildingLookupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, int32 CallFunc_Array_Add_ReturnValue);
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReloadHeld();
	void MenuItemSelected(class FName ItemIdentifier, int32 ItemPayload);
	void OpenRadialMenu();
	void OnContextMenuSegmentHighlightChanged(class UUMG_ContextMenu_Radial_Item_C* Segment);
	void ExecuteUbergraph_BP_ActionableBehaviour_Building(int32 EntryPoint, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UBP_PlayerBuildingPlacement_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_Event_ItemIdentifier, int32 K2Node_Event_ItemPayload, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid, class UUMG_ContextMenu_Radial_Item_C* K2Node_CustomEvent_Segment, class UUMG_ContextMenu_Radial_C* K2Node_DynamicCast_AsUMG_Context_Menu_Radial, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue_1, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid_1);
};

}


