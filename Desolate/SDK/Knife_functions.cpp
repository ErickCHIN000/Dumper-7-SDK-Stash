#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Knife.Knife_C
// (Actor)

class UClass* AKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Knife_C");

	return Clss;
}


// Knife_C Knife.Default__Knife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKnife_C* AKnife_C::GetDefaultObj()
{
	static class AKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKnife_C*>(AKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


