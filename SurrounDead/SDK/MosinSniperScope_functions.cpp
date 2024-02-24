#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MosinSniperScope.MosinSniperScope_C
// (None)

class UClass* UMosinSniperScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MosinSniperScope_C");

	return Clss;
}


// MosinSniperScope_C MosinSniperScope.Default__MosinSniperScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMosinSniperScope_C* UMosinSniperScope_C::GetDefaultObj()
{
	static class UMosinSniperScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMosinSniperScope_C*>(UMosinSniperScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


