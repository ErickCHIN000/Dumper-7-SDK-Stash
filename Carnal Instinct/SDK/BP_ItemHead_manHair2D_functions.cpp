#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_manHair2D.BP_ItemHead_manHair2D_C
// (Actor)

class UClass* ABP_ItemHead_manHair2D_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_manHair2D_C");

	return Clss;
}


// BP_ItemHead_manHair2D_C BP_ItemHead_manHair2D.Default__BP_ItemHead_manHair2D_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_manHair2D_C* ABP_ItemHead_manHair2D_C::GetDefaultObj()
{
	static class ABP_ItemHead_manHair2D_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_manHair2D_C*>(ABP_ItemHead_manHair2D_C::StaticClass()->DefaultObject);

	return Default;
}

}

