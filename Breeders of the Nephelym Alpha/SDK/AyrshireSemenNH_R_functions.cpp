#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireSemenNH_R.AyrshireSemenNH_R_C
// (None)

class UClass* UAyrshireSemenNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireSemenNH_R_C");

	return Clss;
}


// AyrshireSemenNH_R_C AyrshireSemenNH_R.Default__AyrshireSemenNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireSemenNH_R_C* UAyrshireSemenNH_R_C::GetDefaultObj()
{
	static class UAyrshireSemenNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireSemenNH_R_C*>(UAyrshireSemenNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


