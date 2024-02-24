#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x2E2 - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_Grid_Main.wid_Inventory_Grid_Main_C
class UWid_Inventory_Grid_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Inventory_Grid_GrabPanel_C*       GrabPanel;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Grid_C*                 Grid;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_77;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_249;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TScriptInterface<class IWid_IInventoryGridApp_C> CurrentApp;                                        // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                             CurrentGridSize;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewSelection;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            UpdateButtons;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_Inventory_Main_C*                 Parent;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_Main_C*                   StorageParent;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemUsed;                                          // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ItemGrabActive;                                    // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Inventory_Grid_Main_C* GetDefaultObj();

	void IsQuickUseOpen(bool* Result, class UWid_Inventory_QuickMenu_C* K2Node_DynamicCast_AsWid_Inventory_Quick_Menu, bool K2Node_DynamicCast_bSuccess);
	bool QuickMenuInUse(bool CallFunc_BooleanOR_ReturnValue);
	void UpdateButtonsInfo(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool CallFunc_IsQuickUseOpen_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsItemGrabActive_ReturnValue, bool CallFunc_CanSplitItem_Result, bool CallFunc_CanSplitItem_Result_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsItemGrabActive_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsItemGrabActive_ReturnValue_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCheckItem_Item, bool CallFunc_CanBePutToQuickMenu_Result, bool CallFunc_CanRemoveThisItem_CanBeRemoved, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, bool CallFunc_CanBeRemoved_Result, bool CallFunc_CanBeGrabbed_Result, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, bool CallFunc_BooleanAND_ReturnValue_4, class FText CallFunc_GetUseIndicator_Text, bool CallFunc_GetUseIndicator_Update, bool CallFunc_BooleanAND_ReturnValue_5, class FText K2Node_Select_Default, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, class FText K2Node_Select_Default_1, bool CallFunc_CanBeUsed_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo);
	bool IsItemGrabActive(bool CallFunc_BooleanOR_ReturnValue);
	void ChangeApp(TScriptInterface<class IWid_IInventoryGridApp_C> NextApp);
	void GetCurrentSelection(class UWid_Inventory_Grid_Entry_C** CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection);
	void Update(const struct FVector2D& Size, bool IsInStorage, bool IsInStorageInventory, bool IgnoreSelection);
	void Start();
	void QuickUse1();
	void QuickUse2();
	void QuickUse3();
	void QuickUse4();
	void QuickUse5();
	void QuickUse6();
	void QuickUse7();
	void QuickUse8();
	void Assign();
	void Back();
	void Up();
	void Right();
	void Down();
	void Left();
	void FaceRight();
	void Construct();
	void FaceUp();
	void GoBackGrid();
	void GrabItem(const struct FVector2D& Index, class FName ItemId);
	void GoBackGrabPanel();
	void FaceDown();
	void NewSelectionGrid(const struct FVector2D& Index, bool FromKeyboard);
	void OnMovedGrabPanel(const struct FVector2D& Index);
	void L2();
	void R2();
	void RightStick();
	void SwapEvent();
	void DPadUp();
	void DPadRight();
	void DPadDown();
	void DPadLeft();
	void SelectItem(const struct FVector2D& Idx);
	void ReleaseButton();
	void MovedForced(const struct FVector2D& Index);
	void FaceLeft();
	void End();
	void SplitItem(const struct FVector2D& Index, class FName ItemId, float Amount);
	void FaceUpReleased();
	void GrabItemFromButton();
	void SplitItemFromButton();
	void ExecuteUbergraph_wid_Inventory_Grid_Main(int32 EntryPoint, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, class UWid_Inventory_Grid_C* K2Node_DynamicCast_AsWid_Inventory_Grid, bool K2Node_DynamicCast_bSuccess, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_Start_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FVector2D& K2Node_CustomEvent_Index_4, class FName K2Node_CustomEvent_ItemID_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVector2D& CallFunc_GetTileSize_TileSize, const struct FVector2D& K2Node_CustomEvent_Index_3, bool K2Node_CustomEvent_FromKeyboard, const struct FVector2D& K2Node_CustomEvent_Index_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_5, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_6, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, const struct FVector2D& K2Node_Event_Idx, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, const struct FVector2D& K2Node_CustomEvent_Index_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_End_self_CastInput, const struct FVector2D& K2Node_CustomEvent_Index, class FName K2Node_CustomEvent_ItemID, float K2Node_CustomEvent_Amount, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_4, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_7, const struct FVector2D& CallFunc_GetTileSize_TileSize_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_4, class UWid_Inventory_Grid_C* K2Node_DynamicCast_AsWid_Inventory_Grid_1, bool K2Node_DynamicCast_bSuccess_1, class UWid_Inventory_Grid_GrabPanel_C* K2Node_DynamicCast_AsWid_Inventory_Grid_Grab_Panel, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_FaceUp_self_CastInput, bool CallFunc_CanSplitItem_Result, bool CallFunc_CanSplitItem_Result_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_8, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_9, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1);
	void UpdateButtons__DelegateSignature(const struct FStruct_Inventory_ButtonModifyInfo& Info);
	void NewSelection__DelegateSignature(class FName Name, bool FromKeyboard);
	void GoBack__DelegateSignature();
};

}


