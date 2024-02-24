#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Rapidity2.Buff_Rapidity2_C
// (Actor)

class UClass* ABuff_Rapidity2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Rapidity2_C");

	return Clss;
}


// Buff_Rapidity2_C Buff_Rapidity2.Default__Buff_Rapidity2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Rapidity2_C* ABuff_Rapidity2_C::GetDefaultObj()
{
	static class ABuff_Rapidity2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Rapidity2_C*>(ABuff_Rapidity2_C::StaticClass()->DefaultObject);

	return Default;
}

}


