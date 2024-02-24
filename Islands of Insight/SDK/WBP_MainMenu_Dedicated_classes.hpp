#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x548 - 0x320)
// WidgetBlueprintGeneratedClass WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C
class UWBP_MainMenu_Dedicated_C : public UMainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     CircularThrobber_352;                              // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   ExitBtn;                                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_55;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_151;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Loading1;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LoadingCanvas;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LoginCanvas;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   RefreshServerButton;                               // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   RefreshServerButton_1;                             // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RefreshSize;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SearchingSize;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ServerScrollBox;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     Throbber;                                          // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      UsernameTextbox;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValidName;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   WBP_SubmitNicknameBtn;                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USophiaGameInstance*                   GI;                                                // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FBlueprintSessionResult>       SessionsList;                                      // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBlueprintSessionResult>       UniqueSessionList;                                 // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, struct FBlueprintSessionResult> NamedSessionList;                                  // 0x3D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UButton*>                       JoinButtonArray;                                   // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UTextBlock*>                    JoinButtonTextArray;                               // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FBlueprintSessionResult               SessionRef;                                        // 0x440(0x108)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_MainMenu_Dedicated_C* GetDefaultObj();

	void HandleRefreshVisiblity(bool RefreshVisible);
	void SetJoinButton(int32 Index, class FText ServerName, class UTextBlock* CallFunc_Array_Get_Item, class UButton* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValidSession_ReturnValue, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyString_SearchResult, const class FString& CallFunc_GetSessionPropertyString_SettingValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnFailure_38EDAEB44BDFDA80EC3E4AB393658F23(TArray<struct FBlueprintSessionResult>& Results);
	void OnSuccess_38EDAEB44BDFDA80EC3E4AB393658F23(TArray<struct FBlueprintSessionResult>& Results);
	void BndEvt__WBP_MainMenu_Dedicated_UsernameTextbox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_0_K2Node_ComponentBoundEvent_10_Pressed__DelegateSignature();
	void BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature();
	void RefreshServers();
	void Construct();
	void OnJoinServerClicked(int32 Index);
	void OnFailedJoinServer();
	void BndEvt__WBP_MainMenu_Dedicated_ExitBtn_K2Node_ComponentBoundEvent_11_Pressed__DelegateSignature();
	void BPI_FailedToGetNickname();
	void BPI_ReceivedPlayerKrakenName(const class FString& String);
	void BPI_SetNickNamedFailed(const class FString& String);
	void BndEvt__WBP_MainMenu_Dedicated_RefreshServerButton_1_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
	void ExecuteUbergraph_WBP_MainMenu_Dedicated(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<class FString>& CallFunc_Map_Keys_Keys, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_ServerButton_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Index, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, TArray<struct FBlueprintSessionResult>& CallFunc_Map_Values_Values, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const struct FBlueprintSessionResult& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_GetMaxPlayers_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetCurrentPlayers_ReturnValue, int32 CallFunc_GetPingInMs_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& K2Node_Event_String_1, const class FString& K2Node_Event_String, bool CallFunc_IsEmpty_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TArray<struct FSessionsSearchSetting>& Temp_struct_Variable_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyString_SearchResult, const class FString& CallFunc_GetSessionPropertyString_SettingValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


