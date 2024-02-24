#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AutoInjector.BP_AutoInjector_C
// (Actor)

class UClass* ABP_AutoInjector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AutoInjector_C");

	return Clss;
}


// BP_AutoInjector_C BP_AutoInjector.Default__BP_AutoInjector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AutoInjector_C* ABP_AutoInjector_C::GetDefaultObj()
{
	static class ABP_AutoInjector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AutoInjector_C*>(ABP_AutoInjector_C::StaticClass()->DefaultObject);

	return Default;
}

}


