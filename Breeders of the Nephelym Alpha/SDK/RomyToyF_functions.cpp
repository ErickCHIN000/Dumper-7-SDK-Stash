#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyToyF.RomyToyF_C
// (None)

class UClass* URomyToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyToyF_C");

	return Clss;
}


// RomyToyF_C RomyToyF.Default__RomyToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyToyF_C* URomyToyF_C::GetDefaultObj()
{
	static class URomyToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyToyF_C*>(URomyToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


