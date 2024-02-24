#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kunai_Bleeding.Kunai_Bleeding_C
// (Actor)

class UClass* AKunai_Bleeding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kunai_Bleeding_C");

	return Clss;
}


// Kunai_Bleeding_C Kunai_Bleeding.Default__Kunai_Bleeding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKunai_Bleeding_C* AKunai_Bleeding_C::GetDefaultObj()
{
	static class AKunai_Bleeding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKunai_Bleeding_C*>(AKunai_Bleeding_C::StaticClass()->DefaultObject);

	return Default;
}

}


