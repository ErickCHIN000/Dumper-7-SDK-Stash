#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BakedBeans.BP_BakedBeans_C
// (Actor)

class UClass* ABP_BakedBeans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BakedBeans_C");

	return Clss;
}


// BP_BakedBeans_C BP_BakedBeans.Default__BP_BakedBeans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BakedBeans_C* ABP_BakedBeans_C::GetDefaultObj()
{
	static class ABP_BakedBeans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BakedBeans_C*>(ABP_BakedBeans_C::StaticClass()->DefaultObject);

	return Default;
}

}


