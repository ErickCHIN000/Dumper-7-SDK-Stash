#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TwSplunkHandler.SplunkFunctionLibrary
// (None)

class UClass* USplunkFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplunkFunctionLibrary");

	return Clss;
}


// SplunkFunctionLibrary TwSplunkHandler.Default__SplunkFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USplunkFunctionLibrary* USplunkFunctionLibrary::GetDefaultObj()
{
	static class USplunkFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USplunkFunctionLibrary*>(USplunkFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TwSplunkHandler.SplunkFunctionLibrary.SendToSplunk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> UserPayload                                                      (Parm, NativeAccessSpecifierPublic)

void USplunkFunctionLibrary::SendToSplunk(TMap<class FString, class FString> UserPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplunkFunctionLibrary", "SendToSplunk");

	Params::USplunkFunctionLibrary_SendToSplunk_Params Parms{};

	Parms.UserPayload = UserPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


