#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DisplayOnlyInventory.UMG_DisplayOnlyInventory_C
class UUMG_DisplayOnlyInventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              HighlightFlagOverlay;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          InventoryDisplay;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PreviewSlotCount;                                  // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotsX;                                            // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_InventoryItem_C*>          Slots;                                             // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUMG_InventoryGrid_C*                  CurrentGrid;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSessionFlagsRowHandle                HighlightFlag;                                     // 0x298(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemData>                     Items;                                             // 0x2B0(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_DisplayOnlyInventory_C* GetDefaultObj();

	void ReMinusInitialise();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UUMG_InventoryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void AddToGrid(class UUMG_InventoryItem_C* WidgetSlot, bool RequiresNewGrid, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUMG_InventoryGrid_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_InventorySeperator_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AddInventorySlots(int32 FinalSlots, int32 TotalSlots, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_InventoryItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Initialise();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetItems(TArray<struct FItemData>& ItemsToShow);
	void ExecuteUbergraph_UMG_DisplayOnlyInventory(int32 EntryPoint, class UUMG_InventoryItem_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<struct FItemData>& K2Node_CustomEvent_ItemsToShow, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


