#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StormModeMenuButton.BPI_StormModeMenuButton_C
// (None)

class UClass* IBPI_StormModeMenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StormModeMenuButton_C");

	return Clss;
}


// BPI_StormModeMenuButton_C BPI_StormModeMenuButton.Default__BPI_StormModeMenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StormModeMenuButton_C* IBPI_StormModeMenuButton_C::GetDefaultObj()
{
	static class IBPI_StormModeMenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StormModeMenuButton_C*>(IBPI_StormModeMenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.UpdateIndexes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Indexes                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void IBPI_StormModeMenuButton_C::UpdateIndexes(TArray<int32>& Indexes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "UpdateIndexes");

	Params::IBPI_StormModeMenuButton_C_UpdateIndexes_Params Parms{};

	Parms.Indexes = Indexes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.OverrideCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenuButton_C::OverrideCurrentValue(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "OverrideCurrentValue");

	Params::IBPI_StormModeMenuButton_C_OverrideCurrentValue_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.NavHorizontal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenuButton_C::NavHorizontal(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "NavHorizontal");

	Params::IBPI_StormModeMenuButton_C_NavHorizontal_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.NavVertical
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenuButton_C::NavVertical(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "NavVertical");

	Params::IBPI_StormModeMenuButton_C_NavVertical_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.IsButtonEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormModeMenuButton_C::IsButtonEnabled(bool* Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "IsButtonEnabled");

	Params::IBPI_StormModeMenuButton_C_IsButtonEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled_ != nullptr)
		*Enabled_ = Parms.Enabled_;

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.DeactivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenuButton_C::DeactivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "DeactivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.ActivateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenuButton_C::ActivateButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "ActivateButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.EnableOrDisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormModeMenuButton_C::EnableOrDisableButton(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "EnableOrDisableButton");

	Params::IBPI_StormModeMenuButton_C_EnableOrDisableButton_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.ForceSelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormModeMenuButton_C::ForceSelectButton(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "ForceSelectButton");

	Params::IBPI_StormModeMenuButton_C_ForceSelectButton_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.UpdateSettingName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_StormModeMenuButton_C::UpdateSettingName(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "UpdateSettingName");

	Params::IBPI_StormModeMenuButton_C_UpdateSettingName_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.Value_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenuButton_C::Value_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "Value_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.Value_Previous
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenuButton_C::Value_Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "Value_Previous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.Value_Next
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormModeMenuButton_C::Value_Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "Value_Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.UpdateSettingValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Values                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void IBPI_StormModeMenuButton_C::UpdateSettingValues(TArray<class FText>& Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "UpdateSettingValues");

	Params::IBPI_StormModeMenuButton_C_UpdateSettingValues_Params Parms{};

	Parms.Values = Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.SetParentRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormModeMenuButton_C::SetParentRef(class UWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "SetParentRef");

	Params::IBPI_StormModeMenuButton_C_SetParentRef_Params Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormModeMenuButton_C::SelectButton(bool Select_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "SelectButton");

	Params::IBPI_StormModeMenuButton_C_SelectButton_Params Parms{};

	Parms.Select_ = Select_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormModeMenuButton.BPI_StormModeMenuButton_C.HighlightButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormModeMenuButton_C::HighlightButton(bool Highlight_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormModeMenuButton_C", "HighlightButton");

	Params::IBPI_StormModeMenuButton_C_HighlightButton_Params Parms{};

	Parms.Highlight_ = Highlight_;

	UObject::ProcessEvent(Func, &Parms);

}

}


