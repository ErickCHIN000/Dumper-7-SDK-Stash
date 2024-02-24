#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlueShirt.BP_BlueShirt_C
// (Actor)

class UClass* ABP_BlueShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlueShirt_C");

	return Clss;
}


// BP_BlueShirt_C BP_BlueShirt.Default__BP_BlueShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BlueShirt_C* ABP_BlueShirt_C::GetDefaultObj()
{
	static class ABP_BlueShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BlueShirt_C*>(ABP_BlueShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


