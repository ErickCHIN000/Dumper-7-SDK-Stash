#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireSemenNT_R.AyrshireSemenNT_R_C
// (None)

class UClass* UAyrshireSemenNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireSemenNT_R_C");

	return Clss;
}


// AyrshireSemenNT_R_C AyrshireSemenNT_R.Default__AyrshireSemenNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireSemenNT_R_C* UAyrshireSemenNT_R_C::GetDefaultObj()
{
	static class UAyrshireSemenNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireSemenNT_R_C*>(UAyrshireSemenNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


