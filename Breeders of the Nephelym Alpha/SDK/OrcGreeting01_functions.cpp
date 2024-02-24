#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcGreeting01.OrcGreeting01_C
// (None)

class UClass* UOrcGreeting01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcGreeting01_C");

	return Clss;
}


// OrcGreeting01_C OrcGreeting01.Default__OrcGreeting01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcGreeting01_C* UOrcGreeting01_C::GetDefaultObj()
{
	static class UOrcGreeting01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcGreeting01_C*>(UOrcGreeting01_C::StaticClass()->DefaultObject);

	return Default;
}

}


