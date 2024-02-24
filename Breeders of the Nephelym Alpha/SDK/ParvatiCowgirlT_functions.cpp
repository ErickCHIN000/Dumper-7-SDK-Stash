#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiCowgirlT.ParvatiCowgirlT_C
// (None)

class UClass* UParvatiCowgirlT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiCowgirlT_C");

	return Clss;
}


// ParvatiCowgirlT_C ParvatiCowgirlT.Default__ParvatiCowgirlT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiCowgirlT_C* UParvatiCowgirlT_C::GetDefaultObj()
{
	static class UParvatiCowgirlT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiCowgirlT_C*>(UParvatiCowgirlT_C::StaticClass()->DefaultObject);

	return Default;
}

}


