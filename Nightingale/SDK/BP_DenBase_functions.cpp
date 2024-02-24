#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DenBase.BP_DenBase_C
// (Actor)

class UClass* ABP_DenBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DenBase_C");

	return Clss;
}


// BP_DenBase_C BP_DenBase.Default__BP_DenBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DenBase_C* ABP_DenBase_C::GetDefaultObj()
{
	static class ABP_DenBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DenBase_C*>(ABP_DenBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


