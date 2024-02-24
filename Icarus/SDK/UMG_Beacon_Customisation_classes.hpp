#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2E0 - 0x280)
// WidgetBlueprintGeneratedClass UMG_Beacon_Customisation.UMG_Beacon_Customisation_C
class UUMG_Beacon_Customisation_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                     ColorSelectionPanel;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 ConfirmButton;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_IconSearch;                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_Icons;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Type;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          IconColour;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextureListItem*>              IconListItems;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_Portable_Beacon_C*                 BeaconReference;                                   // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Beacon_Customisation_C* GetDefaultObj();

	void UpdateIconList(TArray<class UObject*>& Items, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ProxyUpdateStyle(bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, int32 CallFunc_GetIndexForItem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess);
	void GenerateItemList(TArray<struct FItemableRowHandle>* ValidItemables, bool Found, const struct FItemData& ItemData, const TArray<struct FItemableRowHandle>& Output, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FItemsStaticEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, const struct FItemData& K2Node_MakeStruct_ItemData, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FTagQueriesRowHandle>& K2Node_MakeArray_Array, int32 CallFunc_NumRows_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetIconColour(const struct FLinearColor& Color);
	void OnColorSelected(class UUMG_ButtonBase_C* Button, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_ToggleButton_ColorSelect_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Construct();
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void BndEvt__UMG_Sign_Text_Window_EditableTextBox_IconSearch_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_Beacon_Customisation(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLinearColor& Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Portable_Beacon_C* K2Node_DynamicCast_AsBP_Portable_Beacon, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_ToggleButton_ColorSelect_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FLinearColor& CallFunc_Array_Get_Item_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUMG_ToggleButton_ColorSelect_C* K2Node_DynamicCast_AsUMG_Toggle_Button_Color_Select, bool K2Node_DynamicCast_bSuccess_2, class UTextureListItem* CallFunc_SpawnObject_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_Event_IsDesignTime, float CallFunc_RandomFloat_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue);
};

}


