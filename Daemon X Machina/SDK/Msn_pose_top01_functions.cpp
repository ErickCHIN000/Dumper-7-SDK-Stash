#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_pose_top01.Msn_pose_top01_C
// (None)

class UClass* UMsn_pose_top01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_pose_top01_C");

	return Clss;
}


// Msn_pose_top01_C Msn_pose_top01.Default__Msn_pose_top01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_pose_top01_C* UMsn_pose_top01_C::GetDefaultObj()
{
	static class UMsn_pose_top01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_pose_top01_C*>(UMsn_pose_top01_C::StaticClass()->DefaultObject);

	return Default;
}

}

