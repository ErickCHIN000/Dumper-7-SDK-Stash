#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Antibiotics.Antibiotics_C
// (Actor)

class UClass* AAntibiotics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Antibiotics_C");

	return Clss;
}


// Antibiotics_C Antibiotics.Default__Antibiotics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAntibiotics_C* AAntibiotics_C::GetDefaultObj()
{
	static class AAntibiotics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAntibiotics_C*>(AAntibiotics_C::StaticClass()->DefaultObject);

	return Default;
}

}


