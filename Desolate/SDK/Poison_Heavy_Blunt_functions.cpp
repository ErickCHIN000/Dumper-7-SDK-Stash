#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Poison_Heavy_Blunt.Poison_Heavy_Blunt_C
// (Actor)

class UClass* APoison_Heavy_Blunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Poison_Heavy_Blunt_C");

	return Clss;
}


// Poison_Heavy_Blunt_C Poison_Heavy_Blunt.Default__Poison_Heavy_Blunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APoison_Heavy_Blunt_C* APoison_Heavy_Blunt_C::GetDefaultObj()
{
	static class APoison_Heavy_Blunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APoison_Heavy_Blunt_C*>(APoison_Heavy_Blunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


