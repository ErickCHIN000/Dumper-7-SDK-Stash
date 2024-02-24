#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kama_Strong3.Kama_Strong3_C
// (Actor)

class UClass* AKama_Strong3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kama_Strong3_C");

	return Clss;
}


// Kama_Strong3_C Kama_Strong3.Default__Kama_Strong3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKama_Strong3_C* AKama_Strong3_C::GetDefaultObj()
{
	static class AKama_Strong3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKama_Strong3_C*>(AKama_Strong3_C::StaticClass()->DefaultObject);

	return Default;
}

}


