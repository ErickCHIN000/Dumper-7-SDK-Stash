#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Madman_Torch_Demoniac.Madman_Torch_Demoniac_C
// (Actor)

class UClass* AMadman_Torch_Demoniac_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Madman_Torch_Demoniac_C");

	return Clss;
}


// Madman_Torch_Demoniac_C Madman_Torch_Demoniac.Default__Madman_Torch_Demoniac_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMadman_Torch_Demoniac_C* AMadman_Torch_Demoniac_C::GetDefaultObj()
{
	static class AMadman_Torch_Demoniac_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMadman_Torch_Demoniac_C*>(AMadman_Torch_Demoniac_C::StaticClass()->DefaultObject);

	return Default;
}

}


