#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OtherClass.BP_OtherClass_C
// (Actor)

class UClass* ABP_OtherClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OtherClass_C");

	return Clss;
}


// BP_OtherClass_C BP_OtherClass.Default__BP_OtherClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OtherClass_C* ABP_OtherClass_C::GetDefaultObj()
{
	static class ABP_OtherClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OtherClass_C*>(ABP_OtherClass_C::StaticClass()->DefaultObject);

	return Default;
}

}


