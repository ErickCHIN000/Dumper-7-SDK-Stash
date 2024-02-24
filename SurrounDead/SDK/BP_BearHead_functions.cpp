#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BearHead.BP_BearHead_C
// (Actor)

class UClass* ABP_BearHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BearHead_C");

	return Clss;
}


// BP_BearHead_C BP_BearHead.Default__BP_BearHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BearHead_C* ABP_BearHead_C::GetDefaultObj()
{
	static class ABP_BearHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BearHead_C*>(ABP_BearHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


