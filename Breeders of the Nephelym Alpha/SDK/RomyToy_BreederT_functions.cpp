#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyToy_BreederT.RomyToy_BreederT_C
// (None)

class UClass* URomyToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyToy_BreederT_C");

	return Clss;
}


// RomyToy_BreederT_C RomyToy_BreederT.Default__RomyToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyToy_BreederT_C* URomyToy_BreederT_C::GetDefaultObj()
{
	static class URomyToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyToy_BreederT_C*>(URomyToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


