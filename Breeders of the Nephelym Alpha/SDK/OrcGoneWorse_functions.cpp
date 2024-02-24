#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcGoneWorse.OrcGoneWorse_C
// (None)

class UClass* UOrcGoneWorse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcGoneWorse_C");

	return Clss;
}


// OrcGoneWorse_C OrcGoneWorse.Default__OrcGoneWorse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcGoneWorse_C* UOrcGoneWorse_C::GetDefaultObj()
{
	static class UOrcGoneWorse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcGoneWorse_C*>(UOrcGoneWorse_C::StaticClass()->DefaultObject);

	return Default;
}

}


