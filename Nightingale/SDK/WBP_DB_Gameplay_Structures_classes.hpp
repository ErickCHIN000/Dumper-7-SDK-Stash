#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x558 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_DB_Gameplay_Structures.WBP_DB_Gameplay_Structures_C
class UWBP_DB_Gameplay_Structures_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Amountfound;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Button_ClaimEstate;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Button_CompleteAllStructures;                      // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    Button_ShowEstateBounds;                           // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    CountButton;                                       // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText_0;                                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    PieceButton;                                       // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PopupConfirmBorder;                                // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StructureList;                                     // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_header;                                        // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    WBP_button_base;                                   // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        StructuresFound;                                   // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_cheat;                                      // 0x51C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1B72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Handle;                                            // 0x520(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlacement;                                       // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FStructureAssetReference>      AllStructureReferences;                            // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStructureAssetReference>      UnupportedStructureReferences;                     // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_DB_Gameplay_Structures_C* GetDefaultObj();

	void CreateStructureEntryWidget(const struct FStructureAssetReference& StructureAssetReference, class UWBP_DB_StructuresEntry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void RefreshStructureCountField(TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void FillArrays(const struct FStructureAssetReference& CurrentStructure, const struct FDataTableRowHandle& LCurrentRow, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, const struct FStructureAssetReference& CallFunc_Array_Get_Item, bool CallFunc_HasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	TArray<struct FStructureAssetReference> StructuresToShow();
	class UWidget* Get_txt_header_ToolTipWidget_0(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void SetSearchTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_TimerExistsHandle_ReturnValue);
	void SearchStructureList(const struct FStructureAssetReference& CurrentStructureReference, const struct FGameplayTagContainer& Tags, enum class EItemQuality Quality, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GetStructureDataFromStructureAssetReference_IsValid, const struct FStructureData& CallFunc_GetStructureDataFromStructureAssetReference_OutData, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FStructureAssetReference>& CallFunc_StructuresToShow_ReturnValue, const struct FStructureAssetReference& CallFunc_Array_Get_Item, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Construct();
	void BndEvt__EditableText_0_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void Refresh();
	void Destruct();
	void BndEvt__WBP_Debug_CheatStoreScreen_WBP_button_base_K2Node_ComponentBoundEvent_19_BU_Click__DelegateSignature();
	void OnPlaced();
	void BndEvt__WBP_DB_Gameplay_Structures_CountButton_K2Node_ComponentBoundEvent_2_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_Gameplay_Structures_PieceButton_K2Node_ComponentBoundEvent_3_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_Gameplay_Structures_WBP_button_base_52_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_Gameplay_Structures_Button_ShowEstateBounds_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature();
	void BndEvt__WBP_DB_Gameplay_Structures_Button_ClaimEstate_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature();
	void ExecuteUbergraph_WBP_DB_Gameplay_Structures(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_CheckIsCheatingAllowed_ReturnValue, class FText CallFunc_GetText_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, TArray<struct FStructureAssetReference>& CallFunc_StructuresToShow_ReturnValue, const struct FS_DebugMenuSettings& K2Node_MakeStruct_S_DebugMenuSettings, const struct FStructureAssetReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FStructureAssetReference>& CallFunc_DebugGetAllStructureAssetReferences_StructureReferences);
	void OnPlacement__DelegateSignature();
};

}


