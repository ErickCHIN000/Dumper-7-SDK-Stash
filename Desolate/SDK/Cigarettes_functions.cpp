#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cigarettes.Cigarettes_C
// (Actor)

class UClass* ACigarettes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cigarettes_C");

	return Clss;
}


// Cigarettes_C Cigarettes.Default__Cigarettes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACigarettes_C* ACigarettes_C::GetDefaultObj()
{
	static class ACigarettes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACigarettes_C*>(ACigarettes_C::StaticClass()->DefaultObject);

	return Default;
}

}


