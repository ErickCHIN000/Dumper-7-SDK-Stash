#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AHitReact_Shared_Frozen.AHitReact_Shared_Frozen_C
// (None)

class UClass* UAHitReact_Shared_Frozen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AHitReact_Shared_Frozen_C");

	return Clss;
}


// AHitReact_Shared_Frozen_C AHitReact_Shared_Frozen.Default__AHitReact_Shared_Frozen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAHitReact_Shared_Frozen_C* UAHitReact_Shared_Frozen_C::GetDefaultObj()
{
	static class UAHitReact_Shared_Frozen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAHitReact_Shared_Frozen_C*>(UAHitReact_Shared_Frozen_C::StaticClass()->DefaultObject);

	return Default;
}

}


