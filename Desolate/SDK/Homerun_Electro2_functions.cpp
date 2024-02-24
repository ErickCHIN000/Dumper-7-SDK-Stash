#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Homerun_Electro2.Homerun_Electro2_C
// (Actor)

class UClass* AHomerun_Electro2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Homerun_Electro2_C");

	return Clss;
}


// Homerun_Electro2_C Homerun_Electro2.Default__Homerun_Electro2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomerun_Electro2_C* AHomerun_Electro2_C::GetDefaultObj()
{
	static class AHomerun_Electro2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomerun_Electro2_C*>(AHomerun_Electro2_C::StaticClass()->DefaultObject);

	return Default;
}

}


