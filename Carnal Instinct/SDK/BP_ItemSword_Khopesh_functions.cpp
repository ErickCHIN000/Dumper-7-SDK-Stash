#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemSword_Khopesh.BP_ItemSword_Khopesh_C
// (Actor)

class UClass* ABP_ItemSword_Khopesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemSword_Khopesh_C");

	return Clss;
}


// BP_ItemSword_Khopesh_C BP_ItemSword_Khopesh.Default__BP_ItemSword_Khopesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemSword_Khopesh_C* ABP_ItemSword_Khopesh_C::GetDefaultObj()
{
	static class ABP_ItemSword_Khopesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemSword_Khopesh_C*>(ABP_ItemSword_Khopesh_C::StaticClass()->DefaultObject);

	return Default;
}

}


