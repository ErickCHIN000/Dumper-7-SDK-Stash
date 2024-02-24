#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Homerun_Poison2.Homerun_Poison2_C
// (Actor)

class UClass* AHomerun_Poison2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Homerun_Poison2_C");

	return Clss;
}


// Homerun_Poison2_C Homerun_Poison2.Default__Homerun_Poison2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomerun_Poison2_C* AHomerun_Poison2_C::GetDefaultObj()
{
	static class AHomerun_Poison2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomerun_Poison2_C*>(AHomerun_Poison2_C::StaticClass()->DefaultObject);

	return Default;
}

}


