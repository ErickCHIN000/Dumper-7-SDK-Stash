#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_DebugLoadout_Default60.EEC_DebugLoadout_Default60_C
// (None)

class UClass* UEEC_DebugLoadout_Default60_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_DebugLoadout_Default60_C");

	return Clss;
}


// EEC_DebugLoadout_Default60_C EEC_DebugLoadout_Default60.Default__EEC_DebugLoadout_Default60_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_DebugLoadout_Default60_C* UEEC_DebugLoadout_Default60_C::GetDefaultObj()
{
	static class UEEC_DebugLoadout_Default60_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_DebugLoadout_Default60_C*>(UEEC_DebugLoadout_Default60_C::StaticClass()->DefaultObject);

	return Default;
}

}


