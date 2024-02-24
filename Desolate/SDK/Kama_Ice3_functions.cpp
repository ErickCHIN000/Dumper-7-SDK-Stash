#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kama_Ice3.Kama_Ice3_C
// (Actor)

class UClass* AKama_Ice3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kama_Ice3_C");

	return Clss;
}


// Kama_Ice3_C Kama_Ice3.Default__Kama_Ice3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKama_Ice3_C* AKama_Ice3_C::GetDefaultObj()
{
	static class AKama_Ice3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKama_Ice3_C*>(AKama_Ice3_C::StaticClass()->DefaultObject);

	return Default;
}

}


