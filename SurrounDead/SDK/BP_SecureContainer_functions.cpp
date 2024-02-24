#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SecureContainer.BP_SecureContainer_C
// (Actor)

class UClass* ABP_SecureContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SecureContainer_C");

	return Clss;
}


// BP_SecureContainer_C BP_SecureContainer.Default__BP_SecureContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SecureContainer_C* ABP_SecureContainer_C::GetDefaultObj()
{
	static class ABP_SecureContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SecureContainer_C*>(ABP_SecureContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


