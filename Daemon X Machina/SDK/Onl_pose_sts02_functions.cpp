#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_pose_sts02.Onl_pose_sts02_C
// (None)

class UClass* UOnl_pose_sts02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_pose_sts02_C");

	return Clss;
}


// Onl_pose_sts02_C Onl_pose_sts02.Default__Onl_pose_sts02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_pose_sts02_C* UOnl_pose_sts02_C::GetDefaultObj()
{
	static class UOnl_pose_sts02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_pose_sts02_C*>(UOnl_pose_sts02_C::StaticClass()->DefaultObject);

	return Default;
}

}


