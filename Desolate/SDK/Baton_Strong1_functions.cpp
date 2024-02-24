#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Baton_Strong1.Baton_Strong1_C
// (Actor)

class UClass* ABaton_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Baton_Strong1_C");

	return Clss;
}


// Baton_Strong1_C Baton_Strong1.Default__Baton_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaton_Strong1_C* ABaton_Strong1_C::GetDefaultObj()
{
	static class ABaton_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaton_Strong1_C*>(ABaton_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


