#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C
class UUMG_ContextMenu_List_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Appear;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              Content;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              FeatureLevelOverlay;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FeatureText;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ListButton;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MainSizeBox;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RepairCost;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnWidgetSelected;                                  // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemSelected;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  ItemIdentifier;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIndex;                                         // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemPayload;                                       // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ContextMenu_List_Item_C* GetDefaultObj();

	class FText GetDeployUsableName(const struct FUsesRowHandle& CallFunc_MakeLiteralUses_ReturnValue, const struct FUses& CallFunc_GetUsesStruct_Uses, enum class EValid CallFunc_GetUsesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void SetItemData(int32 ItemIndex, const struct FContextMenuItemData& ItemData);
	void BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void ExecuteUbergraph_UMG_ContextMenu_List_Item(int32 EntryPoint, class FText CallFunc_GetDeployUsableName_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 K2Node_CustomEvent_ItemIndex, const struct FContextMenuItemData& K2Node_CustomEvent_ItemData, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue, bool CallFunc_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_ReturnValue_1, const struct FFeatureLevelData& CallFunc_GetFeatureLevelsStruct_FeatureLevels, enum class EValid CallFunc_GetFeatureLevelsStruct_Paths, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_EqualEqual_TextText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void OnItemSelected__DelegateSignature(class FName Identifier, int32 Payload);
	void OnWidgetSelected__DelegateSignature(class UUMG_ContextMenu_List_Item_C* ItemClicked);
};

}


