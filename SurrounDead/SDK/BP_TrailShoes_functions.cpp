#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TrailShoes.BP_TrailShoes_C
// (Actor)

class UClass* ABP_TrailShoes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TrailShoes_C");

	return Clss;
}


// BP_TrailShoes_C BP_TrailShoes.Default__BP_TrailShoes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TrailShoes_C* ABP_TrailShoes_C::GetDefaultObj()
{
	static class ABP_TrailShoes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TrailShoes_C*>(ABP_TrailShoes_C::StaticClass()->DefaultObject);

	return Default;
}

}


