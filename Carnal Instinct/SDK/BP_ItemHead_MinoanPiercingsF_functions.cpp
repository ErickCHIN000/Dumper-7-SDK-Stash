#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_MinoanPiercingsF.BP_ItemHead_MinoanPiercingsF_C
// (Actor)

class UClass* ABP_ItemHead_MinoanPiercingsF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_MinoanPiercingsF_C");

	return Clss;
}


// BP_ItemHead_MinoanPiercingsF_C BP_ItemHead_MinoanPiercingsF.Default__BP_ItemHead_MinoanPiercingsF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_MinoanPiercingsF_C* ABP_ItemHead_MinoanPiercingsF_C::GetDefaultObj()
{
	static class ABP_ItemHead_MinoanPiercingsF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_MinoanPiercingsF_C*>(ABP_ItemHead_MinoanPiercingsF_C::StaticClass()->DefaultObject);

	return Default;
}

}


