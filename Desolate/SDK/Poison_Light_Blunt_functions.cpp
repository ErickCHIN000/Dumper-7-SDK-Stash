#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Poison_Light_Blunt.Poison_Light_Blunt_C
// (Actor)

class UClass* APoison_Light_Blunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Poison_Light_Blunt_C");

	return Clss;
}


// Poison_Light_Blunt_C Poison_Light_Blunt.Default__Poison_Light_Blunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APoison_Light_Blunt_C* APoison_Light_Blunt_C::GetDefaultObj()
{
	static class APoison_Light_Blunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APoison_Light_Blunt_C*>(APoison_Light_Blunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


