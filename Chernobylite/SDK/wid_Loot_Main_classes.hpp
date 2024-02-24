#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x92 (0x332 - 0x2A0)
// WidgetBlueprintGeneratedClass wid_Loot_Main.wid_Loot_Main_C
class UWid_Loot_Main_C : public UWid_pda_IFullScreen_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                          Back;                                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Loot_Buttons_C*                   Buttons;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Loot_Desc_C*                      Desc;                                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageIcon;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LootableName;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Panel;                                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Storage_Grid_Main_C*              StorageGrid;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_1;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CurrentApp;                                        // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MiniStorageSelected;                               // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EnumStorageIndex                  StorageIndex;                                      // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         MiniStorageSelectedPrevious;                       // 0x2FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ButtonPressed;                                     // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LeftPressed;                                       // 0x2FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RightPressed;                                      // 0x2FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2670[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_InventoryMenu_C*                  HackMenu;                                          // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  EnemyInventory;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  NameOfTheLootable;                                 // 0x310(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class Aba_ia_Interactable_Random_Loot_01_C*  EnemyInventoryOwner;                               // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseStorageUpdatedDelegate;                         // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         SendInventoryBroadcasts;                           // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_Loot_Main_C* GetDefaultObj();

	class FText Get_LootableName_Text_0(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default);
	void GetTileByItemID(bool Direction, struct FVector2D* Index, const struct FInventoryEntry& NewLocalVar_0, int32 ID, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_SelectItem_self_CastInput, const struct FInventoryEntry& CallFunc_Array_Get_Item_1, int32 K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_1, const struct FInventoryEntry& CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1, const struct FInventoryEntry& K2Node_Select_Default_2);
	void ChangeApp(TScriptInterface<class IWid_IInventoryApp_C> NewApp);
	void DPadUp();
	void DPadRight();
	void DPadDown();
	void DPadLeft();
	void InputFaceRight();
	void InputFaceUp();
	void InputFaceLeft();
	void InputR2();
	void InputL2();
	void StorageUpdatedDelegate();
	void InputDown();
	void InputUp();
	void InputLeft();
	void InputRight();
	void InputFaceDown();
	void Construct();
	void NewSelection(class FName Name);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_Loot_Main(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ Temp_delegate_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection, bool CallFunc_NotEqual_NameName_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanNAND_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_GetCurrentSelection_CurrentSelection_2, TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput, class FName K2Node_CustomEvent_Name, bool K2Node_Event_IsDesignTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue_1);
};

}


