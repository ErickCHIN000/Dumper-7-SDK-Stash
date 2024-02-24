#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mushroom3.Mushroom3_C
// (Actor)

class UClass* AMushroom3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mushroom3_C");

	return Clss;
}


// Mushroom3_C Mushroom3.Default__Mushroom3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMushroom3_C* AMushroom3_C::GetDefaultObj()
{
	static class AMushroom3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMushroom3_C*>(AMushroom3_C::StaticClass()->DefaultObject);

	return Default;
}

}


