#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Potato.Potato_C
// (Actor)

class UClass* APotato_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Potato_C");

	return Clss;
}


// Potato_C Potato.Default__Potato_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APotato_C* APotato_C::GetDefaultObj()
{
	static class APotato_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APotato_C*>(APotato_C::StaticClass()->DefaultObject);

	return Default;
}

}


