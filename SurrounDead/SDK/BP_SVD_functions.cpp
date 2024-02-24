#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SVD.BP_SVD_C
// (Actor)

class UClass* ABP_SVD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SVD_C");

	return Clss;
}


// BP_SVD_C BP_SVD.Default__BP_SVD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SVD_C* ABP_SVD_C::GetDefaultObj()
{
	static class ABP_SVD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SVD_C*>(ABP_SVD_C::StaticClass()->DefaultObject);

	return Default;
}

}


