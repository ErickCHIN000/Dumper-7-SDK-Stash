#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_pose_sts01.Onl_pose_sts01_C
// (None)

class UClass* UOnl_pose_sts01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_pose_sts01_C");

	return Clss;
}


// Onl_pose_sts01_C Onl_pose_sts01.Default__Onl_pose_sts01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_pose_sts01_C* UOnl_pose_sts01_C::GetDefaultObj()
{
	static class UOnl_pose_sts01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_pose_sts01_C*>(UOnl_pose_sts01_C::StaticClass()->DefaultObject);

	return Default;
}

}


