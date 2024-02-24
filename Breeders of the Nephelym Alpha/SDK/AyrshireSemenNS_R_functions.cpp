#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireSemenNS_R.AyrshireSemenNS_R_C
// (None)

class UClass* UAyrshireSemenNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireSemenNS_R_C");

	return Clss;
}


// AyrshireSemenNS_R_C AyrshireSemenNS_R.Default__AyrshireSemenNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireSemenNS_R_C* UAyrshireSemenNS_R_C::GetDefaultObj()
{
	static class UAyrshireSemenNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireSemenNS_R_C*>(UAyrshireSemenNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


