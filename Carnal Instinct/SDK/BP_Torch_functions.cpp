#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Torch.BP_Torch_C
// (Actor)

class UClass* ABP_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Torch_C");

	return Clss;
}


// BP_Torch_C BP_Torch.Default__BP_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Torch_C* ABP_Torch_C::GetDefaultObj()
{
	static class ABP_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Torch_C*>(ABP_Torch_C::StaticClass()->DefaultObject);

	return Default;
}

}


