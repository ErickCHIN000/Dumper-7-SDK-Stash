#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Book01LBrown.BP_Book01LBrown_C
// (Actor)

class UClass* ABP_Book01LBrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Book01LBrown_C");

	return Clss;
}


// BP_Book01LBrown_C BP_Book01LBrown.Default__BP_Book01LBrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Book01LBrown_C* ABP_Book01LBrown_C::GetDefaultObj()
{
	static class ABP_Book01LBrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Book01LBrown_C*>(ABP_Book01LBrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


