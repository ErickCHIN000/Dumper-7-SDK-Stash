#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x100 - 0xA0)
// BlueprintGeneratedClass BP_UI_NPCMenuComponent.BP_UI_NPCMenuComponent_C
class UBP_UI_NPCMenuComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FDataTableRowHandle>           StoreItemsForSale;                                 // 0xA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>           NPCMenusAvailable;                                 // 0xB8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FDataTableRowHandle>           ExclusiveCraftingContent;                          // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>           VC_Store_Content;                                  // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Buyer;                                             // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           StoreItemsToBuy;                                   // 0xF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_UI_NPCMenuComponent_C* GetDefaultObj();

	void SetupNPCMGMT(TArray<struct FDataTableRowHandle>& MenuContent);
	void ShowMerchantStorePanel();
	void RemoveOpenedWindow();
	void SetupScreen(enum class E_ui_NPCMenus Menu, class FText MenuName, TArray<struct FDataTableRowHandle>& MenuContent);
	void Initialize();
	void ExecuteUbergraph_BP_UI_NPCMenuComponent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class ANWXHUDBase* CallFunc_GetNWXHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class E_ui_NPCMenus K2Node_CustomEvent_Menu, class FText K2Node_CustomEvent_MenuName, TArray<struct FDataTableRowHandle>& K2Node_CustomEvent_MenuContent, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


