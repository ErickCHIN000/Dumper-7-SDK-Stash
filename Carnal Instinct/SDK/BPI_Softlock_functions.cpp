#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Softlock.BPI_Softlock_C
// (None)

class UClass* IBPI_Softlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Softlock_C");

	return Clss;
}


// BPI_Softlock_C BPI_Softlock.Default__BPI_Softlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Softlock_C* IBPI_Softlock_C::GetDefaultObj()
{
	static class IBPI_Softlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Softlock_C*>(IBPI_Softlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Softlock.BPI_Softlock_C.BI_ToggleHardlockWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        BI_Visibilty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Softlock_C::BI_ToggleHardlockWidget(enum class ESlateVisibility BI_Visibilty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Softlock_C", "BI_ToggleHardlockWidget");

	Params::IBPI_Softlock_C_BI_ToggleHardlockWidget_Params Parms{};

	Parms.BI_Visibilty = BI_Visibilty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Softlock.BPI_Softlock_C.BI_TogglePredictiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        BI_Visibilty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Softlock_C::BI_TogglePredictiveWidget(enum class ESlateVisibility BI_Visibilty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Softlock_C", "BI_TogglePredictiveWidget");

	Params::IBPI_Softlock_C_BI_TogglePredictiveWidget_Params Parms{};

	Parms.BI_Visibilty = BI_Visibilty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Softlock.BPI_Softlock_C.BI_ToggleHardlockSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        BI_Visibilty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Softlock_C::BI_ToggleHardlockSelection(enum class ESlateVisibility BI_Visibilty, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Softlock_C", "BI_ToggleHardlockSelection");

	Params::IBPI_Softlock_C_BI_ToggleHardlockSelection_Params Parms{};

	Parms.BI_Visibilty = BI_Visibilty;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BPI_Softlock.BPI_Softlock_C.BI_TogglePredictiveSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        BI_Visibilty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Softlock_C::BI_TogglePredictiveSelection(enum class ESlateVisibility BI_Visibilty, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Softlock_C", "BI_TogglePredictiveSelection");

	Params::IBPI_Softlock_C_BI_TogglePredictiveSelection_Params Parms{};

	Parms.BI_Visibilty = BI_Visibilty;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BPI_Softlock.BPI_Softlock_C.BI_OnSelectedTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Softlock_C::BI_OnSelectedTarget(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Softlock_C", "BI_OnSelectedTarget");

	Params::IBPI_Softlock_C_BI_OnSelectedTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BPI_Softlock.BPI_Softlock_C.BI_CustomMinDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BI_UseCustomDistance_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              BI_NewMinDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Softlock_C::BI_CustomMinDistance(bool* BI_UseCustomDistance_, float* BI_NewMinDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Softlock_C", "BI_CustomMinDistance");

	Params::IBPI_Softlock_C_BI_CustomMinDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BI_UseCustomDistance_ != nullptr)
		*BI_UseCustomDistance_ = Parms.BI_UseCustomDistance_;

	if (BI_NewMinDistance != nullptr)
		*BI_NewMinDistance = Parms.BI_NewMinDistance;

}


// Function BPI_Softlock.BPI_Softlock_C.BI_CanBeTarget?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               BI_CanBeTarget_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Softlock_C::BI_CanBeTarget_(bool* BI_CanBeTarget_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Softlock_C", "BI_CanBeTarget?");

	Params::IBPI_Softlock_C_BI_CanBeTarget__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BI_CanBeTarget_ != nullptr)
		*BI_CanBeTarget_ = Parms.BI_CanBeTarget_;

}

}


