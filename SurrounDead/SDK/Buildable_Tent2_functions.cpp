#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_Tent2.Buildable_Tent2_C
// (Actor)

class UClass* ABuildable_Tent2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_Tent2_C");

	return Clss;
}


// Buildable_Tent2_C Buildable_Tent2.Default__Buildable_Tent2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_Tent2_C* ABuildable_Tent2_C::GetDefaultObj()
{
	static class ABuildable_Tent2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_Tent2_C*>(ABuildable_Tent2_C::StaticClass()->DefaultObject);

	return Default;
}

}


