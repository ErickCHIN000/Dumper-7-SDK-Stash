#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Carved_ChairLiving_2Seater.BP_Carved_ChairLiving_2Seater_C
// (Actor)

class UClass* ABP_Carved_ChairLiving_2Seater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Carved_ChairLiving_2Seater_C");

	return Clss;
}


// BP_Carved_ChairLiving_2Seater_C BP_Carved_ChairLiving_2Seater.Default__BP_Carved_ChairLiving_2Seater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Carved_ChairLiving_2Seater_C* ABP_Carved_ChairLiving_2Seater_C::GetDefaultObj()
{
	static class ABP_Carved_ChairLiving_2Seater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Carved_ChairLiving_2Seater_C*>(ABP_Carved_ChairLiving_2Seater_C::StaticClass()->DefaultObject);

	return Default;
}

}


