#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BluePlaidShirt.BP_BluePlaidShirt_C
// (Actor)

class UClass* ABP_BluePlaidShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BluePlaidShirt_C");

	return Clss;
}


// BP_BluePlaidShirt_C BP_BluePlaidShirt.Default__BP_BluePlaidShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BluePlaidShirt_C* ABP_BluePlaidShirt_C::GetDefaultObj()
{
	static class ABP_BluePlaidShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BluePlaidShirt_C*>(ABP_BluePlaidShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


