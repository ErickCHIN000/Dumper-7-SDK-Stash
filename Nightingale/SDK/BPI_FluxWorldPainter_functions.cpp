#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxWorldPainter.BPI_FluxWorldPainter_C
// (None)

class UClass* IBPI_FluxWorldPainter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxWorldPainter_C");

	return Clss;
}


// BPI_FluxWorldPainter_C BPI_FluxWorldPainter.Default__BPI_FluxWorldPainter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxWorldPainter_C* IBPI_FluxWorldPainter_C::GetDefaultObj()
{
	static class IBPI_FluxWorldPainter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxWorldPainter_C*>(IBPI_FluxWorldPainter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxWorldPainter.BPI_FluxWorldPainter_C.OnRepaintBrushes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxWorldPainter_C::OnRepaintBrushes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWorldPainter_C", "OnRepaintBrushes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxWorldPainter.BPI_FluxWorldPainter_C.ApplyMaterialParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>Materials                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_FluxWorldPainter_C::ApplyMaterialParameters(TArray<class UMaterialInstanceDynamic*>& Materials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWorldPainter_C", "ApplyMaterialParameters");

	Params::IBPI_FluxWorldPainter_C_ApplyMaterialParameters_Params Parms{};

	Parms.Materials = Materials;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_FluxWorldPainter.BPI_FluxWorldPainter_C.RenderScenePainter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxWorldPainter_C::RenderScenePainter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxWorldPainter_C", "RenderScenePainter");



	UObject::ProcessEvent(Func, nullptr);

}

}


