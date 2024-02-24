#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01.NeelaDefault01_C
// (None)

class UClass* UNeelaDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_C");

	return Clss;
}


// NeelaDefault01_C NeelaDefault01.Default__NeelaDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_C* UNeelaDefault01_C::GetDefaultObj()
{
	static class UNeelaDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_C*>(UNeelaDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


