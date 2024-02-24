#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Money.LL_Money_C
// (Actor)

class UClass* ALL_Money_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Money_C");

	return Clss;
}


// LL_Money_C LL_Money.Default__LL_Money_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Money_C* ALL_Money_C::GetDefaultObj()
{
	static class ALL_Money_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Money_C*>(ALL_Money_C::StaticClass()->DefaultObject);

	return Default;
}

}


