#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Wall_Diagonal_Curved_Stone.BP_Building_Wall_Diagonal_Curved_Stone_C
// (Actor)

class UClass* ABP_Building_Wall_Diagonal_Curved_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Wall_Diagonal_Curved_Stone_C");

	return Clss;
}


// BP_Building_Wall_Diagonal_Curved_Stone_C BP_Building_Wall_Diagonal_Curved_Stone.Default__BP_Building_Wall_Diagonal_Curved_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Wall_Diagonal_Curved_Stone_C* ABP_Building_Wall_Diagonal_Curved_Stone_C::GetDefaultObj()
{
	static class ABP_Building_Wall_Diagonal_Curved_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Wall_Diagonal_Curved_Stone_C*>(ABP_Building_Wall_Diagonal_Curved_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


