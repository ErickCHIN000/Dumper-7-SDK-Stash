#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ACond_KotC_AS4_SummonHammer.ACond_KotC_AS4_SummonHammer_C
// (None)

class UClass* UACond_KotC_AS4_SummonHammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ACond_KotC_AS4_SummonHammer_C");

	return Clss;
}


// ACond_KotC_AS4_SummonHammer_C ACond_KotC_AS4_SummonHammer.Default__ACond_KotC_AS4_SummonHammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UACond_KotC_AS4_SummonHammer_C* UACond_KotC_AS4_SummonHammer_C::GetDefaultObj()
{
	static class UACond_KotC_AS4_SummonHammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UACond_KotC_AS4_SummonHammer_C*>(UACond_KotC_AS4_SummonHammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


