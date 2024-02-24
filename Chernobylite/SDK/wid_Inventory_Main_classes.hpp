#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x300 - 0x2A0)
// WidgetBlueprintGeneratedClass wid_Inventory_Main.wid_Inventory_Main_C
class UWid_Inventory_Main_C : public UWid_pda_IFullScreen_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Buttons_C*              Buttons;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Desc_C*                 Desc;                                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_FoodInfo_C*             FoodInfo;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Main_C*            GridMain;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_C*            QuickMenu;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Geiger_Tutorial_C*      TutorialGeiger;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_HP_V2_C*                Wid_Inventory_HP_V2;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_WaterMark_C*                      Wid_WaterMark;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CurrentApp;                                        // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Inventory_Main_C* GetDefaultObj();

	void ShowTutorial(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void ChangeApp(TScriptInterface<class IWid_IInventoryApp_C> NewApp);
	void InputUp();
	void InputDown();
	void InputLeft();
	void InputRight();
	void InputFaceDown();
	void QuickMenuUpdatedDelegate();
	void InventoryUpdatedDelegate();
	void DPadUp();
	void DPadRight();
	void DPadDown();
	void DPadLeft();
	void InputLeftStick();
	void InputFaceRight();
	void GoBackQuickMenu();
	void InputFaceUp();
	void InputFaceLeft();
	void GoBackGridMain();
	void NewSelection(class FName Name, bool FromKeyboard);
	void PreConstruct(bool IsDesignTime);
	void InputR2();
	void InputL2();
	void InputRightStick();
	void QuickUse1();
	void QuickUse2();
	void QuickUse3();
	void QuickUse4();
	void InputFaceLeftReleased();
	void UpdateButtons(const struct FStruct_Inventory_ButtonModifyInfo& Info);
	void QuickUse5();
	void QuickUse6();
	void QuickUse7();
	void QuickUse8();
	void InputAssign();
	void AppClosed();
	void Destruct();
	void UnbindInventoryUpdatedDelegate();
	void Sort_Inventory();
	void BackClicked();
	void InputFaceUpReleased();
	void GrabItem();
	void CustomEvent_0();
	void AppOpened();
	void OnQuickMenuStarted();
	void ExecuteUbergraph_wid_Inventory_Main(int32 EntryPoint, bool CallFunc_QuickMenuInUse_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_CloseInventory_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_1, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item, bool CallFunc_CanBePutToQuickMenu_Result, class FName K2Node_CustomEvent_Name, bool K2Node_CustomEvent_FromKeyboard, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_CustomEvent_Info, bool CallFunc_SortBySize_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_QuickMenuInUse_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo);
};

}


