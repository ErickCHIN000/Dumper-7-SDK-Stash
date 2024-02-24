#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OrangeShirt.BP_OrangeShirt_C
// (Actor)

class UClass* ABP_OrangeShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OrangeShirt_C");

	return Clss;
}


// BP_OrangeShirt_C BP_OrangeShirt.Default__BP_OrangeShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OrangeShirt_C* ABP_OrangeShirt_C::GetDefaultObj()
{
	static class ABP_OrangeShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OrangeShirt_C*>(ABP_OrangeShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


