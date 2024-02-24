#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3A0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_CC_Appearance_CategoryButton_ArchetypePicker.WBP_CC_Appearance_CategoryButton_ArchetypePicker_C
class UWBP_CC_Appearance_CategoryButton_ArchetypePicker_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               FocusBorderHighlight;                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Grid_Options;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_2;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   SelectedEntry;                                     // 0x368(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         BodyType;                                          // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5131[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            DT_SubGroupOptions;                                // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CC_Entry_Mesh_Selected;                            // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         FilterOptionsToBodyType;                           // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_514E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActiveIndex;                                       // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_Appearance_CategoryButton_ArchetypePicker_C* GetDefaultObj();

	void UpdateGridEntrySelectionStates(const TArray<class UWidget*>& LGridEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_CC_AppearanceOptionEntry_C* K2Node_DynamicCast_AsWBP_CC_Appearance_Option_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UNWXCommonUserWidget* K2Node_DynamicCast_AsNWXCommon_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void InitializeDesignerPreview();
	void DB_GenerateScreenshots(class FName L_Name, int32 DB_CurrentIndex, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BuildString_Name_ReturnValue, class UObject* CallFunc_TakeHighResScreenshot_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, class UWBP_CC_AppearanceOptionEntry_C* K2Node_DynamicCast_AsWBP_CC_Appearance_Option_Entry, bool K2Node_DynamicCast_bSuccess, class UWBP_CC_AppearanceOptionEntry_Hair_C* K2Node_DynamicCast_AsWBP_CC_Appearance_Option_Entry_Hair, bool K2Node_DynamicCast_bSuccess_1, const struct FHairData& CallFunc_TryGetHairData_OutData, enum class EGetResult CallFunc_TryGetHairData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Randomize_Selected_();
	void PopulateGridOptions_Meshes(class UWBP_CC_AppearanceOptionEntry_C* L_InstanceRefOfSelectedWidget, bool L_Selected, int32 Temp_int_Array_Index_Variable, class UWBP_CC_AppearanceOptionEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValidRowHandle_IsValid, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RowHandlesEqual_Equal, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Select_Default);
	void OnGridEntrySelected(const struct FDataTableRowHandle& Appearance_Row, int32 Index);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_CC_Appearance_CategoryButton_ArchetypePicker(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void CC_Entry_Mesh_Selected__DelegateSignature(const struct FDataTableRowHandle& MeshDT, int32 Index);
};

}


