#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_HumanRich1.BP_ItemHead_HumanRich1_C
// (Actor)

class UClass* ABP_ItemHead_HumanRich1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_HumanRich1_C");

	return Clss;
}


// BP_ItemHead_HumanRich1_C BP_ItemHead_HumanRich1.Default__BP_ItemHead_HumanRich1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_HumanRich1_C* ABP_ItemHead_HumanRich1_C::GetDefaultObj()
{
	static class ABP_ItemHead_HumanRich1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_HumanRich1_C*>(ABP_ItemHead_HumanRich1_C::StaticClass()->DefaultObject);

	return Default;
}

}


