#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Knife_Fire1.Knife_Fire1_C
// (Actor)

class UClass* AKnife_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Knife_Fire1_C");

	return Clss;
}


// Knife_Fire1_C Knife_Fire1.Default__Knife_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKnife_Fire1_C* AKnife_Fire1_C::GetDefaultObj()
{
	static class AKnife_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKnife_Fire1_C*>(AKnife_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


