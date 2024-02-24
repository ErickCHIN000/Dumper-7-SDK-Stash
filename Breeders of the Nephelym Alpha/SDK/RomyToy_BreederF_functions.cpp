#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyToy_BreederF.RomyToy_BreederF_C
// (None)

class UClass* URomyToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyToy_BreederF_C");

	return Clss;
}


// RomyToy_BreederF_C RomyToy_BreederF.Default__RomyToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyToy_BreederF_C* URomyToy_BreederF_C::GetDefaultObj()
{
	static class URomyToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyToy_BreederF_C*>(URomyToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


