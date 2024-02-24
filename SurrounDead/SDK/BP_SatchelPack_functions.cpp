#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SatchelPack.BP_SatchelPack_C
// (Actor)

class UClass* ABP_SatchelPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SatchelPack_C");

	return Clss;
}


// BP_SatchelPack_C BP_SatchelPack.Default__BP_SatchelPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SatchelPack_C* ABP_SatchelPack_C::GetDefaultObj()
{
	static class ABP_SatchelPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SatchelPack_C*>(ABP_SatchelPack_C::StaticClass()->DefaultObject);

	return Default;
}

}


