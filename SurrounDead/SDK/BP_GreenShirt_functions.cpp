#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GreenShirt.BP_GreenShirt_C
// (Actor)

class UClass* ABP_GreenShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GreenShirt_C");

	return Clss;
}


// BP_GreenShirt_C BP_GreenShirt.Default__BP_GreenShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GreenShirt_C* ABP_GreenShirt_C::GetDefaultObj()
{
	static class ABP_GreenShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GreenShirt_C*>(ABP_GreenShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


