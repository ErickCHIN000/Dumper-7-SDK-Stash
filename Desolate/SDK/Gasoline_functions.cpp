#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gasoline.Gasoline_C
// (Actor)

class UClass* AGasoline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gasoline_C");

	return Clss;
}


// Gasoline_C Gasoline.Default__Gasoline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGasoline_C* AGasoline_C::GetDefaultObj()
{
	static class AGasoline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGasoline_C*>(AGasoline_C::StaticClass()->DefaultObject);

	return Default;
}

}


