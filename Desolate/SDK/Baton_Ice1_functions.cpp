#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baton_Ice1.Baton_Ice1_C
// (Actor)

class UClass* ABaton_Ice1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baton_Ice1_C");

	return Clss;
}


// Baton_Ice1_C Baton_Ice1.Default__Baton_Ice1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaton_Ice1_C* ABaton_Ice1_C::GetDefaultObj()
{
	static class ABaton_Ice1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaton_Ice1_C*>(ABaton_Ice1_C::StaticClass()->DefaultObject);

	return Default;
}

}


