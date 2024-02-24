#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_Tent.Buildable_Tent_C
// (Actor)

class UClass* ABuildable_Tent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_Tent_C");

	return Clss;
}


// Buildable_Tent_C Buildable_Tent.Default__Buildable_Tent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_Tent_C* ABuildable_Tent_C::GetDefaultObj()
{
	static class ABuildable_Tent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_Tent_C*>(ABuildable_Tent_C::StaticClass()->DefaultObject);

	return Default;
}

}


