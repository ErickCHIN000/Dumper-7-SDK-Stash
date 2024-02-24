#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireSemenNL_R.AyrshireSemenNL_R_C
// (None)

class UClass* UAyrshireSemenNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireSemenNL_R_C");

	return Clss;
}


// AyrshireSemenNL_R_C AyrshireSemenNL_R.Default__AyrshireSemenNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireSemenNL_R_C* UAyrshireSemenNL_R_C::GetDefaultObj()
{
	static class UAyrshireSemenNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireSemenNL_R_C*>(UAyrshireSemenNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


