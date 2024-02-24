#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x338 - 0x2A8)
// WidgetBlueprintGeneratedClass UMG_ContextMenu_List.UMG_ContextMenu_List_C
class UUMG_ContextMenu_List_C : public UUMG_ContextMenu_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BackFill;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ItemBorder;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemContainer;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                DefaultListItemClass;                              // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultListGroupClass;                             // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGroupContainers;                                // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FContextMenuGroupTypesRowHandle, class UUMG_ContextMenu_List_Group_C*> GroupWidgets;                                      // 0x2E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector2D                             ScreenPadding;                                     // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ContextMenu_List_C* GetDefaultObj();

	void FitPositionToScreen(const struct FVector2D& InPosition, struct FVector2D* OutPosition, const struct FVector2D& MaxScreenBounds, const struct FVector2D& MinScreenBounds, const struct FVector2D& WidgetSize, float CallFunc_GetViewportScale_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1);
	void OnCloseInventory();
	void GetOrCreateGroup(const struct FContextMenuGroupTypesRowHandle& GroupRowHandle, class UUMG_ContextMenu_List_Group_C** GroupWidget, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FContextMenuGroupType& CallFunc_GetContextMenuGroupTypesStruct_ContextMenuGroupTypes, enum class EValid CallFunc_GetContextMenuGroupTypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMG_ContextMenu_List_Group_C* CallFunc_Create_ReturnValue, class UUMG_ContextMenu_List_Group_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void NeedsAnyGroups(TArray<struct FContextMenuItemData>& ContextMenuItems, bool* NeedsGroups, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FContextMenuItemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnWidgetSelected(class UUMG_ContextMenu_List_Item_C* ItemClicked);
	void ShowMenu(const struct FVector2D& ScreenPosition, class FText& MenuName, TSoftObjectPtr<class UTexture2D>& MenuIcon, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, const struct FVector2D& CallFunc_FitPositionToScreen_OutPosition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1);
	void CreateItem(int32 Index, const struct FContextMenuItemData& ContextMenuItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_ContextMenu_List_Group_C* CallFunc_GetOrCreateGroup_GroupWidget, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMG_ContextMenu_List_Item_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void AddItems(TArray<struct FContextMenuItemData>& ContextMenuItems);
	void CloseMenu();
	void ExecuteUbergraph_UMG_ContextMenu_List(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FContextMenuItemData>& K2Node_Event_ContextMenuItems, bool CallFunc_NeedsAnyGroups_NeedsGroups, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


