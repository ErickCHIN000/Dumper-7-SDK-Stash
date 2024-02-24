#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RawInput.RawInputFunctionLibrary
// (None)

class UClass* URawInputFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RawInputFunctionLibrary");

	return Clss;
}


// RawInputFunctionLibrary RawInput.Default__RawInputFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URawInputFunctionLibrary* URawInputFunctionLibrary::GetDefaultObj()
{
	static class URawInputFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URawInputFunctionLibrary*>(URawInputFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RawInput.RawInputFunctionLibrary.GetRegisteredDevices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FRegisteredDeviceInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRegisteredDeviceInfo> URawInputFunctionLibrary::GetRegisteredDevices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RawInputFunctionLibrary", "GetRegisteredDevices");

	Params::URawInputFunctionLibrary_GetRegisteredDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RawInput.RawInputSettings
// (None)

class UClass* URawInputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RawInputSettings");

	return Clss;
}


// RawInputSettings RawInput.Default__RawInputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URawInputSettings* URawInputSettings::GetDefaultObj()
{
	static class URawInputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URawInputSettings*>(URawInputSettings::StaticClass()->DefaultObject);

	return Default;
}

}


