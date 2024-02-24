#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BallisticBehaviour_DropshipFlare.BP_BallisticBehaviour_DropshipFlare_C
// (None)

class UClass* UBP_BallisticBehaviour_DropshipFlare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BallisticBehaviour_DropshipFlare_C");

	return Clss;
}


// BP_BallisticBehaviour_DropshipFlare_C BP_BallisticBehaviour_DropshipFlare.Default__BP_BallisticBehaviour_DropshipFlare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BallisticBehaviour_DropshipFlare_C* UBP_BallisticBehaviour_DropshipFlare_C::GetDefaultObj()
{
	static class UBP_BallisticBehaviour_DropshipFlare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BallisticBehaviour_DropshipFlare_C*>(UBP_BallisticBehaviour_DropshipFlare_C::StaticClass()->DefaultObject);

	return Default;
}

}


