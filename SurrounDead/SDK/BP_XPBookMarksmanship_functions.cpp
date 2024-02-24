#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookMarksmanship.BP_XPBookMarksmanship_C
// (Actor)

class UClass* ABP_XPBookMarksmanship_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookMarksmanship_C");

	return Clss;
}


// BP_XPBookMarksmanship_C BP_XPBookMarksmanship.Default__BP_XPBookMarksmanship_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookMarksmanship_C* ABP_XPBookMarksmanship_C::GetDefaultObj()
{
	static class ABP_XPBookMarksmanship_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookMarksmanship_C*>(ABP_XPBookMarksmanship_C::StaticClass()->DefaultObject);

	return Default;
}

}


