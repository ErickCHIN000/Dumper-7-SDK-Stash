#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AyrshireSemenNN_R.AyrshireSemenNN_R_C
// (None)

class UClass* UAyrshireSemenNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AyrshireSemenNN_R_C");

	return Clss;
}


// AyrshireSemenNN_R_C AyrshireSemenNN_R.Default__AyrshireSemenNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAyrshireSemenNN_R_C* UAyrshireSemenNN_R_C::GetDefaultObj()
{
	static class UAyrshireSemenNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAyrshireSemenNN_R_C*>(UAyrshireSemenNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


