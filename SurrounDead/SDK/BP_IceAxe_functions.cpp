#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IceAxe.BP_IceAxe_C
// (Actor)

class UClass* ABP_IceAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IceAxe_C");

	return Clss;
}


// BP_IceAxe_C BP_IceAxe.Default__BP_IceAxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IceAxe_C* ABP_IceAxe_C::GetDefaultObj()
{
	static class ABP_IceAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IceAxe_C*>(ABP_IceAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


