#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x2E2 - 0x260)
// WidgetBlueprintGeneratedClass wid_Storage_Grid_Main.wid_Storage_Grid_Main_C
class UWid_Storage_Grid_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Storage_Grid_GrabPanel_C*         GrabPanel1;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Storage_Grid_C*                   Grid;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TScriptInterface<class IWid_IInventoryGridApp_C> CurrentApp;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                             CurrentGridSize;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewSelection;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            UpdateButtons;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_Storage_Main_C*                   Parent;                                            // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MoveForced;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_Loot_Main_C*                      LootParent;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_in_storage;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Is_in_storage_inventory;                           // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Storage_Grid_Main_C* GetDefaultObj();

	void ChangeApp(TScriptInterface<class IWid_IInventoryGridApp_C> NextApp);
	void GetCurrentSelection(class UWid_Inventory_Grid_Entry_C** CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection);
	void Update(const struct FVector2D& Size, bool IgnoreSelection, bool IsInEnemyInventory);
	void Start();
	void End();
	void FaceLeft();
	void QuickUse1();
	void QuickUse2();
	void QuickUse3();
	void QuickUse4();
	void SelectItem(const struct FVector2D& Idx);
	void QuickUse5();
	void QuickUse6();
	void QuickUse7();
	void QuickUse8();
	void Assign();
	void Back();
	void FaceUpReleased();
	void Up();
	void Right();
	void Down();
	void Left();
	void FaceRight();
	void Construct();
	void FaceUp();
	void GoBackGrid();
	void GrabItem(const struct FVector2D& Index, class FName ItemId);
	void InputOpenPDA();
	void GoBackGrabPanel();
	void FaceDown();
	void NewSelectionGrid(const struct FVector2D& Index);
	void OnMovedGrabPanel(const struct FVector2D& Index);
	void L2();
	void R2();
	void RightStick();
	void SwapEvent();
	void InputActivateTutorial();
	void DPadUp();
	void DPadRight();
	void DPadDown();
	void DPadLeft();
	void ReleaseButton();
	void ForceDropMOved(const struct FVector2D& Index);
	void ExecuteUbergraph_wid_Storage_Grid_Main(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector2D& K2Node_Event_Idx, const struct FVector2D& K2Node_CustomEvent_Index_3, class FName K2Node_CustomEvent_ItemID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FVector2D& K2Node_CustomEvent_Index_2, const struct FVector2D& K2Node_CustomEvent_Index_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FVector2D& CallFunc_GetTileSize_TileSize, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_CanBeRemoved_Result, bool CallFunc_CanBeGrabbed_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_5, bool CallFunc_CanBeUsed_ReturnValue, bool CallFunc_CanBePutToQuickMenu_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_6, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_7, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_1, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_Start_self_CastInput, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_2, const struct FVector2D& K2Node_CustomEvent_Index, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_3);
	void MoveForced__DelegateSignature();
	void UpdateButtons__DelegateSignature(const struct FStruct_Inventory_ButtonModifyInfo& Info);
	void NewSelection__DelegateSignature(class FName Name);
	void GoBack__DelegateSignature();
};

}


