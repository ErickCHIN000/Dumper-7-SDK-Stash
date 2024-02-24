#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StandardMacros.StandardMacros_C
// (None)

class UClass* UStandardMacros_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandardMacros_C");

	return Clss;
}


// StandardMacros_C StandardMacros.Default__StandardMacros_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStandardMacros_C* UStandardMacros_C::GetDefaultObj()
{
	static class UStandardMacros_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStandardMacros_C*>(UStandardMacros_C::StaticClass()->DefaultObject);

	return Default;
}

}


