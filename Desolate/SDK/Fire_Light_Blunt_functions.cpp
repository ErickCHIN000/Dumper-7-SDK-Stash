#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fire_Light_Blunt.Fire_Light_Blunt_C
// (Actor)

class UClass* AFire_Light_Blunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fire_Light_Blunt_C");

	return Clss;
}


// Fire_Light_Blunt_C Fire_Light_Blunt.Default__Fire_Light_Blunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFire_Light_Blunt_C* AFire_Light_Blunt_C::GetDefaultObj()
{
	static class AFire_Light_Blunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFire_Light_Blunt_C*>(AFire_Light_Blunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


