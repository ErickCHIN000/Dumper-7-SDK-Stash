#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Scroll.BP_Scroll_C
// (Actor)

class UClass* ABP_Scroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Scroll_C");

	return Clss;
}


// BP_Scroll_C BP_Scroll.Default__BP_Scroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Scroll_C* ABP_Scroll_C::GetDefaultObj()
{
	static class ABP_Scroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Scroll_C*>(ABP_Scroll_C::StaticClass()->DefaultObject);

	return Default;
}

}


