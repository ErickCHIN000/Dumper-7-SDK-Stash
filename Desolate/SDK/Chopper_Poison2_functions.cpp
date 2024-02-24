#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chopper_Poison2.Chopper_Poison2_C
// (Actor)

class UClass* AChopper_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chopper_Poison2_C");

	return Clss;
}


// Chopper_Poison2_C Chopper_Poison2.Default__Chopper_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChopper_Poison2_C* AChopper_Poison2_C::GetDefaultObj()
{
	static class AChopper_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChopper_Poison2_C*>(AChopper_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


