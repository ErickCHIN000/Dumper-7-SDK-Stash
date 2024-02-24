#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Knife_Bleed1.Knife_Bleed1_C
// (Actor)

class UClass* AKnife_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Knife_Bleed1_C");

	return Clss;
}


// Knife_Bleed1_C Knife_Bleed1.Default__Knife_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKnife_Bleed1_C* AKnife_Bleed1_C::GetDefaultObj()
{
	static class AKnife_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKnife_Bleed1_C*>(AKnife_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


