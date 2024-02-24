#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_Adrenaline1.Buff_Adrenaline1_C
// (Actor)

class UClass* ABuff_Adrenaline1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_Adrenaline1_C");

	return Clss;
}


// Buff_Adrenaline1_C Buff_Adrenaline1.Default__Buff_Adrenaline1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_Adrenaline1_C* ABuff_Adrenaline1_C::GetDefaultObj()
{
	static class ABuff_Adrenaline1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_Adrenaline1_C*>(ABuff_Adrenaline1_C::StaticClass()->DefaultObject);

	return Default;
}

}


