#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x3E8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ProspectHistoryEntry.UMG_ProspectHistoryEntry_C
class UUMG_ProspectHistoryEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Inactive;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainBorder;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MainButton;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectDifficulty;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectName;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectTime;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectType;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_ProspectState                   Prospect_State;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5749[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_ButtonState, struct FSlateColor> Prospect_Pin_State_Text_Colour;                    // 0x2A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DifficultyColour;                                  // 0x2F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           In_Color_and_Opacity;                              // 0x320(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Active;                                            // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5769[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProspectHistoryResult*                ProspectEntry;                                     // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectInfo                         ProspectInfo;                                      // 0x358(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_ProspectHistoryEntry_C* GetDefaultObj();

	enum class ESlateVisibility Get_Inactive_Visibility_0(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAvailable_ReturnValue);
	void GetProspectDifficulty(enum class EMissionDifficulty Difficulty, class FName* RowName, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateToolTip(class FText ToolTipText, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue);
	void SetHasClaimedProspect(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetState(enum class E_ProspectState NewState, enum class E_ButtonState Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FFProspectPinState& CallFunc_Get_Prospect_Pin_State_Data_Prospect_Pin_State, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	class FText GetTimeRemaining(class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, int32 CallFunc_GetRemainingProspectTime_ReturnValue, const class FString& CallFunc_FormatRawSecondsToTimeLength_Formatted, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateProspectInfo(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class FText Temp_text_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_GetProspectDifficulty_RowName, enum class E_ProspectState CallFunc_CalculateProspectState_ProspectState, const struct FFDifficultyColour& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FIcarusTerrain& CallFunc_GetTerrainsStruct_Terrains, enum class EValid CallFunc_GetTerrainsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_TextToUpper_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FProspectInfo& CallFunc_GetProspectInfo_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, enum class ELastProspectHostType Temp_byte_Variable, enum class ELastProspectHostType CallFunc_GetHostType_ReturnValue, class FText K2Node_Select_Default);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
	void BP_OnEntryReleased();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void UpdateTextColor();
	void ExecuteUbergraph_UMG_ProspectHistoryEntry(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UProspectHistoryResult* K2Node_DynamicCast_AsProspect_History_Result, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, enum class E_ButtonState K2Node_Select_Default, enum class E_ButtonState K2Node_Select_Default_1, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable_2, const struct FSlateColor& K2Node_Select_Default_2);
};

}


