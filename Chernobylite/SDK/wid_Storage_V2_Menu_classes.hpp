#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8A (0x2EA - 0x260)
// WidgetBlueprintGeneratedClass wid_Storage_V2_Menu.wid_Storage_V2_Menu_C
class UWid_Storage_V2_Menu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                ButtonBackground;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               QuickMenu;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuickMenuText;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Remove;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RemoveText;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Split;                                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SplitOverlay;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SplitText;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Use;                                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UseText;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Storage_v2_Grid_C*                Parent;                                            // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ResourceTransfer_C*               RMBMenu;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemCategory                     ItemstoMiniStorage;                                // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemUsed;                                          // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_Storage_V2_Menu_C* GetDefaultObj();

	void CloseMenu();
	void BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void OpenMenu(class FName NameID);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Remove_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__QuickMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__QuickMenu_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Remove_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Remove_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__QuickMenu_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_wid_Storage_V2_Menu(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_1, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, const struct FStruct_Inventory_ButtonInfo& K2Node_MakeStruct_struct_Inventory_ButtonInfo_3, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class FName K2Node_CustomEvent_NameID, float CallFunc_Count_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput, bool CallFunc_CanBePutToQuickMenu_Result, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, class UWid_ResourceTransfer_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, bool CallFunc_CanSplitItem_Result, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, int32 CallFunc_PostEvent_ReturnValue_3);
};

}


