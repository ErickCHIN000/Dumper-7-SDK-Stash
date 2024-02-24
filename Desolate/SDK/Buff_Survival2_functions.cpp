#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Survival2.Buff_Survival2_C
// (Actor)

class UClass* ABuff_Survival2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Survival2_C");

	return Clss;
}


// Buff_Survival2_C Buff_Survival2.Default__Buff_Survival2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Survival2_C* ABuff_Survival2_C::GetDefaultObj()
{
	static class ABuff_Survival2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Survival2_C*>(ABuff_Survival2_C::StaticClass()->DefaultObject);

	return Default;
}

}


