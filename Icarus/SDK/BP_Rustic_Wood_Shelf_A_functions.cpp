#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rustic_Wood_Shelf_A.BP_Rustic_Wood_Shelf_A_C
// (Actor)

class UClass* ABP_Rustic_Wood_Shelf_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rustic_Wood_Shelf_A_C");

	return Clss;
}


// BP_Rustic_Wood_Shelf_A_C BP_Rustic_Wood_Shelf_A.Default__BP_Rustic_Wood_Shelf_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rustic_Wood_Shelf_A_C* ABP_Rustic_Wood_Shelf_A_C::GetDefaultObj()
{
	static class ABP_Rustic_Wood_Shelf_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rustic_Wood_Shelf_A_C*>(ABP_Rustic_Wood_Shelf_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


