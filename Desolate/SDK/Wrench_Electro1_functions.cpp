#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wrench_Electro1.Wrench_Electro1_C
// (Actor)

class UClass* AWrench_Electro1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wrench_Electro1_C");

	return Clss;
}


// Wrench_Electro1_C Wrench_Electro1.Default__Wrench_Electro1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWrench_Electro1_C* AWrench_Electro1_C::GetDefaultObj()
{
	static class AWrench_Electro1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWrench_Electro1_C*>(AWrench_Electro1_C::StaticClass()->DefaultObject);

	return Default;
}

}


