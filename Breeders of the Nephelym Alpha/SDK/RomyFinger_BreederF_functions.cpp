#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyFinger_BreederF.RomyFinger_BreederF_C
// (None)

class UClass* URomyFinger_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyFinger_BreederF_C");

	return Clss;
}


// RomyFinger_BreederF_C RomyFinger_BreederF.Default__RomyFinger_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyFinger_BreederF_C* URomyFinger_BreederF_C::GetDefaultObj()
{
	static class URomyFinger_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyFinger_BreederF_C*>(URomyFinger_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


