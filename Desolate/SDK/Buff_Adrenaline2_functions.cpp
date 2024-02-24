#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Adrenaline2.Buff_Adrenaline2_C
// (Actor)

class UClass* ABuff_Adrenaline2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Adrenaline2_C");

	return Clss;
}


// Buff_Adrenaline2_C Buff_Adrenaline2.Default__Buff_Adrenaline2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Adrenaline2_C* ABuff_Adrenaline2_C::GetDefaultObj()
{
	static class ABuff_Adrenaline2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Adrenaline2_C*>(ABuff_Adrenaline2_C::StaticClass()->DefaultObject);

	return Default;
}

}


