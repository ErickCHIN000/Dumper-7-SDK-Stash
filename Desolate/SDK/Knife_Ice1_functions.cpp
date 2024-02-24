#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Knife_Ice1.Knife_Ice1_C
// (Actor)

class UClass* AKnife_Ice1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Knife_Ice1_C");

	return Clss;
}


// Knife_Ice1_C Knife_Ice1.Default__Knife_Ice1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKnife_Ice1_C* AKnife_Ice1_C::GetDefaultObj()
{
	static class AKnife_Ice1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKnife_Ice1_C*>(AKnife_Ice1_C::StaticClass()->DefaultObject);

	return Default;
}

}


