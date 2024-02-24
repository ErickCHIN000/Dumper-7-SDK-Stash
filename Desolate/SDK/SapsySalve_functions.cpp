#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SapsySalve.SapsySalve_C
// (Actor)

class UClass* ASapsySalve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SapsySalve_C");

	return Clss;
}


// SapsySalve_C SapsySalve.Default__SapsySalve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASapsySalve_C* ASapsySalve_C::GetDefaultObj()
{
	static class ASapsySalve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASapsySalve_C*>(ASapsySalve_C::StaticClass()->DefaultObject);

	return Default;
}

}


