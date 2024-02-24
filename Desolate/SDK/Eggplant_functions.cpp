#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Eggplant.Eggplant_C
// (Actor)

class UClass* AEggplant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Eggplant_C");

	return Clss;
}


// Eggplant_C Eggplant.Default__Eggplant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEggplant_C* AEggplant_C::GetDefaultObj()
{
	static class AEggplant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEggplant_C*>(AEggplant_C::StaticClass()->DefaultObject);

	return Default;
}

}


