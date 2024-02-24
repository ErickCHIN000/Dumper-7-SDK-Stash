#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ansora-stylePasta.Ansora-stylePasta_C
// (Actor)

class UClass* AAnsoraMinusstylePasta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ansora-stylePasta_C");

	return Clss;
}


// Ansora-stylePasta_C Ansora-stylePasta.Default__Ansora-stylePasta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnsoraMinusstylePasta_C* AAnsoraMinusstylePasta_C::GetDefaultObj()
{
	static class AAnsoraMinusstylePasta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnsoraMinusstylePasta_C*>(AAnsoraMinusstylePasta_C::StaticClass()->DefaultObject);

	return Default;
}

}


