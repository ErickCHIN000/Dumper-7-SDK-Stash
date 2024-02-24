#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TomatoJuice.TomatoJuice_C
// (Actor)

class UClass* ATomatoJuice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TomatoJuice_C");

	return Clss;
}


// TomatoJuice_C TomatoJuice.Default__TomatoJuice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATomatoJuice_C* ATomatoJuice_C::GetDefaultObj()
{
	static class ATomatoJuice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATomatoJuice_C*>(ATomatoJuice_C::StaticClass()->DefaultObject);

	return Default;
}

}


