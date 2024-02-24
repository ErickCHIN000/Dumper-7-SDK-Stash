#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiRCowgirl_BreederF.ParvatiRCowgirl_BreederF_C
// (None)

class UClass* UParvatiRCowgirl_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiRCowgirl_BreederF_C");

	return Clss;
}


// ParvatiRCowgirl_BreederF_C ParvatiRCowgirl_BreederF.Default__ParvatiRCowgirl_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiRCowgirl_BreederF_C* UParvatiRCowgirl_BreederF_C::GetDefaultObj()
{
	static class UParvatiRCowgirl_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiRCowgirl_BreederF_C*>(UParvatiRCowgirl_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


