#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CE_Carrouser_TeamSwap.CE_Carrouser_TeamSwap_C
// (None)

class UClass* UCE_Carrouser_TeamSwap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CE_Carrouser_TeamSwap_C");

	return Clss;
}


// CE_Carrouser_TeamSwap_C CE_Carrouser_TeamSwap.Default__CE_Carrouser_TeamSwap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCE_Carrouser_TeamSwap_C* UCE_Carrouser_TeamSwap_C::GetDefaultObj()
{
	static class UCE_Carrouser_TeamSwap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCE_Carrouser_TeamSwap_C*>(UCE_Carrouser_TeamSwap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CE_Carrouser_TeamSwap.CE_Carrouser_TeamSwap_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_Carrouser_TeamSwap_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_Carrouser_TeamSwap_C", "OnBegin");

	Params::UCE_Carrouser_TeamSwap_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CE_Carrouser_TeamSwap.CE_Carrouser_TeamSwap_C.ExecuteUbergraph_CE_Carrouser_TeamSwap
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimeRemaining_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_Carrouser_TeamSwap_C::ExecuteUbergraph_CE_Carrouser_TeamSwap(int32 EntryPoint, class AActor* K2Node_Event_Actor, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, float CallFunc_K2_GetTimeRemaining_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CE_Carrouser_TeamSwap_C", "ExecuteUbergraph_CE_Carrouser_TeamSwap");

	Params::UCE_Carrouser_TeamSwap_C_ExecuteUbergraph_CE_Carrouser_TeamSwap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue1 = CallFunc_GetDisplayName_ReturnValue1;
	Parms.CallFunc_K2_GetTimeRemaining_ReturnValue = CallFunc_K2_GetTimeRemaining_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


