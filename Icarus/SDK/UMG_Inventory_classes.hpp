#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x2F1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_Inventory.UMG_Inventory_C
class UUMG_Inventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              HighlightFlagOverlay;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          InventoryDisplay;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PreviewSlotCount;                                  // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotsX;                                            // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            Inventory;                                         // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_InventoryItem_C*>          Slots;                                             // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUMG_InventoryGrid_C*                  CurrentGrid;                                       // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviousSlotable;                                  // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D7E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagQueriesRowHandle                  PreviousQuery;                                     // 0x2A4(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSessionFlagsRowHandle                HighlightFlag;                                     // 0x2BC(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_QuestHelper_C*                    QuestHelper;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisplayOnly;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         AllowContextMenuWhileLocked;                       // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ManageChildSlotUpdates;                            // 0x2E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DA8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusHUD*                            RegisteredWithHUD;                                 // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableContextMenu;                                // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_Inventory_C* GetDefaultObj();

	void ReMinusInitialise();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UUMG_InventoryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void AddToGrid(class UUMG_InventoryItem_C* WidgetSlot, const struct FInventorySlot& SlotInfo, bool RequiresNewGrid, class UUMG_SlottableInventory_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_InventoryGrid_C* CallFunc_Create_ReturnValue_1, bool CallFunc_EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void AddInventorySlots(class UUMG_InventoryItem_C* CreatedWidget, int32 FinalSlots, const struct FInventorySlot& SlotInfo, int32 TotalSlots, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FInventorySlot& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_InventoryItemSlow_C* CallFunc_Create_ReturnValue, class UUMG_InventoryItem_C* CallFunc_Create_ReturnValue_1);
	void OnInventoryMove(int32 Location, class UInventory* Inventory, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void Initialise(class UInventory* NewInventory, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsWithEditor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void BindToInventorySlotChange();
	void Reinit(class UInventory* Inventory);
	void HandleChangedSlots(class UInventory* Inventory, TSet<int32>& ChangedSlotIndices);
	void Destruct();
	void ExecuteUbergraph_UMG_Inventory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UInventory* K2Node_CustomEvent_Inventory, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AIcarusHUD* K2Node_DynamicCast_AsIcarus_HUD, bool K2Node_DynamicCast_bSuccess, class UInventory* K2Node_Event_Inventory, TSet<int32> K2Node_Event_ChangedSlotIndices, TArray<int32>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_InventoryItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


