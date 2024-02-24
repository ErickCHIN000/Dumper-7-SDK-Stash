#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PaintRoller.BP_PaintRoller_C
// (Actor)

class UClass* ABP_PaintRoller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PaintRoller_C");

	return Clss;
}


// BP_PaintRoller_C BP_PaintRoller.Default__BP_PaintRoller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PaintRoller_C* ABP_PaintRoller_C::GetDefaultObj()
{
	static class ABP_PaintRoller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PaintRoller_C*>(ABP_PaintRoller_C::StaticClass()->DefaultObject);

	return Default;
}

}


