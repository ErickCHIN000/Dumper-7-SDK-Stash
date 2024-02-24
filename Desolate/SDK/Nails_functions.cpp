#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Nails.Nails_C
// (Actor)

class UClass* ANails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Nails_C");

	return Clss;
}


// Nails_C Nails.Default__Nails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANails_C* ANails_C::GetDefaultObj()
{
	static class ANails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANails_C*>(ANails_C::StaticClass()->DefaultObject);

	return Default;
}

}


