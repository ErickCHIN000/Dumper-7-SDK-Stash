#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DesertTutorialTired.GE_DesertTutorialTired_C
// (None)

class UClass* UGE_DesertTutorialTired_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DesertTutorialTired_C");

	return Clss;
}


// GE_DesertTutorialTired_C GE_DesertTutorialTired.Default__GE_DesertTutorialTired_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DesertTutorialTired_C* UGE_DesertTutorialTired_C::GetDefaultObj()
{
	static class UGE_DesertTutorialTired_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DesertTutorialTired_C*>(UGE_DesertTutorialTired_C::StaticClass()->DefaultObject);

	return Default;
}

}


