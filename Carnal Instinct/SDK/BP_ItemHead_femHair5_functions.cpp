#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_femHair5.BP_ItemHead_femHair5_C
// (Actor)

class UClass* ABP_ItemHead_femHair5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_femHair5_C");

	return Clss;
}


// BP_ItemHead_femHair5_C BP_ItemHead_femHair5.Default__BP_ItemHead_femHair5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_femHair5_C* ABP_ItemHead_femHair5_C::GetDefaultObj()
{
	static class ABP_ItemHead_femHair5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_femHair5_C*>(ABP_ItemHead_femHair5_C::StaticClass()->DefaultObject);

	return Default;
}

}


