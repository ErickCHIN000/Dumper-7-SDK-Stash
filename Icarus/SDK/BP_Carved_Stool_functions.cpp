#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Carved_Stool.BP_Carved_Stool_C
// (Actor)

class UClass* ABP_Carved_Stool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Carved_Stool_C");

	return Clss;
}


// BP_Carved_Stool_C BP_Carved_Stool.Default__BP_Carved_Stool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Carved_Stool_C* ABP_Carved_Stool_C::GetDefaultObj()
{
	static class ABP_Carved_Stool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Carved_Stool_C*>(ABP_Carved_Stool_C::StaticClass()->DefaultObject);

	return Default;
}

}


