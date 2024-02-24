#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcTribeSucks.OrcTribeSucks_C
// (None)

class UClass* UOrcTribeSucks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcTribeSucks_C");

	return Clss;
}


// OrcTribeSucks_C OrcTribeSucks.Default__OrcTribeSucks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcTribeSucks_C* UOrcTribeSucks_C::GetDefaultObj()
{
	static class UOrcTribeSucks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcTribeSucks_C*>(UOrcTribeSucks_C::StaticClass()->DefaultObject);

	return Default;
}

}


