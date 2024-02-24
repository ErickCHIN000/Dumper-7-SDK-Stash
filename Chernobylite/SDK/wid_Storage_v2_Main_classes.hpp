#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x390 - 0x2A0)
// WidgetBlueprintGeneratedClass wid_Storage_v2_Main.wid_Storage_v2_Main_C
class UWid_Storage_v2_Main_C : public UWid_pda_IFullScreen_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background2;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundCompanionEquipment;                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Bar;                                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Storage_V2_Buttons_C*             Buttons;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionEquipmentBox_C*          CompanionEquipment;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Desc_C*                 Desc;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Storage_v2_Grid_Main_C*           GridMain;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              HighlightSizeBox;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Progres;                                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_RecyclerBox_C*                    Recycler;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RecyclerBox;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StorageBackground;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StorageTitle;                                      // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UITitle;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_WaterMark_C*                      Wid_WaterMark;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CurrentApp;                                        // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOpen;                                            // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_Storage_Controller_C*              Owner;                                             // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class Aba_Recycler_Controller_C*             RecyclerOwner;                                     // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsRecycler;                                        // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1EE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_CompanionEquipment_Controller_C*   CompanionEquipmentOwner;                           // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CustomGridSelected;                                // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsRepairBench;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1EEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_RepairBench_InteractiveObject_C*   RepairBenchOwner;                                  // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Storage_v2_Main_C* GetDefaultObj();

	void ChangeApp(TScriptInterface<class IWid_IInventoryApp_C> NewApp);
	void InventoryUpdatedDelegate();
	void InputUp();
	void InputDown();
	void InputLeft();
	void InputRight();
	void InputFaceDown();
	void DPadUp();
	void DPadRight();
	void DPadDown();
	void DPadLeft();
	void InputLeftStick();
	void InputFaceRight();
	void InputFaceUp();
	void InputFaceLeft();
	void GoBackGridMain();
	void NewSelection(class FName Name, bool FromKeyboard);
	void InputR2();
	void InputL2();
	void InputRightStick();
	void QuickUse1();
	void QuickUse2();
	void QuickUse3();
	void QuickUse4();
	void InputFaceLeftReleased();
	void UpdateButtons(const struct FStruct_Inventory_ButtonModifyInfo& Info);
	void Construct();
	void QuickUse5();
	void QuickUse6();
	void QuickUse7();
	void QuickUse8();
	void UnbindInventoryUpdatedDelegate();
	void Destruct();
	void BackButtonClicked();
	void InputFaceUpReleased();
	void InputAssign();
	void ExecuteUbergraph_wid_Storage_v2_Main(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_6, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_CloseInventory_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_CanBePutToQuickMenu_Result, class FName K2Node_CustomEvent_Name, bool K2Node_CustomEvent_FromKeyboard, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FStruct_Inventory_ButtonModifyInfo& K2Node_CustomEvent_Info, bool CallFunc_SortBySize_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_BooleanOR_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, class UTexture2D* K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3);
	void CustomGridSelected__DelegateSignature(const struct FVector2D& Grid);
};

}


