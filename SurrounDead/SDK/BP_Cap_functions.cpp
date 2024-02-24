#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cap.BP_Cap_C
// (Actor)

class UClass* ABP_Cap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cap_C");

	return Clss;
}


// BP_Cap_C BP_Cap.Default__BP_Cap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cap_C* ABP_Cap_C::GetDefaultObj()
{
	static class ABP_Cap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cap_C*>(ABP_Cap_C::StaticClass()->DefaultObject);

	return Default;
}

}


