#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyToyT.RomyToyT_C
// (None)

class UClass* URomyToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyToyT_C");

	return Clss;
}


// RomyToyT_C RomyToyT.Default__RomyToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyToyT_C* URomyToyT_C::GetDefaultObj()
{
	static class URomyToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyToyT_C*>(URomyToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


