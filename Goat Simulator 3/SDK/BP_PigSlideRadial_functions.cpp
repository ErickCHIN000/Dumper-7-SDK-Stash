#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PigSlideRadial.BP_PigSlideRadial_C
// (SceneComponent)

class UClass* UBP_PigSlideRadial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PigSlideRadial_C");

	return Clss;
}


// BP_PigSlideRadial_C BP_PigSlideRadial.Default__BP_PigSlideRadial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PigSlideRadial_C* UBP_PigSlideRadial_C::GetDefaultObj()
{
	static class UBP_PigSlideRadial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PigSlideRadial_C*>(UBP_PigSlideRadial_C::StaticClass()->DefaultObject);

	return Default;
}

}


