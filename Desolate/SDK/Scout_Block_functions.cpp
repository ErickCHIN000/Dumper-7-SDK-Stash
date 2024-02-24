#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_Block.Scout_Block_C
// (None)

class UClass* UScout_Block_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_Block_C");

	return Clss;
}


// Scout_Block_C Scout_Block.Default__Scout_Block_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_Block_C* UScout_Block_C::GetDefaultObj()
{
	static class UScout_Block_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_Block_C*>(UScout_Block_C::StaticClass()->DefaultObject);

	return Default;
}

}


