#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe.Axe_C
// (Actor)

class UClass* AAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_C");

	return Clss;
}


// Axe_C Axe.Default__Axe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_C* AAxe_C::GetDefaultObj()
{
	static class AAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_C*>(AAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


