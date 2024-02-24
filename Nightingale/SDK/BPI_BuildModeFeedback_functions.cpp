#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_BuildModeFeedback.BPI_BuildModeFeedback_C
// (None)

class UClass* IBPI_BuildModeFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_BuildModeFeedback_C");

	return Clss;
}


// BPI_BuildModeFeedback_C BPI_BuildModeFeedback.Default__BPI_BuildModeFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_BuildModeFeedback_C* IBPI_BuildModeFeedback_C::GetDefaultObj()
{
	static class IBPI_BuildModeFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_BuildModeFeedback_C*>(IBPI_BuildModeFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_BuildModeFeedback.BPI_BuildModeFeedback_C.SetBuildModeFeedbackMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuildModeContext       Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BuildModeFeedback_C::SetBuildModeFeedbackMode(enum class EBuildModeContext Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_BuildModeFeedback_C", "SetBuildModeFeedbackMode");

	Params::IBPI_BuildModeFeedback_C_SetBuildModeFeedbackMode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_BuildModeFeedback.BPI_BuildModeFeedback_C.SetBuildModeFeedbackActionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EBuildModeAction        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BuildModeFeedback_C::SetBuildModeFeedbackActionEnabled(enum class EBuildModeAction Action, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_BuildModeFeedback_C", "SetBuildModeFeedbackActionEnabled");

	Params::IBPI_BuildModeFeedback_C_SetBuildModeFeedbackActionEnabled_Params Parms{};

	Parms.Action = Action;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_BuildModeFeedback.BPI_BuildModeFeedback_C.GetBuildModeFeedbackComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BuildModeFeedbackComponent_C*Component                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_BuildModeFeedback_C::GetBuildModeFeedbackComponent(class UBP_BuildModeFeedbackComponent_C** Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_BuildModeFeedback_C", "GetBuildModeFeedbackComponent");

	Params::IBPI_BuildModeFeedback_C_GetBuildModeFeedbackComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;

}

}


