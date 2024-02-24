#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe_Ice1.Axe_Ice1_C
// (Actor)

class UClass* AAxe_Ice1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_Ice1_C");

	return Clss;
}


// Axe_Ice1_C Axe_Ice1.Default__Axe_Ice1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_Ice1_C* AAxe_Ice1_C::GetDefaultObj()
{
	static class AAxe_Ice1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_Ice1_C*>(AAxe_Ice1_C::StaticClass()->DefaultObject);

	return Default;
}

}


