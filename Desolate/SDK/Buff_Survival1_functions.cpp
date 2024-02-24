#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Survival1.Buff_Survival1_C
// (Actor)

class UClass* ABuff_Survival1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Survival1_C");

	return Clss;
}


// Buff_Survival1_C Buff_Survival1.Default__Buff_Survival1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Survival1_C* ABuff_Survival1_C::GetDefaultObj()
{
	static class ABuff_Survival1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Survival1_C*>(ABuff_Survival1_C::StaticClass()->DefaultObject);

	return Default;
}

}


