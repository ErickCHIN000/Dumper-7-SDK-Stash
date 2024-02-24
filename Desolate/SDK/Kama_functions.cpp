#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kama.Kama_C
// (Actor)

class UClass* AKama_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kama_C");

	return Clss;
}


// Kama_C Kama.Default__Kama_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKama_C* AKama_C::GetDefaultObj()
{
	static class AKama_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKama_C*>(AKama_C::StaticClass()->DefaultObject);

	return Default;
}

}


