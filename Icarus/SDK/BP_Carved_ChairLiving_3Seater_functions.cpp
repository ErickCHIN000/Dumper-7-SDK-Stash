#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Carved_ChairLiving_3Seater.BP_Carved_ChairLiving_3Seater_C
// (Actor)

class UClass* ABP_Carved_ChairLiving_3Seater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Carved_ChairLiving_3Seater_C");

	return Clss;
}


// BP_Carved_ChairLiving_3Seater_C BP_Carved_ChairLiving_3Seater.Default__BP_Carved_ChairLiving_3Seater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Carved_ChairLiving_3Seater_C* ABP_Carved_ChairLiving_3Seater_C::GetDefaultObj()
{
	static class ABP_Carved_ChairLiving_3Seater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Carved_ChairLiving_3Seater_C*>(ABP_Carved_ChairLiving_3Seater_C::StaticClass()->DefaultObject);

	return Default;
}

}


