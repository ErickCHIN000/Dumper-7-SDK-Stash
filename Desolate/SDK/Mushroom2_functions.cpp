#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mushroom2.Mushroom2_C
// (Actor)

class UClass* AMushroom2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mushroom2_C");

	return Clss;
}


// Mushroom2_C Mushroom2.Default__Mushroom2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMushroom2_C* AMushroom2_C::GetDefaultObj()
{
	static class AMushroom2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMushroom2_C*>(AMushroom2_C::StaticClass()->DefaultObject);

	return Default;
}

}


