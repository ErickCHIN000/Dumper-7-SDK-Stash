#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RepBooster200.RepBooster200_C
// (Actor)

class UClass* ARepBooster200_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepBooster200_C");

	return Clss;
}


// RepBooster200_C RepBooster200.Default__RepBooster200_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARepBooster200_C* ARepBooster200_C::GetDefaultObj()
{
	static class ARepBooster200_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARepBooster200_C*>(ARepBooster200_C::StaticClass()->DefaultObject);

	return Default;
}

}


