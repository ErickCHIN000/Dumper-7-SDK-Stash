#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_PussyPortals.NeelaDefault01_PussyPortals_C
// (None)

class UClass* UNeelaDefault01_PussyPortals_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_PussyPortals_C");

	return Clss;
}


// NeelaDefault01_PussyPortals_C NeelaDefault01_PussyPortals.Default__NeelaDefault01_PussyPortals_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_PussyPortals_C* UNeelaDefault01_PussyPortals_C::GetDefaultObj()
{
	static class UNeelaDefault01_PussyPortals_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_PussyPortals_C*>(UNeelaDefault01_PussyPortals_C::StaticClass()->DefaultObject);

	return Default;
}

}


