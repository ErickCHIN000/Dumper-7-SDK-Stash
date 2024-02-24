#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x120 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C
class UBP_Interactable_RadialMenu_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                LastInstigator;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Current_Player;                                    // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRadialMenuDataRowHandle              RadialOptions;                                     // 0x100(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UContextMenuWidget*                    CurrentRadialMenu;                                 // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_RadialMenu_C* GetDefaultObj();

	void GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems, const TArray<struct FContextMenuItemData>& PendingMenuItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UInteractableComponent* CallFunc_GetInteractableComponent_ReturnValue, const struct FInteractableData& CallFunc_GetInteractableData_OutData, bool CallFunc_GetInteractableData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_CastToRadialMenuDataRowHandle_Paths, const struct FRadialMenuDataRowHandle& CallFunc_CastToRadialMenuDataRowHandle_ReturnValue, const struct FRadialMenuData& CallFunc_GetRadialMenuDataStruct_RadialMenuData, enum class EValid CallFunc_GetRadialMenuDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FRadialMenuOption& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, int32 CallFunc_Array_Add_ReturnValue);
	void GetContextMenuInfo(class FText* MenuName, TSoftObjectPtr<class UTexture2D>* MenuIcon, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UItemableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_OutData, bool CallFunc_GetItemableData_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_IsValid_ReturnValue);
	void RadialMenuClosed(enum class ERadialOptions Option, class AIcarusPlayerCharacter* PlayerCharacter);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void MenuItemSelected(class FName ItemActionId, int32 ItemPayload);
	void ExecuteUbergraph_BP_Interactable_RadialMenu(int32 EntryPoint, class FName K2Node_CustomEvent_ItemActionId, int32 K2Node_CustomEvent_ItemPayload, int32 Temp_int_Array_Index_Variable, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, TArray<struct FContextMenuItemData>& CallFunc_GetContextMenuItems_MenuItems, const struct FContextMenuItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ERadialOptions K2Node_CustomEvent_Option, class AIcarusPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetContextMenuInfo_MenuName, TSoftObjectPtr<class UTexture2D> CallFunc_GetContextMenuInfo_MenuIcon);
};

}


