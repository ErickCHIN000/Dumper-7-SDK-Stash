#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baton_Bleed1.Baton_Bleed1_C
// (Actor)

class UClass* ABaton_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baton_Bleed1_C");

	return Clss;
}


// Baton_Bleed1_C Baton_Bleed1.Default__Baton_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaton_Bleed1_C* ABaton_Bleed1_C::GetDefaultObj()
{
	static class ABaton_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaton_Bleed1_C*>(ABaton_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


