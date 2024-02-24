#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mammoth_Trophy.BP_Mammoth_Trophy_C
// (Actor)

class UClass* ABP_Mammoth_Trophy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mammoth_Trophy_C");

	return Clss;
}


// BP_Mammoth_Trophy_C BP_Mammoth_Trophy.Default__BP_Mammoth_Trophy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mammoth_Trophy_C* ABP_Mammoth_Trophy_C::GetDefaultObj()
{
	static class ABP_Mammoth_Trophy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mammoth_Trophy_C*>(ABP_Mammoth_Trophy_C::StaticClass()->DefaultObject);

	return Default;
}

}


