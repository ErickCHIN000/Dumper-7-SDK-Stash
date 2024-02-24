#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butcher_Hand.Butcher_Hand_C
// (Actor)

class UClass* AButcher_Hand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butcher_Hand_C");

	return Clss;
}


// Butcher_Hand_C Butcher_Hand.Default__Butcher_Hand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcher_Hand_C* AButcher_Hand_C::GetDefaultObj()
{
	static class AButcher_Hand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcher_Hand_C*>(AButcher_Hand_C::StaticClass()->DefaultObject);

	return Default;
}

}


