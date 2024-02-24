#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandage_Crafted.Bandage_Crafted_C
// (Actor)

class UClass* ABandage_Crafted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandage_Crafted_C");

	return Clss;
}


// Bandage_Crafted_C Bandage_Crafted.Default__Bandage_Crafted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandage_Crafted_C* ABandage_Crafted_C::GetDefaultObj()
{
	static class ABandage_Crafted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandage_Crafted_C*>(ABandage_Crafted_C::StaticClass()->DefaultObject);

	return Default;
}

}


