#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MissionSelection_Button.wid_MissionSelection_Button_C
// (None)

class UClass* UWid_MissionSelection_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MissionSelection_Button_C");

	return Clss;
}


// wid_MissionSelection_Button_C wid_MissionSelection_Button.Default__wid_MissionSelection_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MissionSelection_Button_C* UWid_MissionSelection_Button_C::GetDefaultObj()
{
	static class UWid_MissionSelection_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MissionSelection_Button_C*>(UWid_MissionSelection_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_MissionSelection_Button_C::SetName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Button_C", "SetName");

	Params::UWid_MissionSelection_Button_C_SetName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.ChangeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Buttons_PC         Pc                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         X1                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        PS4                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Button_C::ChangeImage(enum class Enum_Buttons_PC Pc, enum class Enum_Buttons_X1 X1, enum class Enum_Buttons_PS4 PS4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Button_C", "ChangeImage");

	Params::UWid_MissionSelection_Button_C_ChangeImage_Params Parms{};

	Parms.Pc = Pc;
	Parms.X1 = X1;
	Parms.PS4 = PS4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.SetTextures
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Pc                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  PS4                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  XBOX1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Button_C::SetTextures(class UTexture2D* Pc, class UTexture2D* PS4, class UTexture2D* XBOX1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Button_C", "SetTextures");

	Params::UWid_MissionSelection_Button_C_SetTextures_Params Parms{};

	Parms.Pc = Pc;
	Parms.PS4 = PS4;
	Parms.XBOX1 = XBOX1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Button_C", "PreConstruct");

	Params::UWid_MissionSelection_Button_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Button_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Button_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Button_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.ExecuteUbergraph_wid_MissionSelection_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Button_C::ExecuteUbergraph_wid_MissionSelection_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Button_C", "ExecuteUbergraph_wid_MissionSelection_Button");

	Params::UWid_MissionSelection_Button_C_ExecuteUbergraph_wid_MissionSelection_Button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


