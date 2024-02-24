#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82 (0x2E2 - 0x260)
// WidgetBlueprintGeneratedClass wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C
class UWid_Storage_v2_Grid_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Storage_V2_Grid_GrabPanel_C*      GrabPanel;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Storage_v2_Grid_C*                Grid;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_77;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_249;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GoBack;                                            // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TScriptInterface<class IWid_IInventoryGridApp_C> CurrentApp;                                        // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                             CurrentGridSize;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewSelection;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            UpdateButtons;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_Inventory_Main_C*                 Parent;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_v2_Main_C*                StorageParent;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemGrabActive;                                    // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ItemUsed;                                          // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Storage_v2_Grid_Main_C* GetDefaultObj();

	void ChangeApp(TScriptInterface<class IWid_IInventoryGridApp_C> NextApp);
	void GetCurrentSelection(class UWid_Inventory_Grid_Entry_C** CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection);
	void Update(const struct FVector2D& Size, bool IsInStorage, bool IsInStorageInventory, bool IgnoreSelection, bool PerformFullClear);
	void Start();
	void End();
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
	void SplitItem(const struct FVector2D& Index, class FName ItemId, float Amount);
	void FaceUpReleased();
	void ExecuteUbergraph_wid_Storage_v2_Grid_Main(int32 EntryPoint, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_5, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_6, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_7, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_8, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_10, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_11, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_12, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, bool CallFunc_GetCanBeDropped_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_GetItemInfo_IsValid_1, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_1, bool CallFunc_GetCanBeDropped_ReturnValue_1, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_1, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_GetCanBeDropped_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, bool CallFunc_GetItemInfo_IsValid_2, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_2, bool CallFunc_GetCanBeDropped_ReturnValue_3, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_2, bool K2Node_ClassDynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_15, const struct FVector2D& K2Node_CustomEvent_Index_4, class FName K2Node_CustomEvent_ItemID_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput, bool CallFunc_GetItemInfo_IsValid_3, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue_3, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_3, TSubclassOf<class ACGActiveItem> K2Node_ClassDynamicCast_AsCGActive_Item_3, bool K2Node_ClassDynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_7, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FVector2D& K2Node_CustomEvent_Index_3, bool K2Node_CustomEvent_FromKeyboard, const struct FVector2D& K2Node_CustomEvent_Index_2, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& K2Node_Event_Idx, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Index_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, bool CallFunc_CanBeRemoved_Result, bool CallFunc_CanBeGrabbed_Result, bool CallFunc_BooleanAND_ReturnValue_8, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_17, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_18, bool CallFunc_CanBeUsed_ReturnValue, bool CallFunc_CanBePutToQuickMenu_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_19, const struct FVector2D& CallFunc_GetTileSize_TileSize, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_1, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_2, const struct FVector2D& K2Node_CustomEvent_Index, class FName K2Node_CustomEvent_ItemID, float K2Node_CustomEvent_Amount, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_3, const struct FVector2D& CallFunc_GetTileSize_TileSize_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, bool CallFunc_CanSplitItem_Result, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_20, const struct FVector2D& CallFunc_GetMaxSize_ReturnValue_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_CanSplitItem_Result_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_21, bool CallFunc_CanSplitItem_Result_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_22, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2, bool CallFunc_CanSplitItem_Result_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_23, bool CallFunc_CanSplitItem_Result_4, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_3, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_24, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_4);
	void UpdateButtons__DelegateSignature(const struct FStruct_Inventory_ButtonModifyInfo& Info);
	void NewSelection__DelegateSignature(class FName Name, bool FromKeyboard);
	void GoBack__DelegateSignature();
};

}


