#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaDefault01_EnlightenedOne.NeelaDefault01_EnlightenedOne_C
// (None)

class UClass* UNeelaDefault01_EnlightenedOne_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaDefault01_EnlightenedOne_C");

	return Clss;
}


// NeelaDefault01_EnlightenedOne_C NeelaDefault01_EnlightenedOne.Default__NeelaDefault01_EnlightenedOne_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaDefault01_EnlightenedOne_C* UNeelaDefault01_EnlightenedOne_C::GetDefaultObj()
{
	static class UNeelaDefault01_EnlightenedOne_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaDefault01_EnlightenedOne_C*>(UNeelaDefault01_EnlightenedOne_C::StaticClass()->DefaultObject);

	return Default;
}

}


