#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Crop_Plot_Workshop.BP_Crop_Plot_Workshop_C
// (Actor)

class UClass* ABP_Crop_Plot_Workshop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Crop_Plot_Workshop_C");

	return Clss;
}


// BP_Crop_Plot_Workshop_C BP_Crop_Plot_Workshop.Default__BP_Crop_Plot_Workshop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Crop_Plot_Workshop_C* ABP_Crop_Plot_Workshop_C::GetDefaultObj()
{
	static class ABP_Crop_Plot_Workshop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Crop_Plot_Workshop_C*>(ABP_Crop_Plot_Workshop_C::StaticClass()->DefaultObject);

	return Default;
}

}


