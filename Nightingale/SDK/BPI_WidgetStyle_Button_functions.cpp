#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_WidgetStyle_Button.BPI_WidgetStyle_Button_C
// (None)

class UClass* IBPI_WidgetStyle_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_WidgetStyle_Button_C");

	return Clss;
}


// BPI_WidgetStyle_Button_C BPI_WidgetStyle_Button.Default__BPI_WidgetStyle_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_WidgetStyle_Button_C* IBPI_WidgetStyle_Button_C::GetDefaultObj()
{
	static class IBPI_WidgetStyle_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_WidgetStyle_Button_C*>(IBPI_WidgetStyle_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_WidgetStyle_Button.BPI_WidgetStyle_Button_C.RetrieveButtonStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WidgetStyle_Button       ButtonStyleStruct                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void IBPI_WidgetStyle_Button_C::RetrieveButtonStyle(struct FS_WidgetStyle_Button* ButtonStyleStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WidgetStyle_Button_C", "RetrieveButtonStyle");

	Params::IBPI_WidgetStyle_Button_C_RetrieveButtonStyle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonStyleStruct != nullptr)
		*ButtonStyleStruct = std::move(Parms.ButtonStyleStruct);

}

}


