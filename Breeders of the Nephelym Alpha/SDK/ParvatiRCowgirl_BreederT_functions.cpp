#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiRCowgirl_BreederT.ParvatiRCowgirl_BreederT_C
// (None)

class UClass* UParvatiRCowgirl_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiRCowgirl_BreederT_C");

	return Clss;
}


// ParvatiRCowgirl_BreederT_C ParvatiRCowgirl_BreederT.Default__ParvatiRCowgirl_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiRCowgirl_BreederT_C* UParvatiRCowgirl_BreederT_C::GetDefaultObj()
{
	static class UParvatiRCowgirl_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiRCowgirl_BreederT_C*>(UParvatiRCowgirl_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


