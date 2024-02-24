#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ModifierStateBehaviour_PoisonDamageScale.BP_ModifierStateBehaviour_PoisonDamageScale_C
// (None)

class UClass* UBP_ModifierStateBehaviour_PoisonDamageScale_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ModifierStateBehaviour_PoisonDamageScale_C");

	return Clss;
}


// BP_ModifierStateBehaviour_PoisonDamageScale_C BP_ModifierStateBehaviour_PoisonDamageScale.Default__BP_ModifierStateBehaviour_PoisonDamageScale_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ModifierStateBehaviour_PoisonDamageScale_C* UBP_ModifierStateBehaviour_PoisonDamageScale_C::GetDefaultObj()
{
	static class UBP_ModifierStateBehaviour_PoisonDamageScale_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ModifierStateBehaviour_PoisonDamageScale_C*>(UBP_ModifierStateBehaviour_PoisonDamageScale_C::StaticClass()->DefaultObject);

	return Default;
}

}


