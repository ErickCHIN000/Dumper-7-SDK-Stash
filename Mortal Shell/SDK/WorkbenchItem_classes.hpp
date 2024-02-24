#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20C (0x43C - 0x230)
// WidgetBlueprintGeneratedClass WorkbenchItem.WorkbenchItem_C
class UWorkbenchItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_WorkbenchItem;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemName;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Description;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_ItemName;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           NormalStyle;                                       // 0x260(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           HoveredStyle;                                      // 0x2E8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnItemHover;                                       // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemUnhovered;                                   // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemPressed;                                     // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemReleased;                                    // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemClicked;                                     // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  UpgradeName;                                       // 0x3C0(0x18)(Edit, BlueprintVisible)
	class UTexture2D*                            UpgradeIcon;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  UpgradeDesc;                                       // 0x3E0(0x18)(Edit, BlueprintVisible)
	struct FDHDataTableID                        RequiredItem;                                      // 0x3F8(0x8)(Edit, BlueprintVisible, NoDestructor)
	enum class EComboTypes                       WeaponToUnlockIfAny;                               // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BalistazookaUpgradeName;                           // 0x404(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ItemUnlocked;                                      // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EWorkbenchItemType                ItemType;                                          // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxUpgradeLevel;                                   // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextUpgradeLevel;                                  // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bForceHide;                                        // 0x42C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorkbenchPanel_C*                     UI_WorkbenchPanel;                                 // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWorkbenchItem_C* GetDefaultObj();

	void SetHighlight(bool Highlight, bool Local_Highlight, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_Select_Default);
	int32 GetMaxUpgradeLevelDependingOnNG(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	bool IsNotCurrentWeapon(bool K2Node_SwitchEnum_CmpSuccess, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void GetUpgradeID(class FName* UpgradeID, enum class EWorkbenchItemType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1, class FName K2Node_Select_Default);
	void HasItemToUnlock(bool* bHasIt, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount);
	void IsUnlocked(bool* bUnlocked, enum class EWorkbenchItemType Temp_byte_Variable, bool Temp_bool_Variable, int32 CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class FName CallFunc_GetEnumeratorName_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_IsUpgradeUnlocked_bUnlocked, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked_2, bool K2Node_Select_Default);
	void BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetHighlighted(bool bHighlighted);
	void Update();
	void Unlock();
	void UpdateName();
	void Construct();
	void SetForceHide(bool bForceHide);
	void ExecuteUbergraph_WorkbenchItem(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EWorkbenchItemType Temp_byte_Variable_2, class FText Temp_text_Variable, enum class EWorkbenchItemType Temp_byte_Variable_3, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_bHighlighted, bool CallFunc_IsUnlocked_bUnlocked, const struct FInventoryItem& CallFunc_GetItemFromID_Item, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName_1, bool CallFunc_HasItemToUnlock_bHasIt, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_RemoveInventoryItem_Success, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsNotCurrentWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_GetEnumeratorName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_Select_Default, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1, bool K2Node_CustomEvent_bForceHide, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, int32 CallFunc_GetMaxUpgradeLevelDependingOnNG_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_IsNotCurrentWeapon_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ItemUnlocked__DelegateSignature();
	void OnItemClicked__DelegateSignature(class UWidget* Widget);
	void OnItemReleased__DelegateSignature(class UWidget* Widget);
	void OnItemPressed__DelegateSignature(class UWidget* Widget);
	void OnItemUnhovered__DelegateSignature(class UWidget* Widget);
	void OnItemHover__DelegateSignature(class UWidget* Widget);
};

}


