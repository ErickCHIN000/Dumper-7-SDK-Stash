#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kama_Poison3.Kama_Poison3_C
// (Actor)

class UClass* AKama_Poison3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kama_Poison3_C");

	return Clss;
}


// Kama_Poison3_C Kama_Poison3.Default__Kama_Poison3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKama_Poison3_C* AKama_Poison3_C::GetDefaultObj()
{
	static class AKama_Poison3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKama_Poison3_C*>(AKama_Poison3_C::StaticClass()->DefaultObject);

	return Default;
}

}


