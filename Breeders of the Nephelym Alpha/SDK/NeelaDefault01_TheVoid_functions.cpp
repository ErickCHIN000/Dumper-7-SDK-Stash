#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_TheVoid.NeelaDefault01_TheVoid_C
// (None)

class UClass* UNeelaDefault01_TheVoid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_TheVoid_C");

	return Clss;
}


// NeelaDefault01_TheVoid_C NeelaDefault01_TheVoid.Default__NeelaDefault01_TheVoid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_TheVoid_C* UNeelaDefault01_TheVoid_C::GetDefaultObj()
{
	static class UNeelaDefault01_TheVoid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_TheVoid_C*>(UNeelaDefault01_TheVoid_C::StaticClass()->DefaultObject);

	return Default;
}

}


