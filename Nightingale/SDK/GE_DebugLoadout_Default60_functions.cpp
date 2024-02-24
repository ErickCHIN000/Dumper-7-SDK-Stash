#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DebugLoadout_Default60.GE_DebugLoadout_Default60_C
// (None)

class UClass* UGE_DebugLoadout_Default60_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DebugLoadout_Default60_C");

	return Clss;
}


// GE_DebugLoadout_Default60_C GE_DebugLoadout_Default60.Default__GE_DebugLoadout_Default60_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DebugLoadout_Default60_C* UGE_DebugLoadout_Default60_C::GetDefaultObj()
{
	static class UGE_DebugLoadout_Default60_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DebugLoadout_Default60_C*>(UGE_DebugLoadout_Default60_C::StaticClass()->DefaultObject);

	return Default;
}

}


