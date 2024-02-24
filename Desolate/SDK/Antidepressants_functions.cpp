#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Antidepressants.Antidepressants_C
// (Actor)

class UClass* AAntidepressants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Antidepressants_C");

	return Clss;
}


// Antidepressants_C Antidepressants.Default__Antidepressants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAntidepressants_C* AAntidepressants_C::GetDefaultObj()
{
	static class AAntidepressants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAntidepressants_C*>(AAntidepressants_C::StaticClass()->DefaultObject);

	return Default;
}

}


