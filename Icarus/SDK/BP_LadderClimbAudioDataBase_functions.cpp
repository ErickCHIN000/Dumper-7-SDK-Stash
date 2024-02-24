#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LadderClimbAudioDataBase.BP_LadderClimbAudioDataBase_C
// (None)

class UClass* UBP_LadderClimbAudioDataBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LadderClimbAudioDataBase_C");

	return Clss;
}


// BP_LadderClimbAudioDataBase_C BP_LadderClimbAudioDataBase.Default__BP_LadderClimbAudioDataBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LadderClimbAudioDataBase_C* UBP_LadderClimbAudioDataBase_C::GetDefaultObj()
{
	static class UBP_LadderClimbAudioDataBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LadderClimbAudioDataBase_C*>(UBP_LadderClimbAudioDataBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


