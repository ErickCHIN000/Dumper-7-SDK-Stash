#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoT_Toxic2.GE_DoT_Toxic2_C
// (None)

class UClass* UGE_DoT_Toxic2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoT_Toxic2_C");

	return Clss;
}


// GE_DoT_Toxic2_C GE_DoT_Toxic2.Default__GE_DoT_Toxic2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoT_Toxic2_C* UGE_DoT_Toxic2_C::GetDefaultObj()
{
	static class UGE_DoT_Toxic2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoT_Toxic2_C*>(UGE_DoT_Toxic2_C::StaticClass()->DefaultObject);

	return Default;
}

}


