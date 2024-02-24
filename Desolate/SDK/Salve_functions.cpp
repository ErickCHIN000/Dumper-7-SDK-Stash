#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Salve.Salve_C
// (Actor)

class UClass* ASalve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Salve_C");

	return Clss;
}


// Salve_C Salve.Default__Salve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASalve_C* ASalve_C::GetDefaultObj()
{
	static class ASalve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASalve_C*>(ASalve_C::StaticClass()->DefaultObject);

	return Default;
}

}


