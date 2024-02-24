#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kama_Electro3.Kama_Electro3_C
// (Actor)

class UClass* AKama_Electro3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kama_Electro3_C");

	return Clss;
}


// Kama_Electro3_C Kama_Electro3.Default__Kama_Electro3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKama_Electro3_C* AKama_Electro3_C::GetDefaultObj()
{
	static class AKama_Electro3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKama_Electro3_C*>(AKama_Electro3_C::StaticClass()->DefaultObject);

	return Default;
}

}


