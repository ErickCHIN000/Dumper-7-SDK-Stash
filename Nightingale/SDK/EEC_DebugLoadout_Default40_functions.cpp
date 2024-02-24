#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_DebugLoadout_Default40.EEC_DebugLoadout_Default40_C
// (None)

class UClass* UEEC_DebugLoadout_Default40_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_DebugLoadout_Default40_C");

	return Clss;
}


// EEC_DebugLoadout_Default40_C EEC_DebugLoadout_Default40.Default__EEC_DebugLoadout_Default40_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_DebugLoadout_Default40_C* UEEC_DebugLoadout_Default40_C::GetDefaultObj()
{
	static class UEEC_DebugLoadout_Default40_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_DebugLoadout_Default40_C*>(UEEC_DebugLoadout_Default40_C::StaticClass()->DefaultObject);

	return Default;
}

}


