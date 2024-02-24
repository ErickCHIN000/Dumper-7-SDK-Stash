#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_hud_Compass_Tag.wid_hud_Compass_Tag_C
// (None)

class UClass* UWid_hud_Compass_Tag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_hud_Compass_Tag_C");

	return Clss;
}


// wid_hud_Compass_Tag_C wid_hud_Compass_Tag.Default__wid_hud_Compass_Tag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_hud_Compass_Tag_C* UWid_hud_Compass_Tag_C::GetDefaultObj()
{
	static class UWid_hud_Compass_Tag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_hud_Compass_Tag_C*>(UWid_hud_Compass_Tag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.HideUpDownArrows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_hud_Compass_Tag_C::HideUpDownArrows()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "HideUpDownArrows");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.HideArrows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_hud_Compass_Tag_C::HideArrows()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "HideArrows");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.ShowArrowSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_hud_Compass_Tag_C::ShowArrowSide(bool Left)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "ShowArrowSide");

	Params::UWid_hud_Compass_Tag_C_ShowArrowSide_Params Parms{};

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.ShowArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Up                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_hud_Compass_Tag_C::ShowArrow(bool Up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "ShowArrow");

	Params::UWid_hud_Compass_Tag_C_ShowArrow_Params Parms{};

	Parms.Up = Up;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.GetIsImportant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsImportant                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_hud_Compass_Tag_C::GetIsImportant(bool* IsImportant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "GetIsImportant");

	Params::UWid_hud_Compass_Tag_C_GetIsImportant_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsImportant != nullptr)
		*IsImportant = Parms.IsImportant;

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_hud_Compass_Tag_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.IsPlayerInsideRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_hud_Compass_Tag_C::IsPlayerInsideRadius(bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Square_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "IsPlayerInsideRadius");

	Params::UWid_hud_Compass_Tag_C_IsPlayerInsideRadius_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_hud_Compass_Tag_C::SetOpacity(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "SetOpacity");

	Params::UWid_hud_Compass_Tag_C_SetOpacity_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_hud_Compass_Tag_C::Update(bool CallFunc_IsValid_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "Update");

	Params::UWid_hud_Compass_Tag_C_Update_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.ShowMeters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowMeters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsQuest                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_hud_Compass_Tag_C::ShowMeters(bool ShowMeters, bool IsQuest, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "ShowMeters");

	Params::UWid_hud_Compass_Tag_C_ShowMeters_Params Parms{};

	Parms.ShowMeters = ShowMeters;
	Parms.IsQuest = IsQuest;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_hud_Compass_Tag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.UpdateImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_hud_Compass_Tag_C::UpdateImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "UpdateImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_hud_Compass_Tag.wid_hud_Compass_Tag_C.ExecuteUbergraph_wid_hud_Compass_Tag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UWid_hud_Compass_Tag_C::ExecuteUbergraph_wid_hud_Compass_Tag(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_Compass_Tag_C", "ExecuteUbergraph_wid_hud_Compass_Tag");

	Params::UWid_hud_Compass_Tag_C_ExecuteUbergraph_wid_hud_Compass_Tag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


