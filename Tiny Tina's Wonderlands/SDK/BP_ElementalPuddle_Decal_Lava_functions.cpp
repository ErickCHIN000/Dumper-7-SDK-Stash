#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C
// (Actor)

class UClass* ABP_ElementalPuddle_Decal_Lava_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalPuddle_Decal_Lava_C");

	return Clss;
}


// BP_ElementalPuddle_Decal_Lava_C BP_ElementalPuddle_Decal_Lava.Default__BP_ElementalPuddle_Decal_Lava_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ElementalPuddle_Decal_Lava_C* ABP_ElementalPuddle_Decal_Lava_C::GetDefaultObj()
{
	static class ABP_ElementalPuddle_Decal_Lava_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ElementalPuddle_Decal_Lava_C*>(ABP_ElementalPuddle_Decal_Lava_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ElementalPuddle_Decal_Lava.BP_ElementalPuddle_Decal_Lava_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ElementalPuddle_Decal_Lava_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ElementalPuddle_Decal_Lava_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


