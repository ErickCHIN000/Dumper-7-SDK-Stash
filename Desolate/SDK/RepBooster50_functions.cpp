#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RepBooster50.RepBooster50_C
// (Actor)

class UClass* ARepBooster50_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepBooster50_C");

	return Clss;
}


// RepBooster50_C RepBooster50.Default__RepBooster50_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARepBooster50_C* ARepBooster50_C::GetDefaultObj()
{
	static class ARepBooster50_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARepBooster50_C*>(ARepBooster50_C::StaticClass()->DefaultObject);

	return Default;
}

}


