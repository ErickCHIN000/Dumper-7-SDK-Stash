#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C
// (None)

class UClass* UUMG_CharacterSetting_Voice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterSetting_Voice_C");

	return Clss;
}


// UMG_CharacterSetting_Voice_C UMG_CharacterSetting_Voice.Default__UMG_CharacterSetting_Voice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterSetting_Voice_C* UUMG_CharacterSetting_Voice_C::GetDefaultObj()
{
	static class UUMG_CharacterSetting_Voice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterSetting_Voice_C*>(UUMG_CharacterSetting_Voice_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClearIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Voice_C::ClearOptions(bool ClearIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Voice_C", "ClearOptions");

	Params::UUMG_CharacterSetting_Voice_C_ClearOptions_Params Parms{};

	Parms.ClearIndex = ClearIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.IsValidVoice
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCharacterVoicesRowHandle   RowHandle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRowMetadata                CallFunc_GetMetadata_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Voice_C::IsValidVoice(const struct FCharacterVoicesRowHandle& RowHandle, bool* IsValid, const struct FRowMetadata& CallFunc_GetMetadata_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Voice_C", "IsValidVoice");

	Params::UUMG_CharacterSetting_Voice_C_IsValidVoice_Params Parms{};

	Parms.RowHandle = RowHandle;
	Parms.CallFunc_GetMetadata_ReturnValue = CallFunc_GetMetadata_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GenerateOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterVoicesRowHandle   DefaultSelection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              SelectionIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoicesEnum        CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoicesRowHandle   CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidVoice_IsValid                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddOption_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FCharacterVoicesRowHandleFCharacterVoicesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Voice_C::GenerateOptions(const struct FCharacterVoicesRowHandle& DefaultSelection, int32 SelectionIndex, int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FCharacterVoicesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_StructToRowHandle_ReturnValue, bool CallFunc_IsValidVoice_IsValid, int32 CallFunc_AddOption_Index, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_EqualEqual_FCharacterVoicesRowHandleFCharacterVoicesRowHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Voice_C", "GenerateOptions");

	Params::UUMG_CharacterSetting_Voice_C_GenerateOptions_Params Parms{};

	Parms.DefaultSelection = DefaultSelection;
	Parms.SelectionIndex = SelectionIndex;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_IsValidVoice_IsValid = CallFunc_IsValidVoice_IsValid;
	Parms.CallFunc_AddOption_Index = CallFunc_AddOption_Index;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_EqualEqual_FCharacterVoicesRowHandleFCharacterVoicesRowHandle_ReturnValue = CallFunc_EqualEqual_FCharacterVoicesRowHandleFCharacterVoicesRowHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.SetVoiceParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow                           (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterVoicesRowHandle_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoicesRowHandle   CallFunc_CastToCharacterVoicesRowHandle_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterVoiceData         CallFunc_GetCharacterVoicesStruct_CharacterVoices                (None)
// enum class EValid                  CallFunc_GetCharacterVoicesStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Voice_C::SetVoiceParameter(const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, enum class EValid CallFunc_CastToCharacterVoicesRowHandle_Paths, const struct FCharacterVoicesRowHandle& CallFunc_CastToCharacterVoicesRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterVoiceData& CallFunc_GetCharacterVoicesStruct_CharacterVoices, enum class EValid CallFunc_GetCharacterVoicesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Voice_C", "SetVoiceParameter");

	Params::UUMG_CharacterSetting_Voice_C_SetVoiceParameter_Params Parms{};

	Parms.CallFunc_GetSelectedOption_SelectedRow = CallFunc_GetSelectedOption_SelectedRow;
	Parms.CallFunc_CastToCharacterVoicesRowHandle_Paths = CallFunc_CastToCharacterVoicesRowHandle_Paths;
	Parms.CallFunc_CastToCharacterVoicesRowHandle_ReturnValue = CallFunc_CastToCharacterVoicesRowHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterVoicesStruct_CharacterVoices = CallFunc_GetCharacterVoicesStruct_CharacterVoices;
	Parms.CallFunc_GetCharacterVoicesStruct_Paths = CallFunc_GetCharacterVoicesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.PlayAuditionEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Voice_C::PlayAuditionEvent(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Voice_C", "PlayAuditionEvent");

	Params::UUMG_CharacterSetting_Voice_C_PlayAuditionEvent_Params Parms{};

	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.ChangeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TempIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Voice_C::ChangeSelection(int32 Index, int32 TempIndex, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Voice_C", "ChangeSelection");

	Params::UUMG_CharacterSetting_Voice_C_ChangeSelection_Params Parms{};

	Parms.Index = Index;
	Parms.TempIndex = TempIndex;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GetSelectionDisplayName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (Parm, OutParm)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow                           (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterVoicesRowHandle_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoicesRowHandle   CallFunc_CastToCharacterVoicesRowHandle_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterVoiceData         CallFunc_GetCharacterVoicesStruct_CharacterVoices                (None)
// enum class EValid                  CallFunc_GetCharacterVoicesStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Voice_C::GetSelectionDisplayName(class FText* DisplayName, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, enum class EValid CallFunc_CastToCharacterVoicesRowHandle_Paths, const struct FCharacterVoicesRowHandle& CallFunc_CastToCharacterVoicesRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterVoiceData& CallFunc_GetCharacterVoicesStruct_CharacterVoices, enum class EValid CallFunc_GetCharacterVoicesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Voice_C", "GetSelectionDisplayName");

	Params::UUMG_CharacterSetting_Voice_C_GetSelectionDisplayName_Params Parms{};

	Parms.CallFunc_GetSelectedOption_SelectedRow = CallFunc_GetSelectedOption_SelectedRow;
	Parms.CallFunc_CastToCharacterVoicesRowHandle_Paths = CallFunc_CastToCharacterVoicesRowHandle_Paths;
	Parms.CallFunc_CastToCharacterVoicesRowHandle_ReturnValue = CallFunc_CastToCharacterVoicesRowHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterVoicesStruct_CharacterVoices = CallFunc_GetCharacterVoicesStruct_CharacterVoices;
	Parms.CallFunc_GetCharacterVoicesStruct_Paths = CallFunc_GetCharacterVoicesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}

}


