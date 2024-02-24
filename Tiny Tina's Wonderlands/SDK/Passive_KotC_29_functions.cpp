#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_KotC_29.Passive_KotC_29_C
// (None)

class UClass* UPassive_KotC_29_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_KotC_29_C");

	return Clss;
}


// Passive_KotC_29_C Passive_KotC_29.Default__Passive_KotC_29_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_KotC_29_C* UPassive_KotC_29_C::GetDefaultObj()
{
	static class UPassive_KotC_29_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_KotC_29_C*>(UPassive_KotC_29_C::StaticClass()->DefaultObject);

	return Default;
}

}


