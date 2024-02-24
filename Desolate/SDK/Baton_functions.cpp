#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baton.Baton_C
// (Actor)

class UClass* ABaton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baton_C");

	return Clss;
}


// Baton_C Baton.Default__Baton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaton_C* ABaton_C::GetDefaultObj()
{
	static class ABaton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaton_C*>(ABaton_C::StaticClass()->DefaultObject);

	return Default;
}

}


