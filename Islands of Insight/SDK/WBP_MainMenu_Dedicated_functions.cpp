#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C
// (None)

class UClass* UWBP_MainMenu_Dedicated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Dedicated_C");

	return Clss;
}


// WBP_MainMenu_Dedicated_C WBP_MainMenu_Dedicated.Default__WBP_MainMenu_Dedicated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Dedicated_C* UWBP_MainMenu_Dedicated_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Dedicated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Dedicated_C*>(UWBP_MainMenu_Dedicated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.HandleRefreshVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RefreshVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenu_Dedicated_C::HandleRefreshVisiblity(bool RefreshVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "HandleRefreshVisiblity");

	Params::UWBP_MainMenu_Dedicated_C_HandleRefreshVisiblity_Params Parms{};

	Parms.RefreshVisible = RefreshVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.SetJoinButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ServerName                                                       (Edit, BlueprintVisible)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetExtraSettings_ExtraSettings                          (ReferenceParm)
// enum class ESessionSettingSearchResultCallFunc_GetSessionPropertyString_SearchResult                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSessionPropertyString_SettingValue                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenu_Dedicated_C::SetJoinButton(int32 Index, class FText ServerName, class UTextBlock* CallFunc_Array_Get_Item, class UButton* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValidSession_ReturnValue, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyString_SearchResult, const class FString& CallFunc_GetSessionPropertyString_SettingValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "SetJoinButton");

	Params::UWBP_MainMenu_Dedicated_C_SetJoinButton_Params Parms{};

	Parms.Index = Index;
	Parms.ServerName = ServerName;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValidSession_ReturnValue = CallFunc_IsValidSession_ReturnValue;
	Parms.CallFunc_GetExtraSettings_ExtraSettings = CallFunc_GetExtraSettings_ExtraSettings;
	Parms.CallFunc_GetSessionPropertyString_SearchResult = CallFunc_GetSessionPropertyString_SearchResult;
	Parms.CallFunc_GetSessionPropertyString_SettingValue = CallFunc_GetSessionPropertyString_SettingValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.OnFailure_38EDAEB44BDFDA80EC3E4AB393658F23
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MainMenu_Dedicated_C::OnFailure_38EDAEB44BDFDA80EC3E4AB393658F23(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "OnFailure_38EDAEB44BDFDA80EC3E4AB393658F23");

	Params::UWBP_MainMenu_Dedicated_C_OnFailure_38EDAEB44BDFDA80EC3E4AB393658F23_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.OnSuccess_38EDAEB44BDFDA80EC3E4AB393658F23
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MainMenu_Dedicated_C::OnSuccess_38EDAEB44BDFDA80EC3E4AB393658F23(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "OnSuccess_38EDAEB44BDFDA80EC3E4AB393658F23");

	Params::UWBP_MainMenu_Dedicated_C_OnSuccess_38EDAEB44BDFDA80EC3E4AB393658F23_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BndEvt__WBP_MainMenu_Dedicated_UsernameTextbox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MainMenu_Dedicated_C::BndEvt__WBP_MainMenu_Dedicated_UsernameTextbox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BndEvt__WBP_MainMenu_Dedicated_UsernameTextbox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UWBP_MainMenu_Dedicated_C_BndEvt__WBP_MainMenu_Dedicated_UsernameTextbox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_0_K2Node_ComponentBoundEvent_10_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_0_K2Node_ComponentBoundEvent_10_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_0_K2Node_ComponentBoundEvent_10_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BndEvt__WBP_MainMenu_Dedicated_WBP_StyledButton_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.RefreshServers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::RefreshServers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "RefreshServers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.OnJoinServerClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Dedicated_C::OnJoinServerClicked(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "OnJoinServerClicked");

	Params::UWBP_MainMenu_Dedicated_C_OnJoinServerClicked_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.OnFailedJoinServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::OnFailedJoinServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "OnFailedJoinServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BndEvt__WBP_MainMenu_Dedicated_ExitBtn_K2Node_ComponentBoundEvent_11_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::BndEvt__WBP_MainMenu_Dedicated_ExitBtn_K2Node_ComponentBoundEvent_11_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BndEvt__WBP_MainMenu_Dedicated_ExitBtn_K2Node_ComponentBoundEvent_11_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BPI_FailedToGetNickname
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::BPI_FailedToGetNickname()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BPI_FailedToGetNickname");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BPI_ReceivedPlayerKrakenName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MainMenu_Dedicated_C::BPI_ReceivedPlayerKrakenName(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BPI_ReceivedPlayerKrakenName");

	Params::UWBP_MainMenu_Dedicated_C_BPI_ReceivedPlayerKrakenName_Params Parms{};

	Parms.String = String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BPI_SetNickNamedFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MainMenu_Dedicated_C::BPI_SetNickNamedFailed(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BPI_SetNickNamedFailed");

	Params::UWBP_MainMenu_Dedicated_C_BPI_SetNickNamedFailed_Params Parms{};

	Parms.String = String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.BndEvt__WBP_MainMenu_Dedicated_RefreshServerButton_1_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Dedicated_C::BndEvt__WBP_MainMenu_Dedicated_RefreshServerButton_1_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "BndEvt__WBP_MainMenu_Dedicated_RefreshServerButton_1_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Dedicated.WBP_MainMenu_Dedicated_C.ExecuteUbergraph_WBP_MainMenu_Dedicated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBlueprintSessionResult>Temp_struct_Variable                                             (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results                                       (ConstParm, ReferenceParm)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ServerButton_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_1                                     (ConstParm, ReferenceParm)
// TArray<struct FBlueprintSessionResult>CallFunc_Map_Values_Values                                       (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// int32                              CallFunc_GetMaxPlayers_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentPlayers_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPingInMs_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      K2Node_Event_String_1                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_String                                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionsSearchSetting>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFindSessionsCallbackProxyAdvanced*CallFunc_FindSessionsAdvanced_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     CallFunc_Array_Get_Item_1                                        (None)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetExtraSettings_ExtraSettings                          (ReferenceParm)
// enum class ESessionSettingSearchResultCallFunc_GetSessionPropertyString_SearchResult                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSessionPropertyString_SettingValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenu_Dedicated_C::ExecuteUbergraph_WBP_MainMenu_Dedicated(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<class FString>& CallFunc_Map_Keys_Keys, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_1, class UWBP_ServerButton_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Index, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, TArray<struct FBlueprintSessionResult>& CallFunc_Map_Values_Values, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const struct FBlueprintSessionResult& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_GetMaxPlayers_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetCurrentPlayers_ReturnValue, int32 CallFunc_GetPingInMs_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& K2Node_Event_String_1, const class FString& K2Node_Event_String, bool CallFunc_IsEmpty_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TArray<struct FSessionsSearchSetting>& Temp_struct_Variable_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyString_SearchResult, const class FString& CallFunc_GetSessionPropertyString_SettingValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Dedicated_C", "ExecuteUbergraph_WBP_MainMenu_Dedicated");

	Params::UWBP_MainMenu_Dedicated_C_ExecuteUbergraph_WBP_MainMenu_Dedicated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_CustomEvent_Results = K2Node_CustomEvent_Results;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CustomEvent_Results_1 = K2Node_CustomEvent_Results_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetMaxPlayers_ReturnValue = CallFunc_GetMaxPlayers_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetCurrentPlayers_ReturnValue = CallFunc_GetCurrentPlayers_ReturnValue;
	Parms.CallFunc_GetPingInMs_ReturnValue = CallFunc_GetPingInMs_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Event_String_1 = K2Node_Event_String_1;
	Parms.K2Node_Event_String = K2Node_Event_String;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_1 = K2Node_DynamicCast_AsSophia_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FindSessionsAdvanced_ReturnValue = CallFunc_FindSessionsAdvanced_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetExtraSettings_ExtraSettings = CallFunc_GetExtraSettings_ExtraSettings;
	Parms.CallFunc_GetSessionPropertyString_SearchResult = CallFunc_GetSessionPropertyString_SearchResult;
	Parms.CallFunc_GetSessionPropertyString_SettingValue = CallFunc_GetSessionPropertyString_SettingValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


