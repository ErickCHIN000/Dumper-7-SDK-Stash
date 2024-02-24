#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Crafting_Step_Test.GE_Crafting_Step_Test_C
// (None)

class UClass* UGE_Crafting_Step_Test_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Crafting_Step_Test_C");

	return Clss;
}


// GE_Crafting_Step_Test_C GE_Crafting_Step_Test.Default__GE_Crafting_Step_Test_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Crafting_Step_Test_C* UGE_Crafting_Step_Test_C::GetDefaultObj()
{
	static class UGE_Crafting_Step_Test_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Crafting_Step_Test_C*>(UGE_Crafting_Step_Test_C::StaticClass()->DefaultObject);

	return Default;
}

}


