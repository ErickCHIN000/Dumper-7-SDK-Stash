#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemBook_Tutorial.BP_ItemBook_Tutorial_C
// (Actor)

class UClass* ABP_ItemBook_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemBook_Tutorial_C");

	return Clss;
}


// BP_ItemBook_Tutorial_C BP_ItemBook_Tutorial.Default__BP_ItemBook_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemBook_Tutorial_C* ABP_ItemBook_Tutorial_C::GetDefaultObj()
{
	static class ABP_ItemBook_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemBook_Tutorial_C*>(ABP_ItemBook_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


