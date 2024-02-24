#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_PlayerName.UMG_PlayerName_C
// (None)

class UClass* UUMG_PlayerName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_PlayerName_C");

	return Clss;
}


// UMG_PlayerName_C UMG_PlayerName.Default__UMG_PlayerName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_PlayerName_C* UUMG_PlayerName_C::GetDefaultObj()
{
	static class UUMG_PlayerName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_PlayerName_C*>(UUMG_PlayerName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_PlayerName.UMG_PlayerName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_PlayerName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerName_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PlayerName.UMG_PlayerName_C.ExecuteUbergraph_UMG_PlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_GetPlayerName_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId               (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBlueprintAsyncResultSwitchCallFunc_GetSteamFriendAvatar_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetSteamFriendAvatar_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PlayerName_C::ExecuteUbergraph_UMG_PlayerName(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue_1, const struct FBPUniqueNetId& CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId, bool CallFunc_NotEqual_StrStr_ReturnValue, enum class EBlueprintAsyncResultSwitch CallFunc_GetSteamFriendAvatar_Result, class UTexture2D* CallFunc_GetSteamFriendAvatar_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PlayerName_C", "ExecuteUbergraph_UMG_PlayerName");

	Params::UUMG_PlayerName_C_ExecuteUbergraph_UMG_PlayerName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue_1 = CallFunc_GetPlayerName_ReturnValue_1;
	Parms.CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId = CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetSteamFriendAvatar_Result = CallFunc_GetSteamFriendAvatar_Result;
	Parms.CallFunc_GetSteamFriendAvatar_ReturnValue = CallFunc_GetSteamFriendAvatar_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


