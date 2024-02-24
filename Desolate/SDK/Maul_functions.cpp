#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Maul.Maul_C
// (Actor)

class UClass* AMaul_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Maul_C");

	return Clss;
}


// Maul_C Maul.Default__Maul_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMaul_C* AMaul_C::GetDefaultObj()
{
	static class AMaul_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMaul_C*>(AMaul_C::StaticClass()->DefaultObject);

	return Default;
}

}


