#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GrantClimbExits.GE_GrantClimbExits_C
// (None)

class UClass* UGE_GrantClimbExits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GrantClimbExits_C");

	return Clss;
}


// GE_GrantClimbExits_C GE_GrantClimbExits.Default__GE_GrantClimbExits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GrantClimbExits_C* UGE_GrantClimbExits_C::GetDefaultObj()
{
	static class UGE_GrantClimbExits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GrantClimbExits_C*>(UGE_GrantClimbExits_C::StaticClass()->DefaultObject);

	return Default;
}

}


