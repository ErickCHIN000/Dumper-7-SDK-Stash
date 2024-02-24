#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiCowgirlF.ParvatiCowgirlF_C
// (None)

class UClass* UParvatiCowgirlF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiCowgirlF_C");

	return Clss;
}


// ParvatiCowgirlF_C ParvatiCowgirlF.Default__ParvatiCowgirlF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiCowgirlF_C* UParvatiCowgirlF_C::GetDefaultObj()
{
	static class UParvatiCowgirlF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiCowgirlF_C*>(UParvatiCowgirlF_C::StaticClass()->DefaultObject);

	return Default;
}

}


