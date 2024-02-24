#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterSelection.UMG_CharacterSelection_C
// (None)

class UClass* UUMG_CharacterSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterSelection_C");

	return Clss;
}


// UMG_CharacterSelection_C UMG_CharacterSelection.Default__UMG_CharacterSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterSelection_C* UUMG_CharacterSelection_C::GetDefaultObj()
{
	static class UUMG_CharacterSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterSelection_C*>(UUMG_CharacterSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCameraFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreviewCameraSettingsEnum  CameraFocus                                                      (Parm, OutParm, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::GetCameraFocus(struct FPreviewCameraSettingsEnum* CameraFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "GetCameraFocus");

	Params::UUMG_CharacterSelection_C_GetCameraFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CameraFocus != nullptr)
		*CameraFocus = std::move(Parms.CameraFocus);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCosmeticData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CosmeticData                                                     (Parm, OutParm, NoDestructor)

void UUMG_CharacterSelection_C::GetCosmeticData(struct FCharacterCosmetics* CosmeticData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "GetCosmeticData");

	Params::UUMG_CharacterSelection_C_GetCosmeticData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CosmeticData != nullptr)
		*CosmeticData = std::move(Parms.CosmeticData);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.UpdateLobby
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UUMG_PlayerListEntry_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAssociatedMemberInfo       CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculatePlayerLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EProspectLocation       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UUMG_CharacterSelection_C::UpdateLobby(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UUMG_PlayerListEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_2, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAssociatedMemberInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_CalculatePlayerLevel_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText Temp_text_Variable_3, bool CallFunc_IsWithEditor_ReturnValue, enum class EProspectLocation Temp_byte_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "UpdateLobby");

	Params::UUMG_CharacterSelection_C_UpdateLobby_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CalculatePlayerLevel_ReturnValue = CallFunc_CalculatePlayerLevel_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.FindActiveProspectForCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOnlineProfileCharacter     OnlineCharacterProfile                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FProspectInfo>       ProspectArray                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FProspectInfo               ProspectInfo                                                     (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectInfo               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetIcarusPlayerId_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::FindActiveProspectForCharacter(const struct FOnlineProfileCharacter& OnlineCharacterProfile, TArray<struct FProspectInfo>& ProspectArray, struct FProspectInfo* ProspectInfo, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FProspectInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, const class FString& CallFunc_GetIcarusPlayerId_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "FindActiveProspectForCharacter");

	Params::UUMG_CharacterSelection_C_FindActiveProspectForCharacter_Params Parms{};

	Parms.OnlineCharacterProfile = OnlineCharacterProfile;
	Parms.ProspectArray = ProspectArray;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerId_ReturnValue = CallFunc_GetIcarusPlayerId_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ProspectInfo != nullptr)
		*ProspectInfo = std::move(Parms.ProspectInfo);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.Get_DurationTime_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class FString>              CallFunc_FormatRawSecondsToTimeLengthDigital_Time                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UUMG_CharacterSelection_C::Get_DurationTime_Text(TArray<class FString>& CallFunc_FormatRawSecondsToTimeLengthDigital_Time, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "Get_DurationTime_Text");

	Params::UUMG_CharacterSelection_C_Get_DurationTime_Text_Params Parms{};

	Parms.CallFunc_FormatRawSecondsToTimeLengthDigital_Time = CallFunc_FormatRawSecondsToTimeLengthDigital_Time;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.SetCharacterVoiceParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterVoicesRowHandle   Voice                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoiceData         CallFunc_GetCharacterVoicesStruct_CharacterVoices                (None)
// enum class EValid                  CallFunc_GetCharacterVoicesStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::SetCharacterVoiceParam(const struct FCharacterVoicesRowHandle& Voice, const struct FCharacterVoiceData& CallFunc_GetCharacterVoicesStruct_CharacterVoices, enum class EValid CallFunc_GetCharacterVoicesStruct_Paths, bool CallFunc_IsRowHandleValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "SetCharacterVoiceParam");

	Params::UUMG_CharacterSelection_C_SetCharacterVoiceParam_Params Parms{};

	Parms.Voice = Voice;
	Parms.CallFunc_GetCharacterVoicesStruct_CharacterVoices = CallFunc_GetCharacterVoicesStruct_CharacterVoices;
	Parms.CallFunc_GetCharacterVoicesStruct_Paths = CallFunc_GetCharacterVoicesStruct_Paths;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.ClearSelectedCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::ClearSelectedCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "ClearSelectedCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCreationRowFromItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMetaItem                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCharacterCreationDataRowHandleRow                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue                               (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataEnum  CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::GetCreationRowFromItem(const struct FMetaItem& Item, struct FCharacterCreationDataRowHandle* Row, const struct FItemData& ItemData, const struct FItemData& CallFunc_ConvertToItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FCharacterCreationDataEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterCreationDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "GetCreationRowFromItem");

	Params::UUMG_CharacterSelection_C_GetCreationRowFromItem_Params Parms{};

	Parms.Item = Item;
	Parms.ItemData = ItemData;
	Parms.CallFunc_ConvertToItem_ReturnValue = CallFunc_ConvertToItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue = CallFunc_EqualEqual_FItemsStaticRowHandleFItemsStaticRowHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Row != nullptr)
		*Row = std::move(Parms.Row);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.CharacterPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::CharacterPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "CharacterPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.CalculatePlayerLevelFromExp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Experience                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterGrowthRowHandle   CallFunc_MakeLiteralCharacterGrowth_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterGrowth            CallFunc_GetCharacterGrowthStruct_CharacterGrowth                (None)
// enum class EValid                  CallFunc_GetCharacterGrowthStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::CalculatePlayerLevelFromExp(int32 Experience, int32* Level, const struct FCharacterGrowthRowHandle& CallFunc_MakeLiteralCharacterGrowth_ReturnValue, int32 Temp_int_Variable, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "CalculatePlayerLevelFromExp");

	Params::UUMG_CharacterSelection_C_CalculatePlayerLevelFromExp_Params Parms{};

	Parms.Experience = Experience;
	Parms.CallFunc_MakeLiteralCharacterGrowth_ReturnValue = CallFunc_MakeLiteralCharacterGrowth_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetCharacterGrowthStruct_CharacterGrowth = CallFunc_GetCharacterGrowthStruct_CharacterGrowth;
	Parms.CallFunc_GetCharacterGrowthStruct_Paths = CallFunc_GetCharacterGrowthStruct_Paths;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetButtonRowIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RowIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::GetButtonRowIndex(class UWidget* Button, int32* RowIndex, bool* Found, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "GetButtonRowIndex");

	Params::UUMG_CharacterSelection_C_GetButtonRowIndex_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RowIndex != nullptr)
		*RowIndex = Parms.RowIndex;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.DeleteSelectedCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::DeleteSelectedCharacter(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "DeleteSelectedCharacter");

	Params::UUMG_CharacterSelection_C_DeleteSelectedCharacter_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.CharacterSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_CharacterProfileSlot_C* Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCanHostProspect                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRemainingProspectTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFProspectServerInfo        K2Node_MakeStruct_FProspectServerInfo                            (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_5                                             (None)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPreviewCameraSettingsEnum  Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FPreviewCameraSettingsEnum  Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPreviewCameraSettingsEnum  K2Node_Select_Default_2                                          (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionDifficulty      Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_4                                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_6                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FName                        CallFunc_HashToName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FCharacterVoicesRowHandle   CallFunc_MakeCharacterVoices_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CharacterProfileSlot_C* K2Node_DynamicCast_AsUMG_Character_Profile_Slot                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::CharacterSelected(class UUMG_CharacterProfileSlot_C* Button, bool bCanHostProspect, class FText Temp_text_Variable, int32 CallFunc_Conv_Int64ToInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_GetRemainingProspectTime_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, class FText Temp_text_Variable_5, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_5, const struct FPreviewCameraSettingsEnum& Temp_struct_Variable, const struct FPreviewCameraSettingsEnum& Temp_struct_Variable_1, bool Temp_bool_Variable_6, const struct FPreviewCameraSettingsEnum& K2Node_Select_Default_2, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool Temp_bool_Variable_7, const struct FLinearColor& Temp_struct_Variable_2, class FText K2Node_Select_Default_3, const struct FLinearColor& Temp_struct_Variable_3, int32 Temp_int_Array_Index_Variable, enum class EMissionDifficulty Temp_byte_Variable_8, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_5, class FText K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FName CallFunc_HashToName_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_MakeCharacterVoices_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default_8, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_CharacterProfileSlot_C* K2Node_DynamicCast_AsUMG_Character_Profile_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "CharacterSelected");

	Params::UUMG_CharacterSelection_C_CharacterSelected_Params Parms{};

	Parms.Button = Button;
	Parms.bCanHostProspect = bCanHostProspect;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetRemainingProspectTime_ReturnValue = CallFunc_GetRemainingProspectTime_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_MakeStruct_FProspectServerInfo = K2Node_MakeStruct_FProspectServerInfo;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_HashToName_ReturnValue = CallFunc_HashToName_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeCharacterVoices_ReturnValue = CallFunc_MakeCharacterVoices_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Character_Profile_Slot = K2Node_DynamicCast_AsUMG_Character_Profile_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.GenerateCharacterSelectList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOnlineProfileCharacter>CharacterArray                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FProspectInfo>       ActiveProspectArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UUMG_CharacterProfileSlot_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CharacterProfileSlot_C* K2Node_DynamicCast_AsUMG_Character_Profile_Slot                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     CallFunc_Array_Get_Item_1                                        (None)
// struct FProspectInfo               CallFunc_FindActiveProspectForCharacter_ProspectInfo             (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::GenerateCharacterSelectList(TArray<struct FOnlineProfileCharacter>& CharacterArray, TArray<struct FProspectInfo>& ActiveProspectArray, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUMG_CharacterProfileSlot_C* CallFunc_Create_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUMG_CharacterProfileSlot_C* K2Node_DynamicCast_AsUMG_Character_Profile_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_Array_Get_Item_1, const struct FProspectInfo& CallFunc_FindActiveProspectForCharacter_ProspectInfo, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "GenerateCharacterSelectList");

	Params::UUMG_CharacterSelection_C_GenerateCharacterSelectList_Params Parms{};

	Parms.CharacterArray = CharacterArray;
	Parms.ActiveProspectArray = ActiveProspectArray;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUMG_Character_Profile_Slot = K2Node_DynamicCast_AsUMG_Character_Profile_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_FindActiveProspectForCharacter_ProspectInfo = CallFunc_FindActiveProspectForCharacter_ProspectInfo;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnFailure_C114BFB749A23B1B26FC30A1C3BB6795
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      ExtraErrorInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::OnFailure_C114BFB749A23B1B26FC30A1C3BB6795(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnFailure_C114BFB749A23B1B26FC30A1C3BB6795");

	Params::UUMG_CharacterSelection_C_OnFailure_C114BFB749A23B1B26FC30A1C3BB6795_Params Parms{};

	Parms.Result = Result;
	Parms.ExtraErrorInfo = ExtraErrorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      ExtraErrorInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795(const struct FErrorCodesEnum& Result, const class FString& ExtraErrorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795");

	Params::UUMG_CharacterSelection_C_OnSuccess_C114BFB749A23B1B26FC30A1C3BB6795_Params Parms{};

	Parms.Result = Result;
	Parms.ExtraErrorInfo = ExtraErrorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_CharacterSelection_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_CharacterSelection_C_BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.CancelDeleteCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::CancelDeleteCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "CancelDeleteCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.TogglePlayButtonEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::TogglePlayButtonEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "TogglePlayButtonEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUMG_CharacterSelection_C_BndEvt__ResetCharacter_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.Cancel Reset Character
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::Cancel_Reset_Character()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "Cancel Reset Character");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.RemoveCharacterFromProspects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::RemoveCharacterFromProspects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "RemoveCharacterFromProspects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.ConfirmDeleteSelectedCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::ConfirmDeleteSelectedCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "ConfirmDeleteSelectedCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_CreateNewCharacterButton_C*Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(class UUMG_CreateNewCharacterButton_C* Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");

	Params::UUMG_CharacterSelection_C_BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.UpdateDeleteCharacterPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::UpdateDeleteCharacterPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "UpdateDeleteCharacterPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnAbandonProspectClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_CharacterProfileSlot_C* Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CharacterSelection_C::OnAbandonProspectClicked(class UUMG_CharacterProfileSlot_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnAbandonProspectClicked");

	Params::UUMG_CharacterSelection_C_OnAbandonProspectClicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.PrepareAbandonProspectPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::PrepareAbandonProspectPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "PrepareAbandonProspectPopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.CancelAbandonProspect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::CancelAbandonProspect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "CancelAbandonProspect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.UpdateAbandonProspectPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::UpdateAbandonProspectPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "UpdateAbandonProspectPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.ConfirmAbandonProspect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::ConfirmAbandonProspect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "ConfirmAbandonProspect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnDeleteCharacterTextMatched
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::OnDeleteCharacterTextMatched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnDeleteCharacterTextMatched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnDeleteCharacterTextUnmatched
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::OnDeleteCharacterTextUnmatched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnDeleteCharacterTextUnmatched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnAbandonProspectTextMatched
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::OnAbandonProspectTextMatched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnAbandonProspectTextMatched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnAbandonProspectTextUnmatched
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::OnAbandonProspectTextUnmatched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnAbandonProspectTextUnmatched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnDeleteCharacterPressedEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::OnDeleteCharacterPressedEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnDeleteCharacterPressedEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.ExecuteUbergraph_UMG_CharacterSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FErrorCodesEnum             K2Node_CustomEvent_Result_1                                      (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ExtraErrorInfo_1                              (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FErrorCodesEnum             K2Node_CustomEvent_Result                                        (HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ExtraErrorInfo                                (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FErrorCodesEnum             Temp_struct_Variable                                             (HasGetValueTypeHash)
// class UUMG_DeleteCharacterName_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DeleteCharacterName_C*  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusResetCharacterFromSession*CallFunc_IcarusResetCharacterFromSession_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UUMG_CreateNewCharacterButton_C*K2Node_ComponentBoundEvent_Input                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// int32                              CallFunc_CalculatePlayerLevelFromExp_Level                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterGrowth            CallFunc_GetCharacterGrowthStruct_CharacterGrowth                (None)
// enum class EValid                  CallFunc_GetCharacterGrowthStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails_1                     (ContainsInstancedReference)
// class UUMG_CharacterProfileSlot_C* K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculatePlayerLevelFromExp_Level_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget_2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FCharacterGrowth            CallFunc_GetCharacterGrowthStruct_CharacterGrowth_1              (None)
// enum class EValid                  CallFunc_GetCharacterGrowthStruct_Paths_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// bool                               CallFunc_HasEnteredConfirmText_Entered                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasEnteredConfirmText_Entered_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails_2                     (ContainsInstancedReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::ExecuteUbergraph_UMG_CharacterSelection(int32 EntryPoint, const struct FErrorCodesEnum& K2Node_CustomEvent_Result_1, const class FString& K2Node_CustomEvent_ExtraErrorInfo_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FErrorCodesEnum& K2Node_CustomEvent_Result, const class FString& K2Node_CustomEvent_ExtraErrorInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& Temp_string_Variable, const struct FErrorCodesEnum& Temp_struct_Variable, class UUMG_DeleteCharacterName_C* CallFunc_Create_ReturnValue, class UUMG_DeleteCharacterName_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_GetIsEnabled_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UIcarusResetCharacterFromSession* CallFunc_IcarusResetCharacterFromSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMG_CreateNewCharacterButton_C* K2Node_ComponentBoundEvent_Input, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, int32 CallFunc_CalculatePlayerLevelFromExp_Level, bool CallFunc_NotEqual_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, int32 CallFunc_Clamp_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, class UUMG_CharacterProfileSlot_C* K2Node_CustomEvent_Button, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, int32 CallFunc_CalculatePlayerLevelFromExp_Level_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText Temp_text_Variable_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth_1, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_4, int32 CallFunc_Clamp_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, bool CallFunc_HasEnteredConfirmText_Entered, bool CallFunc_HasEnteredConfirmText_Entered_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, class FText CallFunc_Format_ReturnValue_2, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "ExecuteUbergraph_UMG_CharacterSelection");

	Params::UUMG_CharacterSelection_C_ExecuteUbergraph_UMG_CharacterSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ExtraErrorInfo_1 = K2Node_CustomEvent_ExtraErrorInfo_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ExtraErrorInfo = K2Node_CustomEvent_ExtraErrorInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IcarusResetCharacterFromSession_ReturnValue = CallFunc_IcarusResetCharacterFromSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_ComponentBoundEvent_Input = K2Node_ComponentBoundEvent_Input;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_CalculatePlayerLevelFromExp_Level = CallFunc_CalculatePlayerLevelFromExp_Level;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCharacterGrowthStruct_CharacterGrowth = CallFunc_GetCharacterGrowthStruct_CharacterGrowth;
	Parms.CallFunc_GetCharacterGrowthStruct_Paths = CallFunc_GetCharacterGrowthStruct_Paths;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget_1 = CallFunc_GetConfirmationWindow_ConfirmationWidget_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails_1 = K2Node_MakeStruct_ConfirmationPopupDetails_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_2 = CallFunc_GetIcarusPlayerController_IsValid_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_CalculatePlayerLevelFromExp_Level_1 = CallFunc_CalculatePlayerLevelFromExp_Level_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface_2 = K2Node_DynamicCast_AsUIController_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetUserInterface_UserInterface_2 = CallFunc_GetUserInterface_UserInterface_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget_2 = CallFunc_GetConfirmationWindow_ConfirmationWidget_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetCharacterGrowthStruct_CharacterGrowth_1 = CallFunc_GetCharacterGrowthStruct_CharacterGrowth_1;
	Parms.CallFunc_GetCharacterGrowthStruct_Paths_1 = CallFunc_GetCharacterGrowthStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_HasEnteredConfirmText_Entered = CallFunc_HasEnteredConfirmText_Entered;
	Parms.CallFunc_HasEnteredConfirmText_Entered_1 = CallFunc_HasEnteredConfirmText_Entered_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails_2 = K2Node_MakeStruct_ConfirmationPopupDetails_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnRequestAbandonProspect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      ProspectID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               WillDelete                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSelection_C::OnRequestAbandonProspect__DelegateSignature(const struct FOnlineProfileCharacter& Character, const class FString& ProspectID, bool WillDelete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnRequestAbandonProspect__DelegateSignature");

	Params::UUMG_CharacterSelection_C_OnRequestAbandonProspect__DelegateSignature_Params Parms{};

	Parms.Character = Character;
	Parms.ProspectID = ProspectID;
	Parms.WillDelete = WillDelete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.SelectedCharacterUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     SelectedCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterSelection_C::SelectedCharacterUpdated__DelegateSignature(const struct FOnlineProfileCharacter& SelectedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "SelectedCharacterUpdated__DelegateSignature");

	Params::UUMG_CharacterSelection_C_SelectedCharacterUpdated__DelegateSignature_Params Parms{};

	Parms.SelectedCharacter = SelectedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.CreateCharacter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CharacterSelection_C::CreateCharacter__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "CreateCharacter__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnRequestCharacterDelete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterSelection_C::OnRequestCharacterDelete__DelegateSignature(const struct FOnlineProfileCharacter& Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnRequestCharacterDelete__DelegateSignature");

	Params::UUMG_CharacterSelection_C_OnRequestCharacterDelete__DelegateSignature_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnRequestCharacterSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOnlineProfileCharacter     Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CharacterSelection_C::OnRequestCharacterSelect__DelegateSignature(const struct FOnlineProfileCharacter& Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSelection_C", "OnRequestCharacterSelect__DelegateSignature");

	Params::UUMG_CharacterSelection_C_OnRequestCharacterSelect__DelegateSignature_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


