#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RepBooster125.RepBooster125_C
// (Actor)

class UClass* ARepBooster125_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepBooster125_C");

	return Clss;
}


// RepBooster125_C RepBooster125.Default__RepBooster125_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARepBooster125_C* ARepBooster125_C::GetDefaultObj()
{
	static class ARepBooster125_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARepBooster125_C*>(ARepBooster125_C::StaticClass()->DefaultObject);

	return Default;
}

}


