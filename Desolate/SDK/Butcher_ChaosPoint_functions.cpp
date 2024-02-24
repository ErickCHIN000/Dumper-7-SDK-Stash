#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butcher_ChaosPoint.Butcher_ChaosPoint_C
// (Actor)

class UClass* AButcher_ChaosPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butcher_ChaosPoint_C");

	return Clss;
}


// Butcher_ChaosPoint_C Butcher_ChaosPoint.Default__Butcher_ChaosPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcher_ChaosPoint_C* AButcher_ChaosPoint_C::GetDefaultObj()
{
	static class AButcher_ChaosPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcher_ChaosPoint_C*>(AButcher_ChaosPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


