#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_DeepOre.BP_ActionableBehaviour_Scanner_DeepOre_C
// (None)

class UClass* UBP_ActionableBehaviour_Scanner_DeepOre_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Scanner_DeepOre_C");

	return Clss;
}


// BP_ActionableBehaviour_Scanner_DeepOre_C BP_ActionableBehaviour_Scanner_DeepOre.Default__BP_ActionableBehaviour_Scanner_DeepOre_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Scanner_DeepOre_C* UBP_ActionableBehaviour_Scanner_DeepOre_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Scanner_DeepOre_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Scanner_DeepOre_C*>(UBP_ActionableBehaviour_Scanner_DeepOre_C::StaticClass()->DefaultObject);

	return Default;
}

}


