#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_CurseOfMal.BP_CE_CurseOfMal_C
// (None)

class UClass* UBP_CE_CurseOfMal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_CurseOfMal_C");

	return Clss;
}


// BP_CE_CurseOfMal_C BP_CE_CurseOfMal.Default__BP_CE_CurseOfMal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_CurseOfMal_C* UBP_CE_CurseOfMal_C::GetDefaultObj()
{
	static class UBP_CE_CurseOfMal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_CurseOfMal_C*>(UBP_CE_CurseOfMal_C::StaticClass()->DefaultObject);

	return Default;
}

}


