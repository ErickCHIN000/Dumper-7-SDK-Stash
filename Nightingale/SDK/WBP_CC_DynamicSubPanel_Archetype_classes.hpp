#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x4F8 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Archetype.WBP_CC_DynamicSubPanel_Archetype_C
class UWBP_CC_DynamicSubPanel_Archetype_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CC_Appearance_CategoryButton_ArchetypePicker_C* ArchetypePicker;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_PickerButton_C*             WBP_CC_sw_PickerButton;                            // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> TelemetryValues;                                   // 0x4A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Archetype_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void UpdateSelected(enum class EBodyType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, int32 K2Node_Select_Default, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void RandomizeArchetype(const TArray<struct FDataTableRowHandle>& Rows, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const struct FCharacterCreateTelemetryValuePairs& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs);
	void CacheStartingPanelValues(const class FString& Temp_string_Variable, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_CC_DynamicSubPanel_Archetype_ArchetypePicker_K2Node_ComponentBoundEvent_1_CC_Entry_Mesh_Selected__DelegateSignature(const struct FDataTableRowHandle& MeshDT, int32 Index);
	void RandomizePanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_Archetype_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_2_PickerEntryUpdated__DelegateSignature(int32 Index);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Archetype(int32 EntryPoint, enum class EBodyType Temp_byte_Variable, enum class EBodyType Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_MeshDT, int32 K2Node_ComponentBoundEvent_Index_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 Temp_int_Variable, int32 K2Node_ComponentBoundEvent_Index, enum class EBodyType K2Node_Select_Default, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UWBP_CC_AppearanceOptionEntry_C* K2Node_DynamicCast_AsWBP_CC_Appearance_Option_Entry, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


