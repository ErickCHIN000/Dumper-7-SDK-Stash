#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Perception2.Buff_Perception2_C
// (Actor)

class UClass* ABuff_Perception2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Perception2_C");

	return Clss;
}


// Buff_Perception2_C Buff_Perception2.Default__Buff_Perception2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Perception2_C* ABuff_Perception2_C::GetDefaultObj()
{
	static class ABuff_Perception2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Perception2_C*>(ABuff_Perception2_C::StaticClass()->DefaultObject);

	return Default;
}

}


