#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mushroom1.Mushroom1_C
// (Actor)

class UClass* AMushroom1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mushroom1_C");

	return Clss;
}


// Mushroom1_C Mushroom1.Default__Mushroom1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMushroom1_C* AMushroom1_C::GetDefaultObj()
{
	static class AMushroom1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMushroom1_C*>(AMushroom1_C::StaticClass()->DefaultObject);

	return Default;
}

}


