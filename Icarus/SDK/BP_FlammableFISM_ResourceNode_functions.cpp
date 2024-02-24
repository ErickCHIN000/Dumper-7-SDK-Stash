#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableFISM_ResourceNode.BP_FlammableFISM_ResourceNode_C
// (None)

class UClass* UBP_FlammableFISM_ResourceNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableFISM_ResourceNode_C");

	return Clss;
}


// BP_FlammableFISM_ResourceNode_C BP_FlammableFISM_ResourceNode.Default__BP_FlammableFISM_ResourceNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FlammableFISM_ResourceNode_C* UBP_FlammableFISM_ResourceNode_C::GetDefaultObj()
{
	static class UBP_FlammableFISM_ResourceNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FlammableFISM_ResourceNode_C*>(UBP_FlammableFISM_ResourceNode_C::StaticClass()->DefaultObject);

	return Default;
}

}


