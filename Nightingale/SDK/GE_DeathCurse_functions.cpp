#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DeathCurse.GE_DeathCurse_C
// (None)

class UClass* UGE_DeathCurse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DeathCurse_C");

	return Clss;
}


// GE_DeathCurse_C GE_DeathCurse.Default__GE_DeathCurse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DeathCurse_C* UGE_DeathCurse_C::GetDefaultObj()
{
	static class UGE_DeathCurse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DeathCurse_C*>(UGE_DeathCurse_C::StaticClass()->DefaultObject);

	return Default;
}

}


