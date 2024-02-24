#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_KotC_30.Passive_KotC_30_C
// (None)

class UClass* UPassive_KotC_30_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_KotC_30_C");

	return Clss;
}


// Passive_KotC_30_C Passive_KotC_30.Default__Passive_KotC_30_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_KotC_30_C* UPassive_KotC_30_C::GetDefaultObj()
{
	static class UPassive_KotC_30_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_KotC_30_C*>(UPassive_KotC_30_C::StaticClass()->DefaultObject);

	return Default;
}

}


