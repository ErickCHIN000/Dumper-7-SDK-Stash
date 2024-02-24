#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C
// (None)

class UClass* UArsenalEquipHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalEquipHUDComponent_C");

	return Clss;
}


// ArsenalEquipHUDComponent_C ArsenalEquipHUDComponent.Default__ArsenalEquipHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalEquipHUDComponent_C* UArsenalEquipHUDComponent_C::GetDefaultObj()
{
	static class UArsenalEquipHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalEquipHUDComponent_C*>(UArsenalEquipHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_SetToWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row1Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row1Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row2Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row2Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row3Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row3Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row4Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Row4Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UArsenalEquipHUDComponent_C::SetPartsInfo_SetToWidgets(class FText ItemName, class FText Row1Name, class FText Row1Value, class FText Row2Name, class FText Row2Value, class FText Row3Name, class FText Row3Value, class FText Row4Name, class FText Row4Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetPartsInfo_SetToWidgets");

	Params::UArsenalEquipHUDComponent_C_SetPartsInfo_SetToWidgets_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.Row1Name = Row1Name;
	Parms.Row1Value = Row1Value;
	Parms.Row2Name = Row2Name;
	Parms.Row2Value = Row2Value;
	Parms.Row3Name = Row3Name;
	Parms.Row3Value = Row3Value;
	Parms.Row4Name = Row4Name;
	Parms.Row4Value = Row4Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_Weapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetPartsInfo_Weapon(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetPartsInfo_Weapon");

	Params::UArsenalEquipHUDComponent_C_SetPartsInfo_Weapon_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_ArmLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetPartsInfo_ArmLeft(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetPartsInfo_ArmLeft");

	Params::UArsenalEquipHUDComponent_C_SetPartsInfo_ArmLeft_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_ArmRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetPartsInfo_ArmRight(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetPartsInfo_ArmRight");

	Params::UArsenalEquipHUDComponent_C_SetPartsInfo_ArmRight_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_Legs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetPartsInfo_Legs(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetPartsInfo_Legs");

	Params::UArsenalEquipHUDComponent_C_SetPartsInfo_Legs_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo_Head
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetPartsInfo_Head(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetPartsInfo_Head");

	Params::UArsenalEquipHUDComponent_C_SetPartsInfo_Head_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetPartsInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLInventoryCategory   Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PartsID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PageCurrent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PageMax                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValueCurrent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ValueMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetPartsInfo(enum class ETTLInventoryCategory Category, class FName PartsID, int32 PageCurrent, int32 PageMax, int32 ValueCurrent, int32 ValueMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetPartsInfo");

	Params::UArsenalEquipHUDComponent_C_SetPartsInfo_Params Parms{};

	Parms.Category = Category;
	Parms.PartsID = PartsID;
	Parms.PageCurrent = PageCurrent;
	Parms.PageMax = PageMax;
	Parms.ValueCurrent = ValueCurrent;
	Parms.ValueMax = ValueMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.HidePartsInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalEquipHUDComponent_C::HidePartsInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "HidePartsInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.ShowPartsInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalEquipHUDComponent_C::ShowPartsInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "ShowPartsInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.DegreeToCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Degree                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Deg                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::DegreeToCategory(float Degree, enum class ETTLInventoryCategory* Result, float Deg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "DegreeToCategory");

	Params::UArsenalEquipHUDComponent_C_DegreeToCategory_Params Parms{};

	Parms.Degree = Degree;
	Parms.Deg = Deg;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetCurrentCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLInventoryCategory   NewCurrentCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetCurrentCategory(enum class ETTLInventoryCategory NewCurrentCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetCurrentCategory");

	Params::UArsenalEquipHUDComponent_C_SetCurrentCategory_Params Parms{};

	Parms.NewCurrentCategory = NewCurrentCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetCategoryButtonUV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              U                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              V                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetCategoryButtonUV(class UButton* Button, float U, float V)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetCategoryButtonUV");

	Params::UArsenalEquipHUDComponent_C_SetCategoryButtonUV_Params Parms{};

	Parms.Button = Button;
	Parms.U = U;
	Parms.V = V;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.GetHUDCategoryParam
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETTLInventoryCategory   Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentHUDParamStruct    HUDParam                                                         (Parm, OutParm, HasGetValueTypeHash)
// struct FEquipmentHUDParamStruct    ReturnVal                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::GetHUDCategoryParam(enum class ETTLInventoryCategory Category, struct FEquipmentHUDParamStruct* HUDParam, const struct FEquipmentHUDParamStruct& ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "GetHUDCategoryParam");

	Params::UArsenalEquipHUDComponent_C_GetHUDCategoryParam_Params Parms{};

	Parms.Category = Category;
	Parms.ReturnVal = ReturnVal;

	UObject::ProcessEvent(Func, &Parms);

	if (HUDParam != nullptr)
		*HUDParam = std::move(Parms.HUDParam);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.SetCellCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLInventoryCategory   Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalEquipHUDComponent_C::SetCellCategory(int32 Index, enum class ETTLInventoryCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "SetCellCategory");

	Params::UArsenalEquipHUDComponent_C_SetCellCategory_Params Parms{};

	Parms.Index = Index;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.IsVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalEquipHUDComponent_C::IsVisible(bool* Result, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "IsVisible");

	Params::UArsenalEquipHUDComponent_C_IsVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalEquipHUDComponent_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalEquipHUDComponent.ArsenalEquipHUDComponent_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalEquipHUDComponent_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalEquipHUDComponent_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}

}


