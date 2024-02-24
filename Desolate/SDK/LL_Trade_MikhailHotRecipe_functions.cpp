#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Trade_MikhailHotRecipe.LL_Trade_MikhailHotRecipe_C
// (Actor)

class UClass* ALL_Trade_MikhailHotRecipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Trade_MikhailHotRecipe_C");

	return Clss;
}


// LL_Trade_MikhailHotRecipe_C LL_Trade_MikhailHotRecipe.Default__LL_Trade_MikhailHotRecipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Trade_MikhailHotRecipe_C* ALL_Trade_MikhailHotRecipe_C::GetDefaultObj()
{
	static class ALL_Trade_MikhailHotRecipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Trade_MikhailHotRecipe_C*>(ALL_Trade_MikhailHotRecipe_C::StaticClass()->DefaultObject);

	return Default;
}

}


