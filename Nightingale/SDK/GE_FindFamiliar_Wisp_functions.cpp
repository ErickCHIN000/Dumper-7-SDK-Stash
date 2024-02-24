#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FindFamiliar_Wisp.GE_FindFamiliar_Wisp_C
// (None)

class UClass* UGE_FindFamiliar_Wisp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FindFamiliar_Wisp_C");

	return Clss;
}


// GE_FindFamiliar_Wisp_C GE_FindFamiliar_Wisp.Default__GE_FindFamiliar_Wisp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FindFamiliar_Wisp_C* UGE_FindFamiliar_Wisp_C::GetDefaultObj()
{
	static class UGE_FindFamiliar_Wisp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FindFamiliar_Wisp_C*>(UGE_FindFamiliar_Wisp_C::StaticClass()->DefaultObject);

	return Default;
}

}


