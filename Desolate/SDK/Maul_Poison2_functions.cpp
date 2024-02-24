#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Maul_Poison2.Maul_Poison2_C
// (Actor)

class UClass* AMaul_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Maul_Poison2_C");

	return Clss;
}


// Maul_Poison2_C Maul_Poison2.Default__Maul_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMaul_Poison2_C* AMaul_Poison2_C::GetDefaultObj()
{
	static class AMaul_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMaul_Poison2_C*>(AMaul_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


