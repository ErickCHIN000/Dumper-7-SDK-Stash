#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ControlledMove_Global_GroundSlam_High.ControlledMove_Global_GroundSlam_High_C
// (None)

class UClass* UControlledMove_Global_GroundSlam_High_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlledMove_Global_GroundSlam_High_C");

	return Clss;
}


// ControlledMove_Global_GroundSlam_High_C ControlledMove_Global_GroundSlam_High.Default__ControlledMove_Global_GroundSlam_High_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControlledMove_Global_GroundSlam_High_C* UControlledMove_Global_GroundSlam_High_C::GetDefaultObj()
{
	static class UControlledMove_Global_GroundSlam_High_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlledMove_Global_GroundSlam_High_C*>(UControlledMove_Global_GroundSlam_High_C::StaticClass()->DefaultObject);

	return Default;
}

}


