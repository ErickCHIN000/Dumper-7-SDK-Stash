#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerTrackerFunctionLibrary.BP_PlayerTrackerFunctionLibrary_C
// (None)

class UClass* UBP_PlayerTrackerFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerTrackerFunctionLibrary_C");

	return Clss;
}


// BP_PlayerTrackerFunctionLibrary_C BP_PlayerTrackerFunctionLibrary.Default__BP_PlayerTrackerFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerTrackerFunctionLibrary_C* UBP_PlayerTrackerFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_PlayerTrackerFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerTrackerFunctionLibrary_C*>(UBP_PlayerTrackerFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerTrackerFunctionLibrary.BP_PlayerTrackerFunctionLibrary_C.GetPlayerTrackerSaveFormat
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

class FString UBP_PlayerTrackerFunctionLibrary_C::GetPlayerTrackerSaveFormat(const class FString& PlayerID, int32 Slot, class UObject* __WorldContext, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackerFunctionLibrary_C", "GetPlayerTrackerSaveFormat");

	Params::UBP_PlayerTrackerFunctionLibrary_C_GetPlayerTrackerSaveFormat_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.Slot = Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerTrackerFunctionLibrary.BP_PlayerTrackerFunctionLibrary_C.GetPlayerTrackerSaveName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerCharacterID          PlayerCharacterID                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerTrackerSaveFormat_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)

class FString UBP_PlayerTrackerFunctionLibrary_C::GetPlayerTrackerSaveName(const struct FPlayerCharacterID& PlayerCharacterID, class UObject* __WorldContext, const class FString& CallFunc_GetPlayerTrackerSaveFormat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerTrackerFunctionLibrary_C", "GetPlayerTrackerSaveName");

	Params::UBP_PlayerTrackerFunctionLibrary_C_GetPlayerTrackerSaveName_Params Parms{};

	Parms.PlayerCharacterID = PlayerCharacterID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerTrackerSaveFormat_ReturnValue = CallFunc_GetPlayerTrackerSaveFormat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


