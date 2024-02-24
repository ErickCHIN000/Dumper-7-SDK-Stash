#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireSemenNM_R.AyrshireSemenNM_R_C
// (None)

class UClass* UAyrshireSemenNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireSemenNM_R_C");

	return Clss;
}


// AyrshireSemenNM_R_C AyrshireSemenNM_R.Default__AyrshireSemenNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireSemenNM_R_C* UAyrshireSemenNM_R_C::GetDefaultObj()
{
	static class UAyrshireSemenNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireSemenNM_R_C*>(UAyrshireSemenNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


