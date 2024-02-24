#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RepBooster100.RepBooster100_C
// (Actor)

class UClass* ARepBooster100_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepBooster100_C");

	return Clss;
}


// RepBooster100_C RepBooster100.Default__RepBooster100_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARepBooster100_C* ARepBooster100_C::GetDefaultObj()
{
	static class ARepBooster100_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARepBooster100_C*>(ARepBooster100_C::StaticClass()->DefaultObject);

	return Default;
}

}


