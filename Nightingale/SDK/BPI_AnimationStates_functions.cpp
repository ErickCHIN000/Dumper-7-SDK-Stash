#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AnimationStates.BPI_AnimationStates_C
// (None)

class UClass* IBPI_AnimationStates_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AnimationStates_C");

	return Clss;
}


// BPI_AnimationStates_C BPI_AnimationStates.Default__BPI_AnimationStates_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AnimationStates_C* IBPI_AnimationStates_C::GetDefaultObj()
{
	static class IBPI_AnimationStates_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AnimationStates_C*>(IBPI_AnimationStates_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AnimationStates.BPI_AnimationStates_C.GetAlertnessLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertnessLevelType     AlertnessLevel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimationStates_C::GetAlertnessLevel(enum class EAlertnessLevelType* AlertnessLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AnimationStates_C", "GetAlertnessLevel");

	Params::IBPI_AnimationStates_C_GetAlertnessLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AlertnessLevel != nullptr)
		*AlertnessLevel = Parms.AlertnessLevel;

}


// Function BPI_AnimationStates.BPI_AnimationStates_C.SetAlertnessLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertnessLevelType     AlertnessLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimationStates_C::SetAlertnessLevel(enum class EAlertnessLevelType AlertnessLevel, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AnimationStates_C", "SetAlertnessLevel");

	Params::IBPI_AnimationStates_C_SetAlertnessLevel_Params Parms{};

	Parms.AlertnessLevel = AlertnessLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


