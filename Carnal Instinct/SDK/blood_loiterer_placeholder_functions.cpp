#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass blood_loiterer_placeholder.blood_loiterer_placeholder_C
// (Actor)

class UClass* Ablood_loiterer_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("blood_loiterer_placeholder_C");

	return Clss;
}


// blood_loiterer_placeholder_C blood_loiterer_placeholder.Default__blood_loiterer_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ablood_loiterer_placeholder_C* Ablood_loiterer_placeholder_C::GetDefaultObj()
{
	static class Ablood_loiterer_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ablood_loiterer_placeholder_C*>(Ablood_loiterer_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


