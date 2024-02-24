#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_Tent3.Buildable_Tent3_C
// (Actor)

class UClass* ABuildable_Tent3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_Tent3_C");

	return Clss;
}


// Buildable_Tent3_C Buildable_Tent3.Default__Buildable_Tent3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_Tent3_C* ABuildable_Tent3_C::GetDefaultObj()
{
	static class ABuildable_Tent3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_Tent3_C*>(ABuildable_Tent3_C::StaticClass()->DefaultObject);

	return Default;
}

}


