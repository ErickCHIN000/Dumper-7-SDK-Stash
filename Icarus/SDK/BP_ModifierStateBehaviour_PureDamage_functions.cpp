#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ModifierStateBehaviour_PureDamage.BP_ModifierStateBehaviour_PureDamage_C
// (None)

class UClass* UBP_ModifierStateBehaviour_PureDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ModifierStateBehaviour_PureDamage_C");

	return Clss;
}


// BP_ModifierStateBehaviour_PureDamage_C BP_ModifierStateBehaviour_PureDamage.Default__BP_ModifierStateBehaviour_PureDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ModifierStateBehaviour_PureDamage_C* UBP_ModifierStateBehaviour_PureDamage_C::GetDefaultObj()
{
	static class UBP_ModifierStateBehaviour_PureDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ModifierStateBehaviour_PureDamage_C*>(UBP_ModifierStateBehaviour_PureDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


