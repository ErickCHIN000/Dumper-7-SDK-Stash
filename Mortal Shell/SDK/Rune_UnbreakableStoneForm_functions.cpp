#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C
// (None)

class UClass* URune_UnbreakableStoneForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_UnbreakableStoneForm_C");

	return Clss;
}


// Rune_UnbreakableStoneForm_C Rune_UnbreakableStoneForm.Default__Rune_UnbreakableStoneForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_UnbreakableStoneForm_C* URune_UnbreakableStoneForm_C::GetDefaultObj()
{
	static class URune_UnbreakableStoneForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_UnbreakableStoneForm_C*>(URune_UnbreakableStoneForm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.Legendary?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetX_Value_Value                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool URune_UnbreakableStoneForm_C::Legendary_(int32 CallFunc_GetX_Value_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "Legendary?");

	Params::URune_UnbreakableStoneForm_C_Legendary__Params Parms{};

	Parms.CallFunc_GetX_Value_Value = CallFunc_GetX_Value_Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.RemoveIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::RemoveIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "RemoveIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.GetX_Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_UnbreakableStoneForm_C::GetX_Value(int32* Value, enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "GetX_Value");

	Params::URune_UnbreakableStoneForm_C_GetX_Value_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.Unbreakable_StoneForm_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::Unbreakable_StoneForm_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "Unbreakable_StoneForm_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.OnUpdateUnbreakableStoneForm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_UnbreakableStoneForm_C::OnUpdateUnbreakableStoneForm(bool Remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "OnUpdateUnbreakableStoneForm");

	Params::URune_UnbreakableStoneForm_C_OnUpdateUnbreakableStoneForm_Params Parms{};

	Parms.Remove = Remove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.OnStoneFormLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::OnStoneFormLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "OnStoneFormLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.Unbreakable_StoneForm_Start_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::Unbreakable_StoneForm_Start_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "Unbreakable_StoneForm_Start_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.OnStoneFormLeft_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::OnStoneFormLeft_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "OnStoneFormLeft_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.OnUpdateUnbreakableStoneForm_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_UnbreakableStoneForm_C::OnUpdateUnbreakableStoneForm_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "OnUpdateUnbreakableStoneForm_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_UnbreakableStoneForm.Rune_UnbreakableStoneForm_C.ExecuteUbergraph_Rune_UnbreakableStoneForm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Legendary__ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Remove                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetX_Value_Value                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Legendary__ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_UnbreakableStoneForm_C::ExecuteUbergraph_Rune_UnbreakableStoneForm(int32 EntryPoint, bool CallFunc_Legendary__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_CustomEvent_Remove, int32 CallFunc_GetX_Value_Value, float CallFunc_GetChanceForTier_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Legendary__ReturnValue_1, int32 K2Node_Select_Default, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_UnbreakableStoneForm_C", "ExecuteUbergraph_Rune_UnbreakableStoneForm");

	Params::URune_UnbreakableStoneForm_C_ExecuteUbergraph_Rune_UnbreakableStoneForm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Legendary__ReturnValue = CallFunc_Legendary__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_CustomEvent_Remove = K2Node_CustomEvent_Remove;
	Parms.CallFunc_GetX_Value_Value = CallFunc_GetX_Value_Value;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Legendary__ReturnValue_1 = CallFunc_Legendary__ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

}

}


