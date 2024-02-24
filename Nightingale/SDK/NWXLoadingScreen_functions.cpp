#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NWXLoadingScreen.NWXLoadingScreenBase
// (None)

class UClass* UNWXLoadingScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXLoadingScreenBase");

	return Clss;
}


// NWXLoadingScreenBase NWXLoadingScreen.Default__NWXLoadingScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXLoadingScreenBase* UNWXLoadingScreenBase::GetDefaultObj()
{
	static class UNWXLoadingScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXLoadingScreenBase*>(UNWXLoadingScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXLoadingScreen.NWXLoadingScreenBase.ReceiveMapContextChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      NewSourceMap                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewDestinationMap                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNWXLoadingScreenBase::ReceiveMapContextChanged(const class FString& NewSourceMap, const class FString& NewDestinationMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXLoadingScreenBase", "ReceiveMapContextChanged");

	Params::UNWXLoadingScreenBase_ReceiveMapContextChanged_Params Parms{};

	Parms.NewSourceMap = NewSourceMap;
	Parms.NewDestinationMap = NewDestinationMap;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NWXLoadingScreen.NWXLoadingScreenSettings
// (None)

class UClass* UNWXLoadingScreenSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXLoadingScreenSettings");

	return Clss;
}


// NWXLoadingScreenSettings NWXLoadingScreen.Default__NWXLoadingScreenSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXLoadingScreenSettings* UNWXLoadingScreenSettings::GetDefaultObj()
{
	static class UNWXLoadingScreenSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXLoadingScreenSettings*>(UNWXLoadingScreenSettings::StaticClass()->DefaultObject);

	return Default;
}

}


