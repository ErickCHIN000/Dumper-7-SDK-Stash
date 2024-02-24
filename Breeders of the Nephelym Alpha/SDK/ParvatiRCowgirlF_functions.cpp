#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiRCowgirlF.ParvatiRCowgirlF_C
// (None)

class UClass* UParvatiRCowgirlF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiRCowgirlF_C");

	return Clss;
}


// ParvatiRCowgirlF_C ParvatiRCowgirlF.Default__ParvatiRCowgirlF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiRCowgirlF_C* UParvatiRCowgirlF_C::GetDefaultObj()
{
	static class UParvatiRCowgirlF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiRCowgirlF_C*>(UParvatiRCowgirlF_C::StaticClass()->DefaultObject);

	return Default;
}

}


