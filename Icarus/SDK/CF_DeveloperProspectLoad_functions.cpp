#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C
// (None)

class UClass* UCF_DeveloperProspectLoad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DeveloperProspectLoad_C");

	return Clss;
}


// CF_DeveloperProspectLoad_C CF_DeveloperProspectLoad.Default__CF_DeveloperProspectLoad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DeveloperProspectLoad_C* UCF_DeveloperProspectLoad_C::GetDefaultObj()
{
	static class UCF_DeveloperProspectLoad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DeveloperProspectLoad_C*>(UCF_DeveloperProspectLoad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.CheckMapIsValid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      MapName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsMapValid                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              AllMaps                                                          (Edit, BlueprintVisible)
// TArray<class FString>              CallFunc_GetAllMapNames_ReturnValue                              (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetAllMapNames_ReturnValue_1                            (ReferenceParm)

void UCF_DeveloperProspectLoad_C::CheckMapIsValid(const class FString& MapName, bool* IsMapValid, const TArray<class FString>& AllMaps, TArray<class FString>& CallFunc_GetAllMapNames_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, TArray<class FString>& CallFunc_GetAllMapNames_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "CheckMapIsValid");

	Params::UCF_DeveloperProspectLoad_C_CheckMapIsValid_Params Parms{};

	Parms.MapName = MapName;
	Parms.AllMaps = AllMaps;
	Parms.CallFunc_GetAllMapNames_ReturnValue = CallFunc_GetAllMapNames_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetAllMapNames_ReturnValue_1 = CallFunc_GetAllMapNames_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMapValid != nullptr)
		*IsMapValid = Parms.IsMapValid;

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.HandleArg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Arg                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DeveloperProspectLoad_C::HandleArg(int32 Index, const class FString& Arg, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "HandleArg");

	Params::UCF_DeveloperProspectLoad_C_HandleArg_Params Parms{};

	Parms.Index = Index;
	Parms.Arg = Arg;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.OnHandleItemSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugProspectRow_C*         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDeveloperProspectFilePath_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindSubstring_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectSaveStateHeader    CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader       (None)
// bool                               CallFunc_LoadProspectSaveHeader_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue                 (None)
// bool                               CallFunc_CheckMapIsValid_IsMapValid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

void UCF_DeveloperProspectLoad_C::OnHandleItemSet(class UDebugProspectRow_C* Row, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDeveloperProspectFilePath_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_FindSubstring_ReturnValue, const struct FProspectSaveStateHeader& CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader, bool CallFunc_LoadProspectSaveHeader_ReturnValue, const class FString& CallFunc_RightChop_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue, bool CallFunc_CheckMapIsValid_IsMapValid, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "OnHandleItemSet");

	Params::UCF_DeveloperProspectLoad_C_OnHandleItemSet_Params Parms{};

	Parms.Row = Row;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDeveloperProspectFilePath_ReturnValue = CallFunc_GetDeveloperProspectFilePath_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader = CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader;
	Parms.CallFunc_LoadProspectSaveHeader_ReturnValue = CallFunc_LoadProspectSaveHeader_ReturnValue;
	Parms.CallFunc_RightChop_ReturnValue = CallFunc_RightChop_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue = CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue;
	Parms.CallFunc_CheckMapIsValid_IsMapValid = CallFunc_CheckMapIsValid_IsMapValid;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.OnHandleExecute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugProspectRow_C*         Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDeveloperProspectFilePath_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetDeveloperProspectFilePath_ReturnValue_1              (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FProspectSaveStateHeader    CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader       (None)
// bool                               CallFunc_LoadProspectSaveHeader_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// bool                               CallFunc_CheckMapIsValid_IsMapValid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)

void UCF_DeveloperProspectLoad_C::OnHandleExecute(class UDebugProspectRow_C* Row, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDeveloperProspectFilePath_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetDeveloperProspectFilePath_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FProspectSaveStateHeader& CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader, bool CallFunc_LoadProspectSaveHeader_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_StringToText_ReturnValue_5, bool CallFunc_CheckMapIsValid_IsMapValid, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class FText CallFunc_Conv_StringToText_ReturnValue_7, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, class FText CallFunc_Format_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "OnHandleExecute");

	Params::UCF_DeveloperProspectLoad_C_OnHandleExecute_Params Parms{};

	Parms.Row = Row;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDeveloperProspectFilePath_ReturnValue = CallFunc_GetDeveloperProspectFilePath_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDeveloperProspectFilePath_ReturnValue_1 = CallFunc_GetDeveloperProspectFilePath_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader = CallFunc_LoadProspectSaveHeader_OutProspectSaveStateHeader;
	Parms.CallFunc_LoadProspectSaveHeader_ReturnValue = CallFunc_LoadProspectSaveHeader_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.CallFunc_CheckMapIsValid_IsMapValid = CallFunc_CheckMapIsValid_IsMapValid;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_DeveloperProspectLoad_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_DeveloperProspectLoad_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCF_DeveloperProspectLoad_C::BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "BndEvt__UMG_IconTextButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.UpdatePreview
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCF_DeveloperProspectLoad_C::UpdatePreview(TArray<class FString>& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "UpdatePreview");

	Params::UCF_DeveloperProspectLoad_C_UpdatePreview_Params Parms{};

	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NameString                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_DeveloperProspectLoad_C::BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature");

	Params::UCF_DeveloperProspectLoad_C_BndEvt__CF_DeveloperProspectLoad_ComboBox_K2Node_ComponentBoundEvent_3_OnItemSet__DelegateSignature_Params Parms{};

	Parms.NameString = NameString;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_DeveloperProspectLoad.CF_DeveloperProspectLoad_C.ExecuteUbergraph_CF_DeveloperProspectLoad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_NameString                            (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugProspectRow_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugProspectRow_C*         K2Node_DynamicCast_AsDebug_Prospect_Row                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugProspectRow_C*         K2Node_DynamicCast_AsDebug_Prospect_Row_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_Args                                                (ConstParm, ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              CallFunc_GetSavedDeveloperProspectFileNames_ReturnValue          (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DeveloperProspectLoad_C::ExecuteUbergraph_CF_DeveloperProspectLoad(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UDebugProspectRow_C* CallFunc_Create_ReturnValue, class UDebugProspectRow_C* K2Node_DynamicCast_AsDebug_Prospect_Row, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UDebugProspectRow_C* K2Node_DynamicCast_AsDebug_Prospect_Row_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FString>& K2Node_Event_Args, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_GetSavedDeveloperProspectFileNames_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DeveloperProspectLoad_C", "ExecuteUbergraph_CF_DeveloperProspectLoad");

	Params::UCF_DeveloperProspectLoad_C_ExecuteUbergraph_CF_DeveloperProspectLoad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_NameString = K2Node_ComponentBoundEvent_NameString;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsDebug_Prospect_Row = K2Node_DynamicCast_AsDebug_Prospect_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsDebug_Prospect_Row_1 = K2Node_DynamicCast_AsDebug_Prospect_Row_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_Args = K2Node_Event_Args;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetSavedDeveloperProspectFileNames_ReturnValue = CallFunc_GetSavedDeveloperProspectFileNames_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


