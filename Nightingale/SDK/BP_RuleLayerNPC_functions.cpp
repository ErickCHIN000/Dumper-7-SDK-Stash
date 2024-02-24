#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RuleLayerNPC.BP_RuleLayerNPC_C
// (None)

class UClass* UBP_RuleLayerNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RuleLayerNPC_C");

	return Clss;
}


// BP_RuleLayerNPC_C BP_RuleLayerNPC.Default__BP_RuleLayerNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RuleLayerNPC_C* UBP_RuleLayerNPC_C::GetDefaultObj()
{
	static class UBP_RuleLayerNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RuleLayerNPC_C*>(UBP_RuleLayerNPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


