#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ice_Heavy_Blunt.Ice_Heavy_Blunt_C
// (Actor)

class UClass* AIce_Heavy_Blunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ice_Heavy_Blunt_C");

	return Clss;
}


// Ice_Heavy_Blunt_C Ice_Heavy_Blunt.Default__Ice_Heavy_Blunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIce_Heavy_Blunt_C* AIce_Heavy_Blunt_C::GetDefaultObj()
{
	static class AIce_Heavy_Blunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIce_Heavy_Blunt_C*>(AIce_Heavy_Blunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


