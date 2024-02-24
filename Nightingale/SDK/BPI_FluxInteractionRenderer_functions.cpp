#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C
// (None)

class UClass* IBPI_FluxInteractionRenderer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxInteractionRenderer_C");

	return Clss;
}


// BPI_FluxInteractionRenderer_C BPI_FluxInteractionRenderer.Default__BPI_FluxInteractionRenderer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxInteractionRenderer_C* IBPI_FluxInteractionRenderer_C::GetDefaultObj()
{
	static class IBPI_FluxInteractionRenderer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxInteractionRenderer_C*>(IBPI_FluxInteractionRenderer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.GetCoastlineState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxCoastlineState_C*   State                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxInteractionRenderer_C::GetCoastlineState(class UPDA_FluxCoastlineState_C** State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxInteractionRenderer_C", "GetCoastlineState");

	Params::IBPI_FluxInteractionRenderer_C_GetCoastlineState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.GetSimulationState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_FluxSimulationState_C*  State                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxInteractionRenderer_C::GetSimulationState(class UPDA_FluxSimulationState_C** State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxInteractionRenderer_C", "GetSimulationState");

	Params::IBPI_FluxInteractionRenderer_C_GetSimulationState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.SetInteractionsTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxInteractionRenderer_C::SetInteractionsTexture(class UTextureRenderTarget2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxInteractionRenderer_C", "SetInteractionsTexture");

	Params::IBPI_FluxInteractionRenderer_C_SetInteractionsTexture_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.SetInteractionsArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Area                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxInteractionRenderer_C::SetInteractionsArea(const struct FLinearColor& Area)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxInteractionRenderer_C", "SetInteractionsArea");

	Params::IBPI_FluxInteractionRenderer_C_SetInteractionsArea_Params Parms{};

	Parms.Area = Area;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.CanRenderInteractions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRender                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxInteractionRenderer_C::CanRenderInteractions(bool* CanRender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxInteractionRenderer_C", "CanRenderInteractions");

	Params::IBPI_FluxInteractionRenderer_C_CanRenderInteractions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanRender != nullptr)
		*CanRender = Parms.CanRender;

}

}


