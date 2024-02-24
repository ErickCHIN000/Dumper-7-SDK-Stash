#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe_Fire3.Axe_Fire3_C
// (Actor)

class UClass* AAxe_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_Fire3_C");

	return Clss;
}


// Axe_Fire3_C Axe_Fire3.Default__Axe_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_Fire3_C* AAxe_Fire3_C::GetDefaultObj()
{
	static class AAxe_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_Fire3_C*>(AAxe_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}


