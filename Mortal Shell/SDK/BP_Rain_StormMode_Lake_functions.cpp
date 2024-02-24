#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rain_StormMode_Lake.BP_Rain_StormMode_Lake_C
// (Actor)

class UClass* ABP_Rain_StormMode_Lake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rain_StormMode_Lake_C");

	return Clss;
}


// BP_Rain_StormMode_Lake_C BP_Rain_StormMode_Lake.Default__BP_Rain_StormMode_Lake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rain_StormMode_Lake_C* ABP_Rain_StormMode_Lake_C::GetDefaultObj()
{
	static class ABP_Rain_StormMode_Lake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rain_StormMode_Lake_C*>(ABP_Rain_StormMode_Lake_C::StaticClass()->DefaultObject);

	return Default;
}

}


