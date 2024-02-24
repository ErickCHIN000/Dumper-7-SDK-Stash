#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiCowgirl_BreederF.ParvatiCowgirl_BreederF_C
// (None)

class UClass* UParvatiCowgirl_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiCowgirl_BreederF_C");

	return Clss;
}


// ParvatiCowgirl_BreederF_C ParvatiCowgirl_BreederF.Default__ParvatiCowgirl_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiCowgirl_BreederF_C* UParvatiCowgirl_BreederF_C::GetDefaultObj()
{
	static class UParvatiCowgirl_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiCowgirl_BreederF_C*>(UParvatiCowgirl_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


