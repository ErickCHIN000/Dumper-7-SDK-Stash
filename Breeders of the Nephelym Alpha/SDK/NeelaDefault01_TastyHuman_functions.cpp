#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_TastyHuman.NeelaDefault01_TastyHuman_C
// (None)

class UClass* UNeelaDefault01_TastyHuman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_TastyHuman_C");

	return Clss;
}


// NeelaDefault01_TastyHuman_C NeelaDefault01_TastyHuman.Default__NeelaDefault01_TastyHuman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_TastyHuman_C* UNeelaDefault01_TastyHuman_C::GetDefaultObj()
{
	static class UNeelaDefault01_TastyHuman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_TastyHuman_C*>(UNeelaDefault01_TastyHuman_C::StaticClass()->DefaultObject);

	return Default;
}

}


