#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Perception1.Buff_Perception1_C
// (Actor)

class UClass* ABuff_Perception1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Perception1_C");

	return Clss;
}


// Buff_Perception1_C Buff_Perception1.Default__Buff_Perception1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Perception1_C* ABuff_Perception1_C::GetDefaultObj()
{
	static class ABuff_Perception1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Perception1_C*>(ABuff_Perception1_C::StaticClass()->DefaultObject);

	return Default;
}

}


