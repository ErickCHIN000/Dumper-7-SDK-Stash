#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe_Fire1.Axe_Fire1_C
// (Actor)

class UClass* AAxe_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_Fire1_C");

	return Clss;
}


// Axe_Fire1_C Axe_Fire1.Default__Axe_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_Fire1_C* AAxe_Fire1_C::GetDefaultObj()
{
	static class AAxe_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_Fire1_C*>(AAxe_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


