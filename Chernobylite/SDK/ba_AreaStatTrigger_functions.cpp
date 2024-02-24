#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_AreaStatTrigger.ba_AreaStatTrigger_C
// (Actor)

class UClass* Aba_AreaStatTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_AreaStatTrigger_C");

	return Clss;
}


// ba_AreaStatTrigger_C ba_AreaStatTrigger.Default__ba_AreaStatTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_AreaStatTrigger_C* Aba_AreaStatTrigger_C::GetDefaultObj()
{
	static class Aba_AreaStatTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_AreaStatTrigger_C*>(Aba_AreaStatTrigger_C::StaticClass()->DefaultObject);

	return Default;
}

}


