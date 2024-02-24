#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Rapidity1.Buff_Rapidity1_C
// (Actor)

class UClass* ABuff_Rapidity1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Rapidity1_C");

	return Clss;
}


// Buff_Rapidity1_C Buff_Rapidity1.Default__Buff_Rapidity1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Rapidity1_C* ABuff_Rapidity1_C::GetDefaultObj()
{
	static class ABuff_Rapidity1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Rapidity1_C*>(ABuff_Rapidity1_C::StaticClass()->DefaultObject);

	return Default;
}

}


