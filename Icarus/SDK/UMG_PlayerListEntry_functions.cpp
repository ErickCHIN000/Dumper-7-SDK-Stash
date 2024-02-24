#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_PlayerListEntry.UMG_PlayerListEntry_C
// (None)

class UClass* UUMG_PlayerListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_PlayerListEntry_C");

	return Clss;
}


// UMG_PlayerListEntry_C UMG_PlayerListEntry.Default__UMG_PlayerListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_PlayerListEntry_C* UUMG_PlayerListEntry_C::GetDefaultObj()
{
	static class UUMG_PlayerListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_PlayerListEntry_C*>(UUMG_PlayerListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.ShowRatings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_PlayerListEntry_C::ShowRatings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "ShowRatings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.Set Rating Button Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Liked                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PlayerListEntry_C::Set_Rating_Button_Style(bool Liked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "Set Rating Button Style");

	Params::UUMG_PlayerListEntry_C_Set_Rating_Button_Style_Params Parms{};

	Parms.Liked = Liked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.IsSettled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Settled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PlayerListEntry_C::IsSettled(bool Settled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "IsSettled");

	Params::UUMG_PlayerListEntry_C_IsSettled_Params Parms{};

	Parms.Settled = Settled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.OnFailure_F261DD19407D95F6521E3A9C07B7A8CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGetIcarusPlayerPersonaResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_PlayerListEntry_C::OnFailure_F261DD19407D95F6521E3A9C07B7A8CF(const struct FGetIcarusPlayerPersonaResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "OnFailure_F261DD19407D95F6521E3A9C07B7A8CF");

	Params::UUMG_PlayerListEntry_C_OnFailure_F261DD19407D95F6521E3A9C07B7A8CF_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGetIcarusPlayerPersonaResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_PlayerListEntry_C::OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF(const struct FGetIcarusPlayerPersonaResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF");

	Params::UUMG_PlayerListEntry_C_OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PlayerListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "PreConstruct");

	Params::UUMG_PlayerListEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_PlayerListEntry_C::BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_PlayerListEntry_C::BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.ShowPlayerDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAssociatedMemberInfo       MemberInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_PlayerListEntry_C::ShowPlayerDetails(const struct FAssociatedMemberInfo& MemberInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "ShowPlayerDetails");

	Params::UUMG_PlayerListEntry_C_ShowPlayerDetails_Params Parms{};

	Parms.MemberInfo = MemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PlayerListEntry.UMG_PlayerListEntry_C.ExecuteUbergraph_UMG_PlayerListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGetIcarusPlayerPersonaResultK2Node_CustomEvent_Result_1                                      (None)
// struct FGetIcarusPlayerPersonaResultK2Node_CustomEvent_Result                                        (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGetIcarusPlayerPersonaResultTemp_struct_Variable                                             (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FAssociatedMemberInfo       K2Node_CustomEvent_MemberInfo                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_CalculatePlayerLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URequestPlayerPersona*       CallFunc_IcarusRequestPlayerPersona_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineProfileUser          CallFunc_GetActiveUserProfile_ReturnValue                        (ConstParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PlayerListEntry_C::ExecuteUbergraph_UMG_PlayerListEntry(int32 EntryPoint, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result_1, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGetIcarusPlayerPersonaResult& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FAssociatedMemberInfo& K2Node_CustomEvent_MemberInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_CalculatePlayerLevel_ReturnValue, class URequestPlayerPersona* CallFunc_IcarusRequestPlayerPersona_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FOnlineProfileUser& CallFunc_GetActiveUserProfile_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerListEntry_C", "ExecuteUbergraph_UMG_PlayerListEntry");

	Params::UUMG_PlayerListEntry_C_ExecuteUbergraph_UMG_PlayerListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_MemberInfo = K2Node_CustomEvent_MemberInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CalculatePlayerLevel_ReturnValue = CallFunc_CalculatePlayerLevel_ReturnValue;
	Parms.CallFunc_IcarusRequestPlayerPersona_ReturnValue = CallFunc_IcarusRequestPlayerPersona_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetActiveUserProfile_ReturnValue = CallFunc_GetActiveUserProfile_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


