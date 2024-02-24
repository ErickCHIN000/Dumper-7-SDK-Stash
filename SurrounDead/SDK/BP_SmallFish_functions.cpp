#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SmallFish.BP_SmallFish_C
// (Actor)

class UClass* ABP_SmallFish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SmallFish_C");

	return Clss;
}


// BP_SmallFish_C BP_SmallFish.Default__BP_SmallFish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SmallFish_C* ABP_SmallFish_C::GetDefaultObj()
{
	static class ABP_SmallFish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SmallFish_C*>(ABP_SmallFish_C::StaticClass()->DefaultObject);

	return Default;
}

}


