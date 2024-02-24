#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cloth.BP_Cloth_C
// (Actor)

class UClass* ABP_Cloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cloth_C");

	return Clss;
}


// BP_Cloth_C BP_Cloth.Default__BP_Cloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cloth_C* ABP_Cloth_C::GetDefaultObj()
{
	static class ABP_Cloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cloth_C*>(ABP_Cloth_C::StaticClass()->DefaultObject);

	return Default;
}

}


