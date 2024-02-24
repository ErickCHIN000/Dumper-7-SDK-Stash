#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Poison.Poison_C
// (Actor)

class UClass* APoison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Poison_C");

	return Clss;
}


// Poison_C Poison.Default__Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APoison_C* APoison_C::GetDefaultObj()
{
	static class APoison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APoison_C*>(APoison_C::StaticClass()->DefaultObject);

	return Default;
}

}


