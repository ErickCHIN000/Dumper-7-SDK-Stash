#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_KotC_25.Passive_KotC_25_C
// (None)

class UClass* UPassive_KotC_25_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_KotC_25_C");

	return Clss;
}


// Passive_KotC_25_C Passive_KotC_25.Default__Passive_KotC_25_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_KotC_25_C* UPassive_KotC_25_C::GetDefaultObj()
{
	static class UPassive_KotC_25_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_KotC_25_C*>(UPassive_KotC_25_C::StaticClass()->DefaultObject);

	return Default;
}

}


