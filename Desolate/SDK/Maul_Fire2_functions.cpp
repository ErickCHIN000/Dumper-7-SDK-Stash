#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Maul_Fire2.Maul_Fire2_C
// (Actor)

class UClass* AMaul_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Maul_Fire2_C");

	return Clss;
}


// Maul_Fire2_C Maul_Fire2.Default__Maul_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMaul_Fire2_C* AMaul_Fire2_C::GetDefaultObj()
{
	static class AMaul_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMaul_Fire2_C*>(AMaul_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}


