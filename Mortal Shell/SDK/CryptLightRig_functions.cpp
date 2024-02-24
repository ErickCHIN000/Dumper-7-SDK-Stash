#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CryptLightRig.CryptLightRig_C
// (Actor)

class UClass* ACryptLightRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CryptLightRig_C");

	return Clss;
}


// CryptLightRig_C CryptLightRig.Default__CryptLightRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACryptLightRig_C* ACryptLightRig_C::GetDefaultObj()
{
	static class ACryptLightRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACryptLightRig_C*>(ACryptLightRig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CryptLightRig.CryptLightRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACryptLightRig_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CryptLightRig_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CryptLightRig.CryptLightRig_C.ExecuteUbergraph_CryptLightRig
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ACryptLightRig_C::ExecuteUbergraph_CryptLightRig(int32 EntryPoint, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CryptLightRig_C", "ExecuteUbergraph_CryptLightRig");

	Params::ACryptLightRig_C_ExecuteUbergraph_CryptLightRig_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


