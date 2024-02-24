#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RepBooster25.RepBooster25_C
// (Actor)

class UClass* ARepBooster25_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepBooster25_C");

	return Clss;
}


// RepBooster25_C RepBooster25.Default__RepBooster25_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARepBooster25_C* ARepBooster25_C::GetDefaultObj()
{
	static class ARepBooster25_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARepBooster25_C*>(ARepBooster25_C::StaticClass()->DefaultObject);

	return Default;
}

}


