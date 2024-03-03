#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_femHair2b.BP_ItemHead_femHair2b_C
// (Actor)

class UClass* ABP_ItemHead_femHair2b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_femHair2b_C");

	return Clss;
}


// BP_ItemHead_femHair2b_C BP_ItemHead_femHair2b.Default__BP_ItemHead_femHair2b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_femHair2b_C* ABP_ItemHead_femHair2b_C::GetDefaultObj()
{
	static class ABP_ItemHead_femHair2b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_femHair2b_C*>(ABP_ItemHead_femHair2b_C::StaticClass()->DefaultObject);

	return Default;
}

}


