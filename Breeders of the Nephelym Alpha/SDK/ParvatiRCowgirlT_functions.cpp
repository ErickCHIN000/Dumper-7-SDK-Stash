#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiRCowgirlT.ParvatiRCowgirlT_C
// (None)

class UClass* UParvatiRCowgirlT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiRCowgirlT_C");

	return Clss;
}


// ParvatiRCowgirlT_C ParvatiRCowgirlT.Default__ParvatiRCowgirlT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiRCowgirlT_C* UParvatiRCowgirlT_C::GetDefaultObj()
{
	static class UParvatiRCowgirlT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiRCowgirlT_C*>(UParvatiRCowgirlT_C::StaticClass()->DefaultObject);

	return Default;
}

}


