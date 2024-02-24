#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baton_Poison1.Baton_Poison1_C
// (Actor)

class UClass* ABaton_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baton_Poison1_C");

	return Clss;
}


// Baton_Poison1_C Baton_Poison1.Default__Baton_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaton_Poison1_C* ABaton_Poison1_C::GetDefaultObj()
{
	static class ABaton_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaton_Poison1_C*>(ABaton_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}


