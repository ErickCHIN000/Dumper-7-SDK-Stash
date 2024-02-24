#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Floor_Diagonal_Curved.BP_Building_Floor_Diagonal_Curved_C
// (Actor)

class UClass* ABP_Building_Floor_Diagonal_Curved_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Floor_Diagonal_Curved_C");

	return Clss;
}


// BP_Building_Floor_Diagonal_Curved_C BP_Building_Floor_Diagonal_Curved.Default__BP_Building_Floor_Diagonal_Curved_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Floor_Diagonal_Curved_C* ABP_Building_Floor_Diagonal_Curved_C::GetDefaultObj()
{
	static class ABP_Building_Floor_Diagonal_Curved_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Floor_Diagonal_Curved_C*>(ABP_Building_Floor_Diagonal_Curved_C::StaticClass()->DefaultObject);

	return Default;
}

}


