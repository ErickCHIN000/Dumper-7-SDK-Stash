#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BrokenLeg.GE_BrokenLeg_C
// (None)

class UClass* UGE_BrokenLeg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BrokenLeg_C");

	return Clss;
}


// GE_BrokenLeg_C GE_BrokenLeg.Default__GE_BrokenLeg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BrokenLeg_C* UGE_BrokenLeg_C::GetDefaultObj()
{
	static class UGE_BrokenLeg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BrokenLeg_C*>(UGE_BrokenLeg_C::StaticClass()->DefaultObject);

	return Default;
}

}


