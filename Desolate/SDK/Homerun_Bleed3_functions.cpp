#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Homerun_Bleed3.Homerun_Bleed3_C
// (Actor)

class UClass* AHomerun_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Homerun_Bleed3_C");

	return Clss;
}


// Homerun_Bleed3_C Homerun_Bleed3.Default__Homerun_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomerun_Bleed3_C* AHomerun_Bleed3_C::GetDefaultObj()
{
	static class AHomerun_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomerun_Bleed3_C*>(AHomerun_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}


