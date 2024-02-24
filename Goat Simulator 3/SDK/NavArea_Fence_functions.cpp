#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Fence.NavArea_Fence_C
// (None)

class UClass* UNavArea_Fence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Fence_C");

	return Clss;
}


// NavArea_Fence_C NavArea_Fence.Default__NavArea_Fence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Fence_C* UNavArea_Fence_C::GetDefaultObj()
{
	static class UNavArea_Fence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Fence_C*>(UNavArea_Fence_C::StaticClass()->DefaultObject);

	return Default;
}

}


