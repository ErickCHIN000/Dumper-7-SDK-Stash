#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcFixOwnGate.OrcFixOwnGate_C
// (None)

class UClass* UOrcFixOwnGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcFixOwnGate_C");

	return Clss;
}


// OrcFixOwnGate_C OrcFixOwnGate.Default__OrcFixOwnGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcFixOwnGate_C* UOrcFixOwnGate_C::GetDefaultObj()
{
	static class UOrcFixOwnGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcFixOwnGate_C*>(UOrcFixOwnGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


