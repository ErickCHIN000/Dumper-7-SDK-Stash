#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kukri_Electro3.Kukri_Electro3_C
// (Actor)

class UClass* AKukri_Electro3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kukri_Electro3_C");

	return Clss;
}


// Kukri_Electro3_C Kukri_Electro3.Default__Kukri_Electro3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKukri_Electro3_C* AKukri_Electro3_C::GetDefaultObj()
{
	static class AKukri_Electro3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKukri_Electro3_C*>(AKukri_Electro3_C::StaticClass()->DefaultObject);

	return Default;
}

}


