#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_YourVoid.NeelaDefault01_YourVoid_C
// (None)

class UClass* UNeelaDefault01_YourVoid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_YourVoid_C");

	return Clss;
}


// NeelaDefault01_YourVoid_C NeelaDefault01_YourVoid.Default__NeelaDefault01_YourVoid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_YourVoid_C* UNeelaDefault01_YourVoid_C::GetDefaultObj()
{
	static class UNeelaDefault01_YourVoid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_YourVoid_C*>(UNeelaDefault01_YourVoid_C::StaticClass()->DefaultObject);

	return Default;
}

}

