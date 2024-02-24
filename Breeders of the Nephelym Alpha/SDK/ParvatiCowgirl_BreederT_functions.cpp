#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiCowgirl_BreederT.ParvatiCowgirl_BreederT_C
// (None)

class UClass* UParvatiCowgirl_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiCowgirl_BreederT_C");

	return Clss;
}


// ParvatiCowgirl_BreederT_C ParvatiCowgirl_BreederT.Default__ParvatiCowgirl_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiCowgirl_BreederT_C* UParvatiCowgirl_BreederT_C::GetDefaultObj()
{
	static class UParvatiCowgirl_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiCowgirl_BreederT_C*>(UParvatiCowgirl_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


