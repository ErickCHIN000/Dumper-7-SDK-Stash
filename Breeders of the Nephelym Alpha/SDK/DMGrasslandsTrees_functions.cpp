#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMGrasslandsTrees.DMGrasslandsTrees_C
// (None)

class UClass* UDMGrasslandsTrees_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMGrasslandsTrees_C");

	return Clss;
}


// DMGrasslandsTrees_C DMGrasslandsTrees.Default__DMGrasslandsTrees_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMGrasslandsTrees_C* UDMGrasslandsTrees_C::GetDefaultObj()
{
	static class UDMGrasslandsTrees_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMGrasslandsTrees_C*>(UDMGrasslandsTrees_C::StaticClass()->DefaultObject);

	return Default;
}

}


