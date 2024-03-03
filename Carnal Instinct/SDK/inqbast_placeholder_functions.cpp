#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass inqbast_placeholder.inqbast_placeholder_C
// (Actor)

class UClass* AInqbast_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("inqbast_placeholder_C");

	return Clss;
}


// inqbast_placeholder_C inqbast_placeholder.Default__inqbast_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInqbast_placeholder_C* AInqbast_placeholder_C::GetDefaultObj()
{
	static class AInqbast_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInqbast_placeholder_C*>(AInqbast_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


