#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BachelorDinner.BachelorDinner_C
// (Actor)

class UClass* ABachelorDinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BachelorDinner_C");

	return Clss;
}


// BachelorDinner_C BachelorDinner.Default__BachelorDinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABachelorDinner_C* ABachelorDinner_C::GetDefaultObj()
{
	static class ABachelorDinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABachelorDinner_C*>(ABachelorDinner_C::StaticClass()->DefaultObject);

	return Default;
}

}


