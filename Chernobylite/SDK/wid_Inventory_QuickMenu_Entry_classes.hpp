#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2EC - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_QuickMenu_Entry.wid_Inventory_QuickMenu_Entry_C
class UWid_Inventory_QuickMenu_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      ShowBorder;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_Counter_C*   Counter;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageItem;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainBorder;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionBorder;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_0;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  CurrentItem;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_C*            Parent;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickMenuSlot                    SlotEnum;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16B0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InvEntry;                                          // 0x2B8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ItemCount;                                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Inventory_QuickMenu_Entry_C* GetDefaultObj();

	TArray<class FName> GetUpgradesFromUniqueID(const TArray<class FString>& Upgrades, TArray<class FName>& CallFunc_StringArrayToNameArray_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue);
	void UpdateCount(const struct FItemEntry& ItemEntry, bool CallFunc_NotEqual_NameName_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, float CallFunc_CountUID_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue);
	void SlowSelctionHide(float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Select(bool Select);
	void Update(class FName ItemId, enum class EUpgradeType UpgradeType, const TArray<class FName>& Upgrades, bool HasItem, const struct FItemEntry& ItemEntry, class FName PreviousItem, bool SEcondRow, int32 LocalIdx, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FName CallFunc_Array_Get_Item, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FName>& CallFunc_GetUpgradesFromUniqueID_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue_1, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue_2, const struct FInventoryEntry& CallFunc_GetAnyItemWithUniqueID_ReturnValue, float CallFunc_CountUID_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue_3, bool Temp_bool_Variable, class UWid_Upgrade_Icon_C* CallFunc_Create_ReturnValue, bool CallFunc_GetUpgradeInfo_isVaid, const struct FUpgradeEntry& CallFunc_GetUpgradeInfo_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<class FName>& K2Node_Select_Default, float CallFunc_CountUID_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void InventoryUpdated();
	void Destruct();
	void ExecuteUbergraph_wid_Inventory_QuickMenu_Entry(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_NotEqual_NameName_ReturnValue, class FName K2Node_Select_Default, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, bool CallFunc_IsVisible_ReturnValue);
};

}


