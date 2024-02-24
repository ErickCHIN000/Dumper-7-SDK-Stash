#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnsoraDelight.AnsoraDelight_C
// (Actor)

class UClass* AAnsoraDelight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnsoraDelight_C");

	return Clss;
}


// AnsoraDelight_C AnsoraDelight.Default__AnsoraDelight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnsoraDelight_C* AAnsoraDelight_C::GetDefaultObj()
{
	static class AAnsoraDelight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnsoraDelight_C*>(AAnsoraDelight_C::StaticClass()->DefaultObject);

	return Default;
}

}


