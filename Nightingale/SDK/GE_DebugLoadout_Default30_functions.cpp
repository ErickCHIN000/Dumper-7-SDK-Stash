#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DebugLoadout_Default30.GE_DebugLoadout_Default30_C
// (None)

class UClass* UGE_DebugLoadout_Default30_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DebugLoadout_Default30_C");

	return Clss;
}


// GE_DebugLoadout_Default30_C GE_DebugLoadout_Default30.Default__GE_DebugLoadout_Default30_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DebugLoadout_Default30_C* UGE_DebugLoadout_Default30_C::GetDefaultObj()
{
	static class UGE_DebugLoadout_Default30_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DebugLoadout_Default30_C*>(UGE_DebugLoadout_Default30_C::StaticClass()->DefaultObject);

	return Default;
}

}


