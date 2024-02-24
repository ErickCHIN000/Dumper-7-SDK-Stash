#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Wood_Bow_Draw.CS_Wood_Bow_Draw_C
// (None)

class UClass* UCS_Wood_Bow_Draw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Wood_Bow_Draw_C");

	return Clss;
}


// CS_Wood_Bow_Draw_C CS_Wood_Bow_Draw.Default__CS_Wood_Bow_Draw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Wood_Bow_Draw_C* UCS_Wood_Bow_Draw_C::GetDefaultObj()
{
	static class UCS_Wood_Bow_Draw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Wood_Bow_Draw_C*>(UCS_Wood_Bow_Draw_C::StaticClass()->DefaultObject);

	return Default;
}

}


