#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ContextMenu_Base.UMG_ContextMenu_Base_C
class UUMG_ContextMenu_Base_C : public UContextMenuWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  MenuName;                                          // 0x268(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>             MenuIcon;                                          // 0x280(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ContextMenu_Base_C* GetDefaultObj();

	void CreateItem(int32 Index, const struct FContextMenuItemData& ContextMenuItem);
	void ShowMenu(const struct FVector2D& ScreenPosition, class FText& MenuName, TSoftObjectPtr<class UTexture2D>& MenuIcon);
	void CloseMenu();
	void AddItems(TArray<struct FContextMenuItemData>& ContextMenuItems);
	void Construct();
	void HidePanelDisplay();
	void ExecuteUbergraph_UMG_ContextMenu_Base(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FVector2D& K2Node_Event_ScreenPosition, class FText K2Node_Event_MenuName, TSoftObjectPtr<class UTexture2D> K2Node_Event_MenuIcon, TArray<struct FContextMenuItemData>& K2Node_Event_ContextMenuItems, const struct FContextMenuItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


