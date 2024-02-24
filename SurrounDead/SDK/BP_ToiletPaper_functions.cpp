#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ToiletPaper.BP_ToiletPaper_C
// (Actor)

class UClass* ABP_ToiletPaper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ToiletPaper_C");

	return Clss;
}


// BP_ToiletPaper_C BP_ToiletPaper.Default__BP_ToiletPaper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ToiletPaper_C* ABP_ToiletPaper_C::GetDefaultObj()
{
	static class ABP_ToiletPaper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ToiletPaper_C*>(ABP_ToiletPaper_C::StaticClass()->DefaultObject);

	return Default;
}

}


