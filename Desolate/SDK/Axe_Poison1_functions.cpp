#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe_Poison1.Axe_Poison1_C
// (Actor)

class UClass* AAxe_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_Poison1_C");

	return Clss;
}


// Axe_Poison1_C Axe_Poison1.Default__Axe_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_Poison1_C* AAxe_Poison1_C::GetDefaultObj()
{
	static class AAxe_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_Poison1_C*>(AAxe_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}


