#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15C (0x3BC - 0x260)
// WidgetBlueprintGeneratedClass UMG_Prospect.UMG_Prospect_C
class UUMG_Prospect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              FactionMissonOverlay;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_Favorites_C*         FavoritesButton;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HardcoreIcon;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HostName;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Inactive;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainBorder;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MainButton;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PasswordRequired;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PingText;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerCount;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Privacy;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectDifficulty;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectName;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectTime;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProspectPinFactionMission_C*      UMG_ProspectPinFactionMission_1;                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              VersionBox;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               VersionMismatch;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               VersionRevision;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VersionText;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_ProspectState                   Prospect_State;                                    // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3640[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_ButtonState, struct FSlateColor> Prospect_Pin_State_Text_Colour;                    // 0x308(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DifficultyColour;                                  // 0x358(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           In_Color_and_Opacity;                              // 0x380(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Active;                                            // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusSessionResult*                  SessionResult;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Ping;                                              // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Prospect_C* GetDefaultObj();

	void UpdateFavoriteState(bool Toggled);
	void UpdatePing(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetProspectDifficulty(enum class EMissionDifficulty Difficulty, class FName* RowName, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateToolTip(class FText ToolTipText, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue);
	void SetState(enum class E_ProspectState NewState, enum class E_ButtonState Temp_byte_Variable, const struct FFProspectPinState& CallFunc_Get_Prospect_Pin_State_Data_Prospect_Pin_State, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	class FText GetTimeRemaining(class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, int32 CallFunc_GetRemainingProspectTime_ReturnValue, const class FString& CallFunc_FormatRawSecondsToTimeLength_Formatted, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateProspectInfo(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_GetSessionVersion_ReturnValue, const class FString& CallFunc_GetSessionVersion_ReturnValue_1, enum class EMissionDifficulty Temp_byte_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, const class FString& CallFunc_GetSessionName_ReturnValue, class UVersionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetFormattedVersion_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsInLobby_ReturnValue, const struct FFactionMissionsRowHandle& CallFunc_GetFactionMissionRow_ReturnValue, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, const struct FProspectInfo& CallFunc_GetProspectInfo_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FProspectListRowHandle& CallFunc_GetProspectRow_ReturnValue, class FText K2Node_Select_Default, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, class FName CallFunc_GetProspectDifficulty_RowName, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFDifficultyColour& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_TextToUpper_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue_5, int32 CallFunc_GetMaxPlayerCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_GetPingInMs_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_6, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_2);
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
	void BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_1_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton);
	void ExecuteUbergraph_UMG_Prospect(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UIcarusSessionResult* K2Node_DynamicCast_AsIcarus_Session_Result, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, enum class E_ButtonState K2Node_Select_Default, enum class E_ButtonState K2Node_Select_Default_1, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable_3, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_Select_Default_2, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UUMG_HostProspectsList_C* K2Node_DynamicCast_AsUMG_Host_Prospects_List, bool K2Node_DynamicCast_bSuccess_1, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, class FText Temp_text_Variable, bool CallFunc_RemoveFavoriteServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AddFavoriteServer_ReturnValue, bool CallFunc_IsFavoriteServer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3);
};

}


