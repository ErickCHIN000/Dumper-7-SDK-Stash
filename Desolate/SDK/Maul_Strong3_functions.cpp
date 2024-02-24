#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Maul_Strong3.Maul_Strong3_C
// (Actor)

class UClass* AMaul_Strong3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Maul_Strong3_C");

	return Clss;
}


// Maul_Strong3_C Maul_Strong3.Default__Maul_Strong3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMaul_Strong3_C* AMaul_Strong3_C::GetDefaultObj()
{
	static class AMaul_Strong3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMaul_Strong3_C*>(AMaul_Strong3_C::StaticClass()->DefaultObject);

	return Default;
}

}


