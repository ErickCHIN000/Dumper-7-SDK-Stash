#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Aspirin.Aspirin_C
// (Actor)

class UClass* AAspirin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Aspirin_C");

	return Clss;
}


// Aspirin_C Aspirin.Default__Aspirin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAspirin_C* AAspirin_C::GetDefaultObj()
{
	static class AAspirin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAspirin_C*>(AAspirin_C::StaticClass()->DefaultObject);

	return Default;
}

}


