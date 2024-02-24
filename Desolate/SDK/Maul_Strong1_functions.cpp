#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Maul_Strong1.Maul_Strong1_C
// (Actor)

class UClass* AMaul_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Maul_Strong1_C");

	return Clss;
}


// Maul_Strong1_C Maul_Strong1.Default__Maul_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMaul_Strong1_C* AMaul_Strong1_C::GetDefaultObj()
{
	static class AMaul_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMaul_Strong1_C*>(AMaul_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


