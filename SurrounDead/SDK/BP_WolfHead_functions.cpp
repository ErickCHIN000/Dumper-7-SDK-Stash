#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WolfHead.BP_WolfHead_C
// (Actor)

class UClass* ABP_WolfHead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WolfHead_C");

	return Clss;
}


// BP_WolfHead_C BP_WolfHead.Default__BP_WolfHead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WolfHead_C* ABP_WolfHead_C::GetDefaultObj()
{
	static class ABP_WolfHead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WolfHead_C*>(ABP_WolfHead_C::StaticClass()->DefaultObject);

	return Default;
}

}


