#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CharacterCustomization.BPI_CharacterCustomization_C
// (None)

class UClass* IBPI_CharacterCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CharacterCustomization_C");

	return Clss;
}


// BPI_CharacterCustomization_C BPI_CharacterCustomization.Default__BPI_CharacterCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CharacterCustomization_C* IBPI_CharacterCustomization_C::GetDefaultObj()
{
	static class IBPI_CharacterCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CharacterCustomization_C*>(IBPI_CharacterCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnMaterialScalarValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Wetness                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Divisor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnMaterialScalarValueChanged(int32 Wetness, class FName Name, float Divisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnMaterialScalarValueChanged");

	Params::IBPI_CharacterCustomization_C_OnMaterialScalarValueChanged_Params Parms{};

	Parms.Wetness = Wetness;
	Parms.Name = Name;
	Parms.Divisor = Divisor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnSkinEffectsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sheen                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Emissive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Edge                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharacterCustomization_C::OnSkinEffectsChanged(bool Sheen, bool Emissive, bool Edge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnSkinEffectsChanged");

	Params::IBPI_CharacterCustomization_C_OnSkinEffectsChanged_Params Parms{};

	Parms.Sheen = Sheen;
	Parms.Emissive = Emissive;
	Parms.Edge = Edge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnTrailColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnTrailColorChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnTrailColorChanged");

	Params::IBPI_CharacterCustomization_C_OnTrailColorChanged_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHairColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnHairColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnHairColorChanged");

	Params::IBPI_CharacterCustomization_C_OnHairColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnSkinColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnSkinColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnSkinColorChanged");

	Params::IBPI_CharacterCustomization_C_OnSkinColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHeadPieceColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnHeadPieceColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnHeadPieceColorChanged");

	Params::IBPI_CharacterCustomization_C_OnHeadPieceColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnGlovesColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnGlovesColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnGlovesColorChanged");

	Params::IBPI_CharacterCustomization_C_OnGlovesColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnClothesColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnClothesColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnClothesColorChanged");

	Params::IBPI_CharacterCustomization_C_OnClothesColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_CharacterCustomization_C::OnConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_CharacterCustomization_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnSexChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_CharacterCustomization_C::OnSexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnSexChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.GetCustomizationData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationData          Info                                                             (Parm, OutParm, NoDestructor)

void IBPI_CharacterCustomization_C::GetCustomizationData(struct FCustomizationData* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "GetCustomizationData");

	Params::IBPI_CharacterCustomization_C_GetCustomizationData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHairChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnHairChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnHairChanged");

	Params::IBPI_CharacterCustomization_C_OnHairChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnGlovesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnGlovesChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnGlovesChanged");

	Params::IBPI_CharacterCustomization_C_OnGlovesChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnHeadPieceChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnHeadPieceChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnHeadPieceChanged");

	Params::IBPI_CharacterCustomization_C_OnHeadPieceChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnClothesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnClothesChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnClothesChanged");

	Params::IBPI_CharacterCustomization_C_OnClothesChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.GetCustomizationWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharacterCreation2_C*   Return                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::GetCustomizationWidget(class UWBP_CharacterCreation2_C** Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "GetCustomizationWidget");

	Params::IBPI_CharacterCustomization_C_GetCustomizationWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnEnterExitWingsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharacterCustomization_C::OnEnterExitWingsMenu(bool Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnEnterExitWingsMenu");

	Params::IBPI_CharacterCustomization_C_OnEnterExitWingsMenu_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnChangeGlideTrailColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnChangeGlideTrailColor(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnChangeGlideTrailColor");

	Params::IBPI_CharacterCustomization_C_OnChangeGlideTrailColor_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnChangedWingsColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnChangedWingsColor(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnChangedWingsColor");

	Params::IBPI_CharacterCustomization_C_OnChangedWingsColor_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CharacterCustomization.BPI_CharacterCustomization_C.OnChangedWingsMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomization_C::OnChangedWingsMesh(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CharacterCustomization_C", "OnChangedWingsMesh");

	Params::IBPI_CharacterCustomization_C_OnChangedWingsMesh_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}

}


