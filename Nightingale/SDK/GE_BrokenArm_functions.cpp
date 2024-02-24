#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BrokenArm.GE_BrokenArm_C
// (None)

class UClass* UGE_BrokenArm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BrokenArm_C");

	return Clss;
}


// GE_BrokenArm_C GE_BrokenArm.Default__GE_BrokenArm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BrokenArm_C* UGE_BrokenArm_C::GetDefaultObj()
{
	static class UGE_BrokenArm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BrokenArm_C*>(UGE_BrokenArm_C::StaticClass()->DefaultObject);

	return Default;
}

}


