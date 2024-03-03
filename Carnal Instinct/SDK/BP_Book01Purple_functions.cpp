#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Book01Purple.BP_Book01Purple_C
// (Actor)

class UClass* ABP_Book01Purple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Book01Purple_C");

	return Clss;
}


// BP_Book01Purple_C BP_Book01Purple.Default__BP_Book01Purple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Book01Purple_C* ABP_Book01Purple_C::GetDefaultObj()
{
	static class ABP_Book01Purple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Book01Purple_C*>(ABP_Book01Purple_C::StaticClass()->DefaultObject);

	return Default;
}

}


