#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcDefault01.OrcDefault01_C
// (None)

class UClass* UOrcDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcDefault01_C");

	return Clss;
}


// OrcDefault01_C OrcDefault01.Default__OrcDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcDefault01_C* UOrcDefault01_C::GetDefaultObj()
{
	static class UOrcDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcDefault01_C*>(UOrcDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


