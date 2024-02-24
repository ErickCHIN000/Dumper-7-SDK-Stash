#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SetInitialRespitePoint.GE_SetInitialRespitePoint_C
// (None)

class UClass* UGE_SetInitialRespitePoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SetInitialRespitePoint_C");

	return Clss;
}


// GE_SetInitialRespitePoint_C GE_SetInitialRespitePoint.Default__GE_SetInitialRespitePoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SetInitialRespitePoint_C* UGE_SetInitialRespitePoint_C::GetDefaultObj()
{
	static class UGE_SetInitialRespitePoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SetInitialRespitePoint_C*>(UGE_SetInitialRespitePoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


