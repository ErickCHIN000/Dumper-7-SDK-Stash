#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Codex.BPFL_Codex_C
class UBPFL_Codex_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Codex_C* GetDefaultObj();

	void Get_Specific_Codex_Subentry_For_Popup(const struct FCodexEntry& Codex_Entry, const struct FGameplayTag& Subentry_Tag, class UObject* __WorldContext, class FText* CodexSubentryText, const class FString& Array_Element_Text_LOCAL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCodexSubentry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue);
	void Get_All_Unlocked_Codex_Subentries_For_Popup(const struct FCodexEntry& Codex_Entry, class UObject* __WorldContext, class FText* CodexSubentryText, const class FString& Array_Element_Text_LOCAL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FCodexSubentry& CallFunc_Array_Get_Item, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FGameplayTag& CallFunc_Array_Get_Item_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Get_Codex_Subentries_In_Guidebook(class UCodexBaseDataAsset* Codex_Data_Asset, class UObject* __WorldContext, class FText* Codex_Subentry_Text, const class FString& Array_Element_Text_LOCAL, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_GetCodexEntry_self_CastInput, const struct FCodexEntry& CallFunc_GetCodexEntry_OutCodexEntry, bool CallFunc_GetCodexEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Get_All_Unlocked_Codex_Subentries_For_Popup_CodexSubentryText);
	void Show_Codex_Window(const struct FCodexEntry& Codex_Entry, const struct FGameplayTag& Subentry_Tag, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_Codex_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void Show_Codex_Notification_(const struct FCodexEntry& Codex_Entry, bool Is_Updating_Codex, class UObject* __WorldContext, class FText L_NotificationTitle, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FS_QuestNotificatorInfo& K2Node_MakeStruct_S_QuestNotificatorInfo, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2);
};

}


