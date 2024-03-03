#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ToolTip_piercings.WB_ToolTip_piercings_C
// (None)

class UClass* UWB_ToolTip_piercings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ToolTip_piercings_C");

	return Clss;
}


// WB_ToolTip_piercings_C WB_ToolTip_piercings.Default__WB_ToolTip_piercings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ToolTip_piercings_C* UWB_ToolTip_piercings_C::GetDefaultObj()
{
	static class UWB_ToolTip_piercings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ToolTip_piercings_C*>(UWB_ToolTip_piercings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.GetText_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_ToolTip_piercings_C::GetText_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "GetText_1");

	Params::UWB_ToolTip_piercings_C_GetText_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.GetText_0
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWB_ToolTip_piercings_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "GetText_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Set Image
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWB_ToolTip_piercings_C::Set_Image()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "Set Image");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Set Rarity Text Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 CallFunc_Set_Rarity_Color_Color                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UWB_ToolTip_piercings_C::Set_Rarity_Text_Color(const struct FSlateColor& CallFunc_Set_Rarity_Color_Color, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "Set Rarity Text Color");

	Params::UWB_ToolTip_piercings_C_Set_Rarity_Text_Color_Params Parms{};

	Parms.CallFunc_Set_Rarity_Color_Color = CallFunc_Set_Rarity_Color_Color;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Set Rarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_ToolTip_piercings_C::Set_Rarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "Set Rarity");

	Params::UWB_ToolTip_piercings_C_Set_Rarity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Set Type
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWB_ToolTip_piercings_C::Set_Type()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "Set Type");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Set Name
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWB_ToolTip_piercings_C::Set_Name()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "Set Name");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_ToolTip_piercings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_piercings.WB_ToolTip_piercings_C.ExecuteUbergraph_WB_ToolTip_piercings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ToolTip_piercings_C::ExecuteUbergraph_WB_ToolTip_piercings(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_piercings_C", "ExecuteUbergraph_WB_ToolTip_piercings");

	Params::UWB_ToolTip_piercings_C_ExecuteUbergraph_WB_ToolTip_piercings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


