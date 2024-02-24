#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baton_Fire1.Baton_Fire1_C
// (Actor)

class UClass* ABaton_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baton_Fire1_C");

	return Clss;
}


// Baton_Fire1_C Baton_Fire1.Default__Baton_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaton_Fire1_C* ABaton_Fire1_C::GetDefaultObj()
{
	static class ABaton_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaton_Fire1_C*>(ABaton_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


